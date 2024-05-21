class Solution
{
public:
    vector<int> findDiagonalOrder(vector<vector<int>> &mat)
    {
        vector<int> diag;
        int i = 0;
        int j = 0;
        int n = mat.size();
        int m = mat[0].size();
        int adder = -1;

        diag.push_back(mat[i][j]);

        while (i < n - 1 || j < m - 1)
        {
            if (j < m - 1 && ((i == 0 && adder == -1) || (i == n - 1 && adder == 1)))
            {
                ++j;
                adder = -adder;
            }
            else if ((j == 0 && adder == 1) || (j == m - 1 && adder == -1))
            {
                ++i;
                adder = -adder;
            }
            else
            {
                i += adder;
                j -= adder;
            }
            diag.push_back(mat[i][j]);
        }
        return diag;
    }
};