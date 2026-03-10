# Knapsack Algorithm Comparison

This project implements and compares two approaches for solving the Knapsack Problem using Dynamic Programming in C++.

The goal is to study the difference between:

a recursive implementation with memoization (top-down)

an iterative implementation (bottom-up)

The project also includes an experimental evaluation to compare their execution times.

## Project Structure
knapsack-algo-comparison/
├── Makefile
├── README.md
├── include/
│   └── knapsack.h
├── src/
│   ├── main.cpp
│   ├── knapsack.cpp
│   ├── knapsack_resolution.cpp
│   └── experiment.cpp
├── tests/
│   └── experiment_tests.cpp
└── docs/
    └── report.pdf

## Build

To compile the project:

```
make
```

This will generate the executable:

```
knapsack & knapsack_test
```

Run the program:

```
./knapsack
./knapsack_test ~ for the experiments tests
```
## Running Experiments

To compile and run the experimental tests:

```
make test
./knapsack_test
```

The experiments measure the execution time of both implementations for different numbers of items.

## Features

- Implementation of the Knapsack problem

- Recursive dynamic programming with memoization

- Iterative dynamic programming (bottom-up)

- Execution time comparison

- Experimental benchmarking

## Requirements

```
C++17

g++

Make
```

## Author

Nylls Boutoto
Engineering student in Computer Science