class Solution
{
public:
    int strStr(string haystack, string needle)
    {
        // if length if haystack < length of needle return -1
        if (haystack.length() < needle.length())
        {
            return -1;
        }

        // for each of the index in haystack
        // find needle
        for (int i = 0; i <= haystack.length() - needle.length(); ++i)
        {
            // if needle found return index
            if (haystack.substr(i, needle.length()) == needle)
            {
                return i;
            }
        }
        // if not found return -1
        return -1;
    }
};