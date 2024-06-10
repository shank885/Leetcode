class Solution:
    def getRow(self, rowIndex: int) -> List[int]:
        res = [1]
        prev = 1

        for k in range(1, rowIndex + 1):
            val = prev * (rowIndex - k + 1) // k
            res.append(val)
            prev = val

        return res