import pandas as pd
import matplotlib.pyplot as plt

data = pd.read_csv("tests/results.csv")

plt.plot(data["n"], data["recursive_time"], label="Recursive DP")
plt.plot(data["n"], data["iterative_time"], label="Iterative DP")

plt.xlabel("Number of items")
plt.ylabel("Execution time (µs)")
plt.legend()

plt.show()