class Solution:
    def containsDuplicate(self, nums: List[int]) -> bool:
        dictionary = {}

        for item in nums:
            if item in dictionary:
                return True
            else:
                dictionary[item] = 1

        return False
