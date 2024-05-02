class Solution:
    def removeDuplicates(self, nums: List[int]) -> int:
        bwd = 0
        for fwd in range(1, len(nums)):
            if nums[fwd] != nums[bwd]:
                bwd += 1
                nums[bwd] = nums[fwd]
        return bwd + 1