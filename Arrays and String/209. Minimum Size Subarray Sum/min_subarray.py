class Solution:
    def minSubArrayLen(self, target: int, nums: List[int]) -> int:
        l = 0
        r = -1
        sum = 0
        min_len = len(nums) + 1

        while l < len(nums):
            if r + 1 < len(nums) and sum < target:
                r += 1
                sum += nums[r]
            else:
                sum -= nums[l]
                l += 1
            if sum >= target:
                min_len = min(min_len, r - l + 1)

        min_len = 0 if min_len == len(nums) + 1 else min_len
        return min_len
