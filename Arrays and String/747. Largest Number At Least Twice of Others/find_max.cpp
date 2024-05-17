class Solution
{
public:
    int dominantIndex(vector<int> &nums)
    {
        int maxIdx = -1;
        int maxVal = -1;

        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] > maxVal)
            {
                maxVal = nums[i];
                maxIdx = i;
            }
        }

        for (int i = 0; i < nums.size(); i++)
        {
            if (2 * nums[i] > maxVal && i != maxIdx)
            {
                return -1;
            }
        }
        return maxIdx;
    }
};