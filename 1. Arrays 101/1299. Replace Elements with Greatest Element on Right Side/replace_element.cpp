class Solution
{
public:
    vector<int> replaceElements(vector<int> &arr)
    {
        int max_val = arr[arr.size() - 1];
        arr[arr.size() - 1] = -1;
        int temp;

        for (int i = arr.size() - 2; i >= 0; i--)
        {
            temp = arr[i];
            arr[i] = max_val;
            max_val = max_val > temp ? max_val : temp;
        }
        return arr;
    }
};