/**
 * @file knapsack.h
 * @brief Header file for knapsack problem solver
 * @author Nylls Boutoto
 * @date 2025-03-02
 */

#ifndef KNAPSACK_H
#define KNAPSACK_H

#include <vector>

/**
 * @struct Item
 * @brief Represents an item with weight and value for the knapsack problem
 */
struct Item {
    int weight; /**< Weight of the item */
    int value;  /**< Value of the item */
};

/**
 * @brief Reads items and knapsack capacity from standard input
 * 
 * @param[out] items Vector to store the read items
 * @param[out] W Reference to store the knapsack capacity
 * @return void
 */
void readItems(std::vector<Item>& items, int& W);

/**
 * @brief Displays all items and the knapsack capacity (for debugging purposes)
 * 
 * @param[in] items Vector of items to display
 * @param[in] W Knapsack capacity
 * @return void
 */
void printItems(const std::vector<Item>& items, int W);

// Greedy algorithm 

/**
 * @brief Solves the knapsack problem using the greedy algorithm
 * 
 * @param[in] items Vector of items (value, weight)
 * @param[in] capacity Knapsack capacity
 * @return A pair containing the binary selection vector and the total value
 */
std::pair<std::vector<int>, int> greedyKnapsack(const std::vector<Item>& items, int capacity);

#endif // KNAPSACK_H