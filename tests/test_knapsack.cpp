/**
 * @file main.cpp
 * @brief Main entry point for the knapsack problem application
 * @author Nylls Boutoto
 * @date 2025-03-02
 */

#include <iostream>
#include "../include/knapsack.h"

using namespace std;

/**
 * @brief Main function for the knapsack problem solver
 * 
 * This program initializes a set of predefined items with their weights and values,
 * sets a fixed knapsack capacity, and displays the items for verification.
 * 
 * @return int Exit status (0 for success)
 */
int main() {
    // Initialize items with predefined weights and values
    // {weight, value}
    vector<Item> items = { {2, 10}, {3, 20}, {4, 30}, {5, 50} };
    
    // Set fixed knapsack capacity
    int W = 5;
    
    // Display items for verification
    printItems(items, W);
    
    return 0;
}