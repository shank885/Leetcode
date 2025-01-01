class Solution
{
public:
    vector<int> twoSum(vector<int> &nums, int target)
    {
        unordered_map<int, int> hashmap;
        vector<int> indices;

        hashmap[nums[0]] = 0;

        for (int i = 1; i < nums.size(); i++)
        {
            if (hashmap.count(target - nums[i]) > 0)
            {
                indices.push_back(i);
                indices.push_back(hashmap[target - nums[i]]);
                break;
            }
            hashmap[nums[i]] = i;
        }
        return indices;
    }
};