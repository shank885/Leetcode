class Solution:
    def getRow(self, rowIndex: int) -> List[int]:
        return self.pascal(rowIndex)
    
    def pascal(self, n):
        if n == 0:
            return [1]
        if n == 1:
            return [1,1]

        row = [None for i in range(n+1)]
        prev = self.pascal(n-1)

        row[0] = 1
        row[n] = 1

        for i in range(1, n):
            row[i] = prev[i-1] + prev[i]

        return row