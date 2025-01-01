class Solution
{
public:
    vector<int> intersection(vector<int> &nums1, vector<int> &nums2)
    {
        vector<bool> hashset;
        vector<int> intersect;
        hashset.resize(1001);
        fill(hashset.begin(), hashset.end(), false);

        for (auto item : nums1)
        {
            if (hashset[item] == false)
            {
                hashset[item] = true;
            }
        }

        for (auto item : nums2)
        {
            if (hashset[item] == true)
            {
                hashset[item] = false;
                intersect.push_back(item);
            }
        }
        return intersect;
    }
};