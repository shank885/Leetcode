class Solution {
public:
    int numJewelsInStones(string jewels, string stones)
    {
        map<char, bool> m;

        for(auto item: jewels)
        {
            m[item] = true;
        }
        int count = 0;

        for(auto item: stones)
        {
            if (m[item])
            {
                count++;
            }
        }
        return count;       
    }
};