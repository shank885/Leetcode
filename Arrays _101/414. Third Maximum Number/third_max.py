class Solution:
    def thirdMax(self, nums: List[int]) -> int:
        max1, max2, max3 = float("-inf"), float("-inf"), float("-inf")

        for num in nums:
            if num > max1:
                max3 = max2
                max2 = max1
                max1 = num
            elif num < max1 and num > max2:
                max3 = max2
                max2 = num
            elif num < max2 and num > max3:
                max3 = num

        if max3 != float("-inf"):
            return max3
        else:
            return max1