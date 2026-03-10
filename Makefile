# Compiler
CXX = g++

# Compiler flags
CXXFLAGS = -Wall -Wextra -std=c++17

# Executables
MAIN_EXEC = knapsack
TEST_EXEC = knapsack_test

# Sources
MAIN_SRC = src/main.cpp src/knapsack.cpp src/knapsack_resolution.cpp
TEST_SRC = src/experiment.cpp tests/experiment_tests.cpp src/knapsack.cpp src/knapsack_resolution.cpp

# Default target
all: $(MAIN_EXEC) $(TEST_EXEC)

# Main program
$(MAIN_EXEC):
	$(CXX) $(CXXFLAGS) $(MAIN_SRC) -o $(MAIN_EXEC)

# Test program
$(TEST_EXEC):
	$(CXX) $(CXXFLAGS) $(TEST_SRC) -o $(TEST_EXEC)

# Clean build files
clean:
	rm -f $(MAIN_EXEC) $(TEST_EXEC)

# Run helpers
run: $(MAIN_EXEC)
	./$(MAIN_EXEC)

test: $(TEST_EXEC)
	./$(TEST_EXEC)