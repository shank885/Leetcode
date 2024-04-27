class Solution:
    def duplicateZeros(self, arr: List[int]) -> None:
        """
        Do not return anything, modify arr in-place instead.
        """
        temp = []
        for item in arr:
            temp.append(item)

        i = 0
        dst_idx = 0
        while i < len(temp):
            arr[i] = temp[dst_idx]
            i += 1
            if i == len(temp):
                break
            if temp[dst_idx] == 0:
                arr[i] = 0
                i += 1
            dst_idx += 1