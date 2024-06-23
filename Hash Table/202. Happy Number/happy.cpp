class Solution
{
public:
    bool isHappy(int n)
    {
        unordered_set<int> seen;

        while (n != 1 && seen.find(n) == seen.end())
        {
            int sum = 0;
            seen.insert(n);
            while (n)
            {
                int rem = n % 10;
                sum += rem * rem;
                n /= 10;
            }

            n = sum;
        }
        return n == 1;
    }
};