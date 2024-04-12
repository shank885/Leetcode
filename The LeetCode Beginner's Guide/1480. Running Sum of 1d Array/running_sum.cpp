class Solution
{
public:
    vector<int> runningSum(vector<int> &nums)
    {
        vector<int> sum_vect;
        int running_sum = 0;
        for (auto val : nums)
        {
            running_sum += val;
            sum_vect.push_back(running_sum);
        }
        return sum_vect;
    }
};