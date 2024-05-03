class Solution
{
public:
    bool validMountainArray(vector<int> &arr)
    {
        int max = -1;
        int max_idx = -1;
        for (int i = 0; i < arr.size(); i++)
        {
            if (arr[i] > max)
            {
                max = arr[i];
                max_idx = i;
            }
        }
        if (max_idx == 0 || max_idx == arr.size() - 1)
        {
            return false;
        }
        int i = 1;
        while (i <= max_idx)
        {
            if (arr[i] <= arr[i - 1])
            {
                return false;
            }
            i++;
        }
        while (i < arr.size())
        {
            if (arr[i] >= arr[i - 1])
            {
                return false;
            }
            i++;
        }
        return true;
    }
};