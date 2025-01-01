class Solution
{
public:
    int isMax(vector<int> &arr)
    {
        for (int i = 0; i < arr.size(); i++)
        {
            if (arr[i] != 9)
            {
                return false;
            }
        }
        return true;
    }
    vector<int> plusOne(vector<int> &digits)
    {
        int pick_idx = digits.size();
        int push_idx = pick_idx;

        if (isMax(digits))
        {
            digits.push_back(0);
            push_idx++;
        }

        int carry = 1;
        int val;
        while (pick_idx)
        {
            int val = digits[pick_idx - 1] + carry;
            digits[push_idx - 1] = val % 10;
            carry = val / 10;
            push_idx--;
            pick_idx--;
        }
        if (carry)
        {
            digits[push_idx - 1] = carry;
        }
        return digits;
    }
};