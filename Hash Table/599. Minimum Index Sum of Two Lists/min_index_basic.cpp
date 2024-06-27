class Solution
{
public:
    vector<string> findRestaurant(vector<string> &list1, vector<string> &list2)
    {
        vector<string> ans;
        unordered_map<string, int> hashmap;

        for (int i = 0; i < list1.size(); i++)
        {
            for (int j = 0; j < list2.size(); j++)
            {
                if (list2[j] == list1[i])
                {
                    hashmap[list2[j]] = i + j;
                }
            }
        }

        int min_val = INT_MAX;
        for (auto item : hashmap)
        {
            if (item.second <= min_val)
            {
                min_val = item.second;
            }
        }

        for (auto item : hashmap)
        {
            if (item.second == min_val)
            {
                ans.push_back(item.first);
            }
        }
        return ans;
    }
};