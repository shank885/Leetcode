class Solution
{
public:
    vector<int> spiralOrder(vector<vector<int>> &matrix)
    {
        vector<int> spiral;

        int M = matrix.size();
        int N = matrix[0].size();

        int left_col = 0;
        int right_col = N - 1;
        int top_row = 0;
        int bot_row = M - 1;

        while (top_row <= bot_row && left_col <= right_col)
        {
            for (int j = left_col; j <= right_col; j++)
            {
                spiral.push_back(matrix[top_row][j]);
            }
            top_row++;

            if (top_row > bot_row || left_col > right_col)
            {
                break;
            }

            for (int i = top_row; i <= bot_row; i++)
            {
                spiral.push_back(matrix[i][right_col]);
            }
            right_col--;

            if (top_row > bot_row || left_col > right_col)
            {
                break;
            }

            for (int j = right_col; j >= left_col; j--)
            {
                spiral.push_back(matrix[bot_row][j]);
            }
            bot_row--;

            if (top_row > bot_row || left_col > right_col)
            {
                break;
            }

            for (int i = bot_row; i >= top_row; i--)
            {
                spiral.push_back(matrix[i][left_col]);
            }
            left_col++;
        }
        return spiral;
    }
};