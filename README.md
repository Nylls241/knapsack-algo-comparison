# 🏆 Knapsack Algorithm Comparison

## 📌 Problem Overview  
The **Knapsack Problem** is a well-known combinatorial optimization problem. Given a set of items, each with a **weight** and a **value**, the goal is to maximize the total value while staying within a given weight capacity. This problem models various real-world scenarios such as **investment optimization, resource allocation, and storage management**.  

## 📌 Algorithms Studied  
This project compares three different approaches to solving the **0/1 Knapsack Problem**:  
1. **Greedy Algorithm** – Selects items based on a local criterion (e.g., highest value-to-weight ratio). It is fast but does not guarantee an optimal solution.  
2. **Dynamic Programming** – Uses memoization to ensure an optimal solution at the cost of higher computational complexity.  
3. **Branch & Bound** – Explores solution space efficiently by eliminating non-promising subsets, often achieving optimality with better performance than dynamic programming.  

## 📌 Project Objectives  
- Implement and compare these three algorithms in **C++**.  
- Analyze their **computational complexity, execution time, and solution quality**.  
- Evaluate the trade-offs between **speed and optimality** in solving the knapsack problem.  

## Repository Structure  

```
knapsack-algo-comparison/
├── .gitignore        # Ignored files
├── README.md         # Project documentation
├── LICENSE           # License information
├── src/ → C++ source code
├── include/ → Header files
├── tests/ → Test cases and validation
└── docs/ → Documentation and analysis
```

## Usage  
```sh
# Compile the project
make
./knapsack
```

# Run tests
```sh
make test
./knapsack_test
```

# Analyze performance results
