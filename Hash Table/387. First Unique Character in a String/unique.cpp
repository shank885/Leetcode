class Solution
{
public:
    int firstUniqChar(string s)
    {
        vector<int> hashset(26, 0);

        for (int i = 0; i < s.size(); i++)
        {
            hashset[s[i] - 'a'] += 1;
        }
        for (int i = 0; i < s.size(); i++)
        {
            if (hashset[s[i] - 'a'] == 1)
            {
                return i;
            }
        }

        return -1;
    }
};