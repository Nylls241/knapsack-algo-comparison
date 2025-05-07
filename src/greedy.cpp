#include <algorithm>
#include <iostream>
#include "../include/knapsack.h"

/**
 * @brief Solves the knapsack problem using the greedy algorithm
 * 
 * @param items Vector of items (value, weight)
 * @param capacity Knapsack capacity
 * @return A pair containing the selected item indices and the total value
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

    // Step 3: Initialize selection vector and variables
    std::vector<int> selectedItems; // Store selected item numbers
    int currentWeight = 0;  // Keep track of the current weight in the knapsack
    int totalValue = 0;     // Keep track of the total value of selected items

    // Step 4: Iterate through the sorted items
    for (const auto& [ratio, index] : ratios) {
        if (currentWeight + items[index].weight <= capacity) {
            // Select the item
            selectedItems.push_back(index + 1); // Store item number (1-based index)
            currentWeight += items[index].weight;
            totalValue += items[index].value;
        }
    }

    // Step 5: Return the selected items and total value
    return {selectedItems, totalValue};
}
