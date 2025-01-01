class Solution:
    def removeElement(self, nums: List[int], val: int) -> int:
        base_idx = 0

        for i, num in enumerate(nums):
            if num != val:
                nums[base_idx] = num
                base_idx += 1
        return base_idx