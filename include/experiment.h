#ifndef EXPERIMENT_H
#define EXPERIMENT_H

#include <vector>
#include "../include/knapsack.h"

using namespace std;

vector<Item> generateItems(int n, int maxWeight, int maxValue); 
long long measureRecursive(vector<Item>& items, int W); 
long long measureIterative(vector<Item>& items, int W); 
void runExperiments();

#endif