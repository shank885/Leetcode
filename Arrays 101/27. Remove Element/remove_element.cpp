class Solution
{
public:
    int removeElement(vector<int> &nums, int val)
    {
        int i = 0;
        int base_idx = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] != val)
            {
                nums[base_idx++] = nums[i];
            }
        }
        return base_idx;
    }
};