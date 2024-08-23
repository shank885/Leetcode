class Solution
{
public:
    int ans = INT_MAX;
    void dfs(int n, int sq, int sum)
    {
        if (n == 0)
        {
            ans = min(ans, sum);
            return;
        }
        if (sq == 0)
        {
            return;
        }
        int square = sq * sq;

        if (n >= square)
        {
            dfs(n % square, sq - 1, sum + n / square);
        }
        dfs(n, sq - 1, sum);
    }

    int numSquares(int n)
    {
        dfs(n, sqrt(n), 0);
        return ans;
    }
};