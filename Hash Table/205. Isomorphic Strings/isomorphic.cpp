class Solution
{
public:
    bool isIsomorphic(string s, string t)
    {
        unordered_map<char, char> mapS;
        unordered_map<char, char> mapT;

        for (int i = 0; i < s.size(); i++)
        {
            char charS = s[i];
            char charT = t[i];

            if (mapS.find(charS) != mapS.end())
            {
                if (mapS[charS] != charT)
                {
                    return false;
                }
            }
            else
            {
                mapS[charS] = charT;
            }

            if (mapT.find(charT) != mapT.end())
            {
                if (mapT[charT] != charS)
                {
                    return false;
                }
            }
            else
            {
                mapT[charT] = charS;
            }
        }
        return true;
    }
};