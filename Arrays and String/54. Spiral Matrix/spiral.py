class Solution:
    def spiralOrder(self, matrix: List[List[int]]) -> List[int]:
        spiral = []

        M = len(matrix)
        N = len(matrix[0])

        left_col = 0
        right_col = N - 1
        top_row = 0
        bot_row = M - 1

        while top_row <= bot_row and left_col <= right_col:
            for j in range(left_col, right_col + 1):
                spiral.append(matrix[top_row][j])
            top_row += 1

            if top_row > bot_row or left_col > right_col:
                break

            for i in range(top_row, bot_row + 1):
                spiral.append(matrix[i][right_col])
            right_col -= 1

            if top_row > bot_row or left_col > right_col:
                break

            for j in range(right_col, left_col - 1, -1):
                spiral.append(matrix[bot_row][j])
            bot_row -= 1

            if top_row > bot_row or left_col > right_col:
                break

            for i in range(bot_row, top_row - 1, -1):
                spiral.append(matrix[i][left_col])
            left_col += 1

        return spiral
