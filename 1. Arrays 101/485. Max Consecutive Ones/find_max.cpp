class Solution
{
public:
    int findMaxConsecutiveOnes(vector<int> &nums)
    {
        int counter = 0;
        int max = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] == 1)
            {
                counter++;
                max = max > counter ? max : counter;
            }
            else
            {
                counter = 0;
            }
        }
        return max;
    }
};