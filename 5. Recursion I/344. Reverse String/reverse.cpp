class Solution {
public:
    void reverseString(vector<char>& s){
        int n = s.size();
        int idx = 0;

        reverse(s, idx, n);

    }

    void reverse(vector<char> &s, int idx, int n)
    {
        if (idx >= n/2){
            return;
        }
        int temp = s[idx];
        s[idx] = s[n-1-idx];
        s[n-1-idx] = temp;
        idx++;
        reverse(s, idx, n);
    }
};