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


// Dynamic Prog (Rec)
/**
 * @brief Recursive knapsack solver with memoization
 *
 * Computes the optimal value using the first i items
 * with a remaining capacity W.
 *
 * @param items Vector of items
 * @param i Number of items considered
 * @param W Remaining capacity
 * @param memo Memoization table
 * @return Maximum achievable value
 */
int knapsackRecursive(
    const std::vector<Item>& items,
    int i,
    int W,
    std::vector<std::vector<int>>& memo
);

// Dynamic Prog (Iter)
/**
 * @brief Iterative knapsack solver using dynamic programming
 *
 * Computes the maximum achievable value of a knapsack problem
 * iteratively using DP table.
 *
 * @param items Vector of items
 * @param capacity Maximum capacity of the knapsack
 * @return Maximum achievable value
 */
int knapsackIterative(const std::vector<Item>& items, int capacity);

#endif // KNAPSACK_H