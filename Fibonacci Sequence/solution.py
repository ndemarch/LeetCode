class Solution:
    def __init__(self):
        self.sequence = {}
    def fib(self, n: int) -> int:
        if n in self.sequence:
            return self.sequence[n]
        if n <= 1:
            return n
        result = self.fib(n-1) + self.fib(n-2)
        self.sequence[n] = result
        return result
