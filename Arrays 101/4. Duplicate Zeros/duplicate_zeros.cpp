class Solution
{
public:
    void duplicateZeros(vector<int> &arr)
    {
        vector<int> temp;
        for (int i = 0; i < arr.size(); i++)
        {
            temp.push_back(arr[i]);
        }

        int dst_idx = 0;
        int i = 0;
        while (i < arr.size())
        {
            arr[i++] = temp[dst_idx];
            if (i == arr.size())
            {
                break;
            }
            if (temp[dst_idx] == 0)
            {
                arr[i++] = 0;
            }
            dst_idx++;
        }
    }
};