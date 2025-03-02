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
 * This program reads items data and knapsack capacity from user input,
 * then displays the items to verify the input.
 * 
 * @return int Exit status (0 for success)
 */
int main() {
    vector<Item> items;
    int W;
    
    // Read data from user input
    readItems(items, W);
    
    // Display items for verification
    printItems(items, W);
    
    return 0;
}