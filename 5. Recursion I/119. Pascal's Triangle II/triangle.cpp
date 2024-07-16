class Solution
{
public:
    vector<int> getRow(int rowIndex)
    {
        return pascal(rowIndex);
    }

    vector<int> pascal(int n)
    {
        if (n == 0)
        {
            return {1};
        }

        if (n == 1)
        {
            return {1, 1};
        }

        vector<int> row(n + 1);
        vector<int> prev = pascal(n - 1);
        row[0] = 1;
        row[n] = 1;

        for (int i = 1; i < n; i++)
        {
            row[i] = prev[i - 1] + prev[i];
        }
        return row;
    }
};