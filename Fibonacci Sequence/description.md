# Intuition
Initially solved with Python, this is a c++ attempt with a similar dynamic programming structure.

# Approach
Recursively call the sum of $F_{n-1}$ and $F_{n-2}$ in the fibonacci sequence and store the results in a dictionary (memoization). I use the `unorderd_map` tool to create a dictionary with integer key-value. The function first checks if the $n^{th}$ value in the fibonacci sequence exists, if not we then proceed to our recursive calling and store the $n^{th}$ fibonacci sequence value in our dictionary. This will start from $F_0 = 0$ and $F_1 = 1$ and iterate forward.

# Complexity
- Time complexity:
$O(N)$ : from recursively calling `fib` $n$ times

- Space complexity:
$O(N)$ : because sequence unordered map stores values from $0$ to $n$
