class Solution
{
public:
    int removeDuplicates(vector<int> &nums)
    {
        int fwd;
        int bwd = 0;
        for (fwd = 1; fwd < nums.size(); fwd++)
        {
            if (nums[fwd] != nums[bwd])
            {
                bwd++;
                nums[bwd] = nums[fwd];
            }
        }
        return bwd + 1;
    }
};