class Solution:
    def findMaxConsecutiveOnes(self, nums: List[int]) -> int:
        counter = 0
        max_1 = 0
        for item in nums:
            if item == 1:
                counter += 1
                max_1 = max(max_1, counter)
            else:
                counter = 0
        return max_1
