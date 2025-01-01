class Solution
{
public:
    vector<int> sortArrayByParity(vector<int> &nums)
    {
        int base_idx = nums.size() - 1;
        int temp;

        for (int i = 0; i < base_idx; i++)
        {
            if (nums[i] % 2 != 0)
            {
                while (nums[base_idx] % 2 != 0 && base_idx > i)
                {
                    base_idx--;
                }
                temp = nums[i];
                nums[i] = nums[base_idx];
                nums[base_idx] = temp;
                base_idx--;
            }
        }
        return nums;
    }
};