class Solution:
    def removeDuplicates(self, nums: List[int]) -> int:
        idx = 0
        val = nums[0]

        if len(nums) == 1:
            return 1

        for i in range(1, len(nums)):
            if nums[i] == val:
                continue
            else:
                idx += 1
                nums[idx] = nums[i]
                val = nums[i]
        return idx + 1