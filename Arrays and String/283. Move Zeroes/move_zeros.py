class Solution:
    def moveZeroes(self, nums: List[int]) -> None:
        """
        Do not return anything, modify nums in-place instead.
        """

        back = -1

        for i in range(len(nums)):
            if nums[i] == 0:
                back = i
                break

        if back == -1 or back == len(nums) - 1:
            return

        front = back + 1

        while front < len(nums):
            while nums[front] == 0:
                front += 1
                if front >= len(nums):
                    return

            temp = nums[back]
            nums[back] = nums[front]
            nums[front] = temp

            while nums[back] != 0:
                back += 1
                if back >= len(nums):
                    back += 1
                    if back >= len(nums):
                        return