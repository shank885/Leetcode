class Solution:
    def dfs(self, n, sq, _sum):
        if n == 0:
            self.ans = min(self.ans, _sum)
            return
        if sq == 0:
            return
        
        square = sq * sq

        if n >= square:
            self.dfs(n % square, sq - 1, _sum + floor(n/square))
        
        self.dfs(n, sq-1, _sum)

    def numSquares(self, n: int) -> int:
        self.ans = n
        self.dfs(n, floor(sqrt(n)), 0)
        return self.ans

