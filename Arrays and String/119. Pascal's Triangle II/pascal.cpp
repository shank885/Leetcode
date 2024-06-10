class Solution
{
public:
    vector<int> getRow(int rowIndex)
    {
        vector<int> res;
        res.push_back(1);
        long long prev = 1;

        for (int k = 1; k <= rowIndex; k++)
        {
            long long val = prev * (rowIndex - k + 1) / k;
            res.push_back(val);
            prev = val;
        }
        return res;
    }
};