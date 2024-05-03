class Solution:
    def moveZeroes(self, nums: List[int]) -> None:
        """
        Do not return anything, modify nums in-place instead.
        """
        read_ptr, write_ptr = 0, 0
        while read_ptr < len(nums):
            if nums[read_ptr] == 0:
                read_ptr += 1
                continue
            nums[write_ptr] = nums[read_ptr]
            write_ptr += 1
            read_ptr += 1

        while write_ptr < len(nums):
            nums[write_ptr] = 0
            write_ptr += 1
