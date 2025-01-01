class Solution
{
public:
    void moveZeroes(vector<int> &nums)
    {
        int front;
        int back = -1;

        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] == 0)
            {
                back = i;
                break;
            }
        }
        if (back == -1 || back == nums.size() - 1)
        {
            return;
        }

        front = back + 1;

        while (front < nums.size())
        {
            while (nums[front] == 0)
            {
                front++;
                if (front >= nums.size())
                {
                    return;
                }
            }
            swap(nums[back], nums[front]);

            while (nums[back] != 0)
            {
                back++;
                if (back >= nums.size())
                {
                    back++;
                    if (back >= nums.size())
                    {
                        return;
                    }
                }
            }
        }
    }
};