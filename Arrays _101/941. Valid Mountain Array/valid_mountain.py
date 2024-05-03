class Solution:
    def validMountainArray(self, arr: List[int]) -> bool:
        max = -1
        max_idx = -1
        for i, item in enumerate(arr):
            if arr[i] > max:
                max = arr[i]
                max_idx = i

        if max_idx == 0 or max_idx == len(arr) - 1:
            return False

        i = 1
        while i <= max_idx:
            if arr[i] <= arr[i - 1]:
                return False
            i += 1

        while i < len(arr):
            if arr[i] >= arr[i - 1]:
                return False
            i += 1
        return True
