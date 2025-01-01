class Solution
{
public:
    void merge(vector<int> &nums1, int m, vector<int> &nums2, int n)
    {
        int m_idx = m - 1;
        int n_idx = n - 1;
        int base_idx = m + n - 1;

        while ((m_idx >= 0) && (n_idx >= 0))
        {
            if (nums1[m_idx] > nums2[n_idx])
            {
                nums1[base_idx] = nums1[m_idx];
                m_idx--;
            }
            else
            {
                nums1[base_idx] = nums2[n_idx];
                n_idx--;
            }
            base_idx--;
        }
        while (n_idx >= 0)
        {
            nums1[base_idx] = nums2[n_idx];
            n_idx--;
            base_idx--;
        }
    }
};