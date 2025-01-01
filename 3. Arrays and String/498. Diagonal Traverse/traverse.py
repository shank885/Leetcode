class Solution:
    def findDiagonalOrder(self, mat: List[List[int]]) -> List[int]:
        diag = []
        i = 0
        j = 0
        n = len(mat)
        m = len(mat[0])
        adder = -1

        diag.append(mat[i][j])

        while i < n - 1 or j < m - 1:
            if j < m - 1 and ((i == 0 and adder == -1) or (i == n - 1 and adder == 1)):
                j += 1
                adder = -adder
            elif (j == 0 and adder == 1) or (j == m - 1 and adder == -1):
                i += 1
                adder = -adder
            else:
                i += adder
                j -= adder

            diag.append(mat[i][j])

        return diag