class Solution
{
public:
    int longestConsecutive(vector<int> &nums)
    {

        unordered_set<int> st(nums.begin(), nums.end());
        int mx = 0;

        for (int i = 0; i < nums.size(); i++)
        {
            if (!st.count(nums[i] - 1))
            {
                int len = 1;

                while (st.count(nums[i] + len))
                    len++;

                mx = max(mx, len);
            }
        }

        return mx;
    }
};