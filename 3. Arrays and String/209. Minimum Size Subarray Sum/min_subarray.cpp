class Solution
{
public:
    int minSubArrayLen(int target, vector<int> &nums)
    {
        int l = 0;
        int r = -1;
        int sum = 0;
        int min_len = nums.size() + 1;

        while (l < nums.size())
        {
            if (r + 1 < nums.size() && sum < target)
            {
                sum += nums[++r];
            }
            else
            {
                sum -= nums[l++];
            }
            if (sum >= target)
            {
                min_len = min(min_len, r - l + 1);
            }
        }
        min_len = min_len == nums.size() + 1 ? 0 : min_len;
        return min_len;
    }
};