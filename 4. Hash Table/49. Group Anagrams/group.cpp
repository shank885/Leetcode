class Solution
{
public:
    vector<vector<string>> groupAnagrams(vector<string> &strs)
    {
        vector<vector<string>> ans;
        unordered_map<string, vector<string>> mp;

        for (auto word : strs)
        {
            string sorted_word = word;
            sort(sorted_word.begin(), sorted_word.end());
            mp[sorted_word].push_back(word);
        }

        for (auto item : mp)
        {
            ans.push_back(item.second);
        }
        return ans;
    }
};