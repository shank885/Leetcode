class Solution
{
public:
    vector<int> twoSum(vector<int> &numbers, int target)
    {
        int idx1 = 0;
        int idx2 = numbers.size() - 1;
        vector<int> indices;

        while (idx1 < idx2)
        {
            int sum = numbers[idx1] + numbers[idx2];
            if (sum > target)
                idx2--;
            else if (sum < target)
                idx1++;
            else
            {
                indices.push_back(idx1 + 1);
                indices.push_back(idx2 + 1);
                return indices;
            }
        }
        return indices;
    }
};