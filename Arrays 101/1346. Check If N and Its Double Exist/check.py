class Solution:
    def checkIfExist(self, arr: List[int]) -> bool:
        mp = {}
        for item in arr:
            if item not in mp.keys():
                mp[item] = 1
            else:
                mp[item] = mp[item] + 1
        for i, item in enumerate(arr):
            if item in mp.keys():
                if item == 0 and mp[0] == 1:
                    continue
                if 2 * item in mp.keys():
                    return True
        return False