class Solution:
    def sortArrayByParity(self, nums: List[int]) -> List[int]:
        base_idx = len(nums) - 1
        i = 0
        while i < base_idx:
            if nums[i] % 2 != 0:
                while nums[base_idx] % 2 != 0 and base_idx > i:
                    base_idx -= 1
                temp = nums[i]
                nums[i] = nums[base_idx]
                nums[base_idx] = temp
                base_idx -= 1
            i += 1
        return nums
