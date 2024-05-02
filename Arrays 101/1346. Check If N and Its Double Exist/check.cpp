class Solution
{
public:
    bool checkIfExist(vector<int> &arr)
    {
        unordered_map<int, int> mp;
        for (auto it : arr)
        {
            mp[it]++;
        }

        for (int i = 0; i < arr.size(); i++)
        {
            if (arr[i] == 0 && mp[0] == 1)
            {
                continue;
            }
            if (mp.find(2 * arr[i]) != mp.end())
            {
                return true;
            }
        }
        return false;
    }
};