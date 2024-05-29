class Solution
{
public:
    int removeElement(vector<int> &nums, int val)
    {
        int slow = 0;
        int fast = 0;
        int num_unique = 0;

        while (fast < nums.size())
        {
            if (nums[fast] != val)
            {
                nums[slow++] = nums[fast++];
                num_unique++;
            }
            else
            {
                fast++;
            }
        }
        return num_unique;
    }
};