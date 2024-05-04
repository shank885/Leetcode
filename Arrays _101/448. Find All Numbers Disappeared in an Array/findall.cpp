class Solution
{
public:
    vector<int> findDisappearedNumbers(vector<int> &nums)
    {
        vector<bool> ids;
        vector<int> non_existing;

        for (int i = 0; i <= nums.size(); i++)
        {
            ids.push_back(false);
        }

        for (int i = 0; i < nums.size(); i++)
        {
            ids[nums[i]] = true;
        }

        for (int i = 1; i <= nums.size(); i++)
        {
            if (!ids[i])
            {
                non_existing.push_back(i);
            }
        }
        return non_existing;
    }
};