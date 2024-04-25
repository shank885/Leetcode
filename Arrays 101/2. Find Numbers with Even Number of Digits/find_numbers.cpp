class Solution
{
public:
    int findNumbers(vector<int> &nums)
    {
        int counter = 0;

        for (int i = 0; i < nums.size(); i++)
        {
            int num = nums[i];
            int num_digits = 0;

            while (num)
            {
                num_digits++;
                num = num / 10;
            }
            if (num_digits % 2 == 0)
            {
                counter++;
            }
        }
        return counter;
    }
};