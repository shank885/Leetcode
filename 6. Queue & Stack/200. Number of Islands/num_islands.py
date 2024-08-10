class Solution:
    def numIslands(self, grid: List[List[str]]) -> int:
        self.islands = 0
        self.visited = set()
        self.rows, self.cols = len(grid), len(grid[0])
        self.directions = [[1,0],[-1,0],[0,1],[0,-1]]

        for r in range(self.rows):
            for c in range(self.cols):
                if grid[r][c] == '1' and (r,c) not in self.visited:
                    self.islands += 1
                    self.bfs(r, c, grid)

        return self.islands
    
    def bfs(self, r, c, grid):
        q = deque()
        self.visited.add((r,c))
        q.append((r,c))

        while q:
            row, col = q.popleft()

            for dr, dc in self.directions:
                r, c = row + dr, col + dc
                if 0 <= r < self.rows and 0 <= c < self.cols and grid[r][c] == '1' and (r,c) not in self.visited:
                    q.append((r,c))
                    self.visited.add((r,c))

         

        