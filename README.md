# 🏆 Knapsack Algorithm Comparison

## 📌 Problem Overview  
The **Knapsack Problem** is a well-known combinatorial optimization problem. Given a set of items, each with a **weight** and a **value**, the goal is to maximize the total value while staying within a given weight capacity. This problem models various real-world scenarios such as **investment optimization, resource allocation, and storage management**.  

## 📌 Algorithms Studied  
This project focuses on three algorithmic approaches to solving the 0/1 Knapsack Problem, each representing a different strategy in problem-solving:

    Greedy Algorithm
    This method selects items based on a simple heuristic, such as the highest value-to-weight ratio. It is straightforward to implement and fast, making it useful for large-scale instances.

    Dynamic Programming (DP)
    This approach solves the problem optimally by breaking it into subproblems and storing intermediate results (memoization). It is particularly effective for small to moderate input sizes.

    Branch and Bound
    This method systematically explores the solution space using upper bounds to eliminate non-promising branches. It aims to combine optimality with improved efficiency in certain cases.

## Project Objectives  
- Implement and compare these three algorithms in **C++**.  
- Analyze their **computational complexity, execution time, and solution quality**.  
- Evaluate the trade-offs between **speed and optimality** in solving the knapsack problem.  
- Highlight the importance of **algorithm selection** in problem-solving, demonstrating how different approaches impact efficiency and optimality in the knapsack problem.    

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
