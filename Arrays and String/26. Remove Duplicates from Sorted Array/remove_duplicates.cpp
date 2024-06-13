class Solution
{
public:
    int removeDuplicates(vector<int> &nums)
    {
        int idx = 0;
        int val = nums[0];

        if (nums.size() == 1)
        {
            return 1;
        }

        for (int i = 1; i < nums.size(); i++)
        {
            if (nums[i] == val)
            {
                continue;
            }
            else
            {
                idx++;
                nums[idx] = nums[i];
                val = nums[i];
            }
        }
        return idx + 1;
    }
};