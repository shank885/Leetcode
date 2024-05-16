class Solution:
    def pivotIndex(self, nums: List[int]) -> int:
        left_sum = 0
        right_sum = sum(nums)

        for i in range(len(nums)):
            right_sum = right_sum - nums[i]
            left_sum = left_sum + nums[i - 1] if i > 0 else left_sum

            if left_sum == right_sum:
                return i

        return -1
