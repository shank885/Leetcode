class Solution
{
public:
    int findMaxConsecutiveOnes(vector<int> &nums)
    {
        int max = 0;
        int curr = 0;

        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] == 1)
            {
                curr += 1;
            }
            else
            {
                max = curr > max ? curr : max;
                curr = 0;
            }
        }
        max = curr > max ? curr : max;

        return max;
    }
};