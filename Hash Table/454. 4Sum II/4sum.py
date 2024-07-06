class Solution:
    def fourSumCount(
        self, nums1: List[int], nums2: List[int], nums3: List[int], nums4: List[int]
    ) -> int:
        firstTwoSum = defaultdict(int)

        for i in nums1:
            for j in nums2:
                firstTwoSum[i + j] += 1

        count = 0

        for i in nums3:
            for j in nums4:
                count += firstTwoSum[-(i + j)]

        return count