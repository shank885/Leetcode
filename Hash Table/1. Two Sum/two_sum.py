class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        hashmap = {nums[0]: 0}
        indices = []

        for i in range(1, len(nums)):
            if target - nums[i] in hashmap:
                indices.append(i)
                indices.append(hashmap[target - nums[i]])
                break
            hashmap[nums[i]] = i
        return indices