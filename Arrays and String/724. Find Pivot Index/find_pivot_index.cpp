class Solution
{
public:
    int pivotIndex(vector<int> &nums)
    {
        int left_sum = 0;
        int right_sum = accumulate(nums.begin(), nums.end(), 0);

        // printf("%d", right_sum);

        for (int i = 0; i < nums.size(); i++)
        {
            right_sum = right_sum - nums[i];
            left_sum = i > 0 ? left_sum + nums[i - 1] : left_sum;

            // printf("idx: %d, left_sum: %d, right_sum: %d\n", i, left_sum, right_sum);

            if (left_sum == right_sum)
            {
                return i;
            }
        }
        return -1;
    }
};