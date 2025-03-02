# Compiler definition
CC = g++

# Compiler flags: enable all warnings and use C++17 standard
CFLAGS = -Wall -std=c++17

# Source files for the main application
SRC = src/main.cpp src/knapsack.cpp

# Source files for the test application
TEST_SRC = tests/test_knapsack.cpp src/knapsack.cpp

# Include directory path
INCLUDE = -Iinclude

# Output executable name for the main application
OUTPUT = knapsack

# Output executable name for the test application
TEST_OUTPUT = knapsack_test

# Default target: build both main application and tests
all: $(OUTPUT) $(TEST_OUTPUT)

# Compile the main application
$(OUTPUT): $(SRC)
	$(CC) $(CFLAGS) $(SRC) $(INCLUDE) -o $(OUTPUT)

# Compile the test application
$(TEST_OUTPUT): $(TEST_SRC)
	$(CC) $(CFLAGS) $(TEST_SRC) $(INCLUDE) -o $(TEST_OUTPUT)

# Target to run the main application
run: $(OUTPUT)
	./$(OUTPUT)

# Target to run the test suite
test: $(TEST_OUTPUT)
	./$(TEST_OUTPUT)

# Target to clean compiled executables
clean:
	rm -f $(OUTPUT) $(TEST_OUTPUT)
