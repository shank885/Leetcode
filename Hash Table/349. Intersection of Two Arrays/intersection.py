class Solution:
    def intersection(self, nums1: List[int], nums2: List[int]) -> List[int]:
        hashset = [False] * 1001
        intersect = []

        for item in nums1:
            if hashset[item] == False:
                hashset[item] = True

        for item in nums2:
            if hashset[item] == True:
                hashset[item] = False
                intersect.append(item)

        return intersect