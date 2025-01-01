class Solution
{
public:
    string reverseWords(string s)
    {
        int N = s.size();
        int n = 0;
        int ind = 0;

        // remove extra space
        while (ind < N)
        {
            while (ind < N && s[ind] == ' ')
            {
                ind++;
            }
            if (ind >= N)
            {
                break;
            }
            while (ind < N && s[ind] != ' ')
            {
                s[n++] = s[ind++];
            }
            if (n < N)
            {
                s[n++] = ' ';
            }
        }
        s = s.substr(0, n);
        if (s[n - 1] == ' ')
        {
            s = s.substr(0, n - 1);
            n--;
        }

        // reverse each word
        int start = 0;
        int end = 0;
        while (end < n)
        {
            while (end < n && s[end] != ' ')
            {
                end++;
            }
            if (end != n - 1)
            {
                end--;
            }
            for (int i = start; i <= (start + end) / 2; i++)
            {
                swap(s[i], s[start + end - i]);
            }
            end += 2;
            start = end;
        }
        return s;
    }
};