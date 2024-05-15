class Solution
{
public:
    void moveZeroes(vector<int> &nums)
    {
        int read_ptr = 0;
        int write_ptr = 0;

        while (read_ptr < nums.size())
        {
            if (nums[read_ptr] == 0)
            {
                read_ptr++;
                continue;
            }
            nums[write_ptr++] = nums[read_ptr++];
        }
        while (write_ptr < nums.size())
        {
            nums[write_ptr++] = 0;
        }
    }
};