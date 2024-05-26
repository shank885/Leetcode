class Solution
{
public:
    string longestCommonPrefix(vector<string> &strs)
    {
        string common_prefix = "";
        int min_len = 200;

        //  find min length string
        for (auto item : strs)
        {
            min_len = min_len < item.length() ? min_len : item.length();
        }

        // if min length string is Null
        if (min_len == 0)
        {
            return common_prefix;
        }

        // check each char iteraively if it exist in all the strings
        for (int char_idx = 0; char_idx < min_len; char_idx++)
        {
            for (int str_idx = 1; str_idx < strs.size(); str_idx++)
            {
                if (strs[str_idx][char_idx] != strs[0][char_idx])
                {
                    return common_prefix;
                }
            }
            common_prefix += strs[0][char_idx];
        }
        return common_prefix;
    }
};