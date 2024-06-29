class Solution:
    def intersect(self, nums1: List[int], nums2: List[int]) -> List[int]:
        set1 = [0] * 1001
        set2 = [0] * 1001
        intersect = []

        for item in nums1:
            set1[item] += 1

        for item in nums2:
            set2[item] += 1

        for i in range(1001):
            count = min(set1[i], set2[i])
            while count:
                intersect.append(i)
                count -= 1

        return intersect