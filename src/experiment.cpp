#include <random>
//#include <vector>
//#include "../include/knapsack.h"
#include "../include/experiment.h"
#include <chrono>
#include <fstream>
#include <iostream>

using namespace std;

vector<Item> generateItems(int n, int maxWeight, int maxValue)
{
    vector<Item> items(n);

    random_device rd;
    mt19937 gen(rd());

    uniform_int_distribution<> weightDist(1, maxWeight);
    uniform_int_distribution<> valueDist(1, maxValue);

    for (int i = 0; i < n; i++)
    {
        items[i].weight = weightDist(gen);
        items[i].value = valueDist(gen);
    }

    return items;
}

long long measureRecursive(vector<Item>& items, int W)
{
    int n = items.size();

    vector<vector<int>> memo(n + 1, vector<int>(W + 1, -1));

    auto start = chrono::high_resolution_clock::now();

    knapsackRecursive(items, n, W, memo);

    auto end = chrono::high_resolution_clock::now();

    return chrono::duration_cast<chrono::microseconds>(end - start).count();
}

long long measureIterative(vector<Item>& items, int W)
{
    auto start = chrono::high_resolution_clock::now();

    knapsackIterative(items, W);

    auto end = chrono::high_resolution_clock::now();

    return chrono::duration_cast<chrono::microseconds>(end - start).count();
}


void runExperiments()
{
    ofstream file("tests/results.csv");

    file << "n,W,recursive_time,iterative_time\n";

    int maxWeight = 50;
    int maxValue = 100;

    for(int n = 10; n <= 200; n += 10)
    {
        int W = 100;

        vector<Item> items = generateItems(n, maxWeight, maxValue);

        long long recTime = measureRecursive(items, W);
        long long iterTime = measureIterative(items, W);

        file << n << "," << W << "," << recTime << "," << iterTime << "\n";

        cout << "n=" << n
             << " recursive=" << recTime
             << " iterative=" << iterTime
             << endl;
    }

    file.close();
}