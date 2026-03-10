/**
 * @file main.cpp
 * @brief Main entry point for the knapsack problem application
 * @author Nylls Boutoto
 */

#include <iostream>
//#include <vector>
#include "../include/knapsack.h"

using namespace std;

/**
 * @brief Main function for the knapsack problem solver
 * 
 * This program reads items data and knapsack capacity from user input,
 * then displays the items to verify the input.
 * 
 * @return int Exit status (0 for success)
 */
int main() {

    vector<Item> items;
    int W;

    // Read input data
    readItems(items, W);

    // Display items
    printItems(items, W);

    int n = items.size();

    // Memoization table for recursive version
    vector<vector<int>> memo(n + 1, vector<int>(W + 1, -1));

    // Solve using recursive dynamic programming
    int recursiveResult = knapsackRecursive(items, n, W, memo);

    cout << "\nResult using recursive DP: " << recursiveResult << endl;

    // Solve using iterative dynamic programming
    int iterativeResult = knapsackIterative(items, W);

    cout << "Result using iterative DP: " << iterativeResult << endl;

    return 0;
}