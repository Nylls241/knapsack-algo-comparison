/**
 * @file knapsack.cpp
 * @brief Implementation of knapsack problem utilities
 * @author Nylls Boutoto
 * @date 2025-03-02
 */

#include <iostream>
#include <vector>
#include "../include/knapsack.h"

using namespace std;

/**
 * @brief Reads items and knapsack capacity from standard input
 * 
 * Prompts the user to enter the number of items, the knapsack capacity,
 * and separately asks for the weight and then the value of each item.
 * 
 * @param[out] items Vector to store the read items
 * @param[out] W Reference to store the knapsack capacity
 * @return void
 */
void readItems(vector<Item>& items, int& W) {
    int n;
    cout << "Enter the number of items: ";
    cin >> n;
    
    cout << "Enter the capacity of the knapsack: ";
    cin >> W;
    
    items.resize(n);
    for (int i = 0; i < n; i++) {
        cout << "Enter weight of item " << i + 1 << ": ";
        cin >> items[i].weight;
        
        cout << "Enter value of item " << i + 1 << ": ";
        cin >> items[i].value;
    }
}

/**
 * @brief Displays all items and the knapsack capacity
 * 
 * This function prints the knapsack capacity and details of all items
 * including their weights and values to standard output.
 * 
 * @param[in] items Vector of items to display
 * @param[in] W Knapsack capacity
 * @return void
 */
void printItems(const vector<Item>& items, int W) {
    cout << "Knapsack capacity: " << W << endl;
    cout << "Items:\n";
    for (size_t i = 0; i < items.size(); i++) {
        cout << "Item " << i + 1 << " - Weight: " << items[i].weight 
             << ", Value: " << items[i].value << endl;
    }
}