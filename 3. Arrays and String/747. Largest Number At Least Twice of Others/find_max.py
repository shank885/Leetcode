class Solution:
    def dominantIndex(self, nums: List[int]) -> int:
        maxIdx = -1
        maxVal = -1

        for i in range(len(nums)):
            if nums[i] > maxVal:
                maxVal = nums[i]
                maxIdx = i

        for i in range(len(nums)):
            if 2 * nums[i] > maxVal and i != maxIdx:
                return -1

        return maxIdx
