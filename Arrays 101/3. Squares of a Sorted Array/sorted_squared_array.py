class Solution:
    def sortedSquares(self, nums: List[int]) -> List[int]:
        for idx, item in enumerate(nums):
            nums[idx] = nums[idx] * nums[idx]
        nums.sort()
        return nums
