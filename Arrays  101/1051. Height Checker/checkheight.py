class Solution:
    def heightChecker(self, heights: List[int]) -> int:
        temp = heights.copy()
        heights.sort()

        count = 0
        for i in range(len(heights)):
            if heights[i] != temp[i]:
                count += 1
        return count