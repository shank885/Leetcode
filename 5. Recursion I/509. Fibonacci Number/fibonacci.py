class Solution:
    def __init__(self):
        self.cache = {}

    def fib(self, n: int) -> int:
        if n in self.cache:
            return self.cache[n]
        
        if n < 2:
            return n

        result = self.fib(n-1) + self.fib(n-2)
        self.cache[n] = result

        return result
