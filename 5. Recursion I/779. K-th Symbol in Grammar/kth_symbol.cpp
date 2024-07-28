class Solution {
public:
    int kthGrammar(int n, int k)
    {
        if (k == 1)
        {
            return 0;
        }
        if (k == 2)
        {
            return 1;
        }
        return find(n, k, k);


    }
    int find(int n, int nth, int k)
    {
        if (k == 1)
        {
            return 0;
        }
        if (k == 2)
        {
            return 1;
        }

        int return_val = find(n-1, k, (k/2)+(k%2));
        int ans;

        if (return_val == 0)
        {
            if (k%2 == 0)
            {
                ans = 1;
            }
            else
            {
                ans = 0;
            }
        }
        else
        {
            if (k%2 == 0)
            {
                ans = 0;
            }
            else
            {
                ans = 1;
            }
        }
        return ans;
    }
};
