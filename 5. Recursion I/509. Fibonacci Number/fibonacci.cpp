class Solution
{
public:
    unordered_map<int, int> cache;

    int fib(int n)
    {
        if (cache.find(n) != cache.end())
        {
            return cache[n];
        }

        if (n < 2)
        {
            return n;
        }

        int result;
        result = fib(n - 2) + fib(n - 1);
        cache[n] = result;

        return result;
    }
};