class Solution:
    def replaceElements(self, arr: List[int]) -> List[int]:
        max_val = arr[len(arr) - 1]
        arr[len(arr) - 1] = -1

        for i in range(len(arr) - 2, -1, -1):
            temp = arr[i]
            arr[i] = max_val
            max_val = max(max_val, temp)

        return arr