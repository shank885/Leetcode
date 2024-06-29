class Solution
{
public:
    vector<int> intersect(vector<int> &nums1, vector<int> &nums2)
    {
        vector<int> set1(1001, 0);
        vector<int> set2(1001, 0);
        vector<int> intersect;

        for (auto item : nums1)
        {
            set1[item] += 1;
        }

        for (auto item : nums2)
        {
            set2[item] += 1;
        }

        for (int i = 0; i < 1001; i++)
        {
            int count = min(set1[i], set2[i]);

            while (count--)
            {
                intersect.push_back(i);
            }
        }
        return intersect;
    }
};