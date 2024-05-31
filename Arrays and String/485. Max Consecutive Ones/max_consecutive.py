class Solution:
    def findMaxConsecutiveOnes(self, nums: List[int]) -> int:
        maximum = 0
        curr = 0

        for i in range(len(nums)):
            if nums[i] == 1:
                curr += 1
            else:
                maximum = maximum if maximum > curr else curr
                curr = 0
        maximum = maximum if maximum > curr else curr
        return maximum