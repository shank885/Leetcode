// complexity: O(n)
class Solution
{
public:
    vector<int> sortedSquares(vector<int> &nums)
    {
        int min = INT_MAX;
        int min_idx = -1;

        for (int i = 0; i < nums.size(); i++)
        {
            nums[i] = abs(nums[i]);

            if (nums[i] < min)
            {
                min = nums[i];
                min_idx = i;
            }
        }

        int fwd_idx = min_idx + 1;
        int bwd_idx = min_idx - 1;
        vector<int> sq_arr;

        printf("min: %d fwd: %d, bwd: %d", min_idx, fwd_idx, bwd_idx);

        sq_arr.push_back(nums[min_idx] * nums[min_idx]);

        for (int i = 1; i < nums.size(); i++)
        {
            if (fwd_idx > nums.size() - 1 || bwd_idx < 0)
            {
                break;
            }
            if (nums[bwd_idx] < nums[fwd_idx])
            {
                sq_arr.push_back(nums[bwd_idx] * nums[bwd_idx]);
                bwd_idx--;
            }
            else
            {
                sq_arr.push_back(nums[fwd_idx] * nums[fwd_idx]);
                fwd_idx++;
            }
        }
        while (bwd_idx > -1)
        {
            sq_arr.push_back(nums[bwd_idx] * nums[bwd_idx]);
            bwd_idx--;
        }
        while (fwd_idx < nums.size())
        {
            sq_arr.push_back(nums[fwd_idx] * nums[fwd_idx]);
            fwd_idx++;
        }
        return sq_arr;
    }
};

// complexity: O(nlog(n))
class Solution
{
public:
    vector<int> sortedSquares(vector<int> &nums)
    {
        for (int i = 0; i < nums.size(); i++)
        {
            nums[i] = nums[i] * nums[i];
        }
        sort(nums.begin(), nums.end());
        return nums;
    }
};