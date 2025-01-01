class Solution
{
public:
    int fourSumCount(vector<int> &nums1, vector<int> &nums2, vector<int> &nums3, vector<int> &nums4)
    {
        unordered_map<int, int> firstTwoSum;

        for (auto i : nums1)
        {
            for (auto j : nums2)
            {
                firstTwoSum[i + j]++;
            }
        }

        int count = 0;

        for (auto i : nums3)
        {
            for (auto j : nums4)
            {
                count += firstTwoSum[-(i + j)];
            }
        }
        return count;
    }
};