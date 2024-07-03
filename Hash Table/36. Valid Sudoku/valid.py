class Solution:
    def isValidSudoku(self, board: List[List[str]]) -> bool:
        num = 9
        row = [[False for i in range(num)] for j in range(num)]
        col = [[False for i in range(num)] for j in range(num)]
        subGrid = [[False for i in range(num)] for j in range(num)]

        for r in range(num):
            for c in range(num):
                if board[r][c] == '.':
                    continue

                idx = ord(board[r][c]) - ord('0') - 1
                gridNum = r//3 * 3 + c//3

                if row[r][idx] or col[c][idx] or subGrid[gridNum][idx]:
                    return False
                
                row[r][idx] = True
                col[c][idx] = True
                subGrid[gridNum][idx] = True
        
        return True 
        