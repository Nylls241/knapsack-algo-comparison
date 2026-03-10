#include <vector>
#include "../include/knapsack.h"
#include <algorithm>

using namespace std;

/**
 * @brief Recursive knapsack solver with memoization
 *
 * Computes the maximum achievable value of a knapsack problem
 * using the first i items and remaining capacity W.
 *
 * @param items Vector of items
 * @param i Number of items considered (from the first i items)
 * @param W Remaining capacity of the knapsack
 * @param memo 2D memoization table to store intermediate results
 * @return Maximum achievable value with the first i items and capacity W
 */
int knapsackRecursive(
    const vector<Item>& items,
    int i,
    int W,
    vector<vector<int>>& memo
)
{
    // Base case: no items left or no capacity
    if (i == 0 || W == 0)
        return 0;

    // Return cached result if already computed
    if (memo[i][W] != -1)
        return memo[i][W];

    // If current item is too heavy, skip it
    if (items[i - 1].weight > W)
    {
        memo[i][W] = knapsackRecursive(items, i - 1, W, memo);
    }
    else
    {
        // Compute value if we exclude the item
        int exclude = knapsackRecursive(items, i - 1, W, memo);

        // Compute value if we include the item
        int include = items[i - 1].value +
                      knapsackRecursive(
                          items,
                          i - 1,
                          W - items[i - 1].weight,
                          memo
                      );

        // Store the best value in memo table
        memo[i][W] = max(exclude, include);
    }

    return memo[i][W];
}

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
int knapsackIterative(const std::vector<Item>& items, int capacity) {
    int n = items.size();

    // DP table: (n+1) x (capacity+1), initialized to 0
    std::vector<std::vector<int>> dp(n + 1, std::vector<int>(capacity + 1, 0));

    for (int i = 1; i <= n; i++) {
        int weight = items[i - 1].weight;
        int value = items[i - 1].value;

        for (int w = 0; w <= capacity; w++) {

            // Case: current item doesn't fit
            if (weight > w) {
                dp[i][w] = dp[i - 1][w];
            }
            else {
                // Take the maximum between excluding or including the item
                dp[i][w] = std::max(
                    dp[i - 1][w],                 // exclude item
                    dp[i - 1][w - weight] + value // include item
                );
            }
        }
    }

    return dp[n][capacity];
}