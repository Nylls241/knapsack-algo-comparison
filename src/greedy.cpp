#include <algorithm>
#include <iostream>
#include "../include/knapsack.h"

/**
 * @brief Solves the knapsack problem using the greedy algorithm
 * 
 * @param items Vector of items (value, weight)
 * @param capacity Knapsack capacity
 * @return A pair containing the binary selection vector and the total value
 */
std::pair<std::vector<int>, int> greedyKnapsack(const std::vector<Item>& items, int capacity) {
    // Step 1: Create a vector of items with their value-to-weight ratio
    std::vector<std::pair<double, int>> ratios; // Pair of ratio and index
    for (size_t i = 0; i < items.size(); ++i) {
        double ratio = static_cast<double>(items[i].value) / items[i].weight;
        ratios.emplace_back(ratio, i);
    }

    // Step 2: Sort items by their value-to-weight ratio in descending order
    std::sort(ratios.begin(), ratios.end(), [](const std::pair<double, int>& a, const std::pair<double, int>& b) {
        return a.first > b.first;
    });

    // Step 3: Initialize solution vector and variables
    std::vector<int> solution(items.size(), 0); // Binary selection array
    int currentWeight = 0;
    int totalValue = 0;

    // Step 4: Iterate through the sorted items
    for (const auto& [ratio, index] : ratios) {
        if (currentWeight + items[index].weight <= capacity) {
            // Select the item
            solution[index] = 1;
            currentWeight += items[index].weight;
            totalValue += items[index].value;
        }
    }

    // Step 5: Return the solution and total value
    return {solution, totalValue};
}