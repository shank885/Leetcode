class Solution
{
public:
    bool containsDuplicate(vector<int> &nums)
    {
        unordered_set<int> dict;
        for (auto item : nums)
        {
            if (dict.count(item) > 0)
            {
                return true;
            }
            else
            {
                dict.insert(item);
            }
        }
        return false;
    }
};