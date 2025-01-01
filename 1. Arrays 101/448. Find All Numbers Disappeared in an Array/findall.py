class Solution:
    def findDisappearedNumbers(self, nums: List[int]) -> List[int]:
        ids = []
        non_existing = []

        for i in range(len(nums) + 1):
            ids.append(False)

        for i in range(len(nums)):
            ids[nums[i]] = True

        for i in range(1, len(nums) + 1):
            if not ids[i]:
                non_existing.append(i)

        return non_existing