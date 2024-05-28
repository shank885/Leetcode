class Solution:
    def twoSum(self, numbers: List[int], target: int) -> List[int]:
        idx1 = 0
        idx2 = len(numbers) - 1
        indices = []

        while idx1 < idx2:
            sum = numbers[idx1] + numbers[idx2]
            if sum > target:
                idx2 -= 1
            elif sum < target:
                idx1 += 1
            else:
                indices.append(idx1 + 1)
                indices.append(idx2 + 1)
                return indices

        return indices
