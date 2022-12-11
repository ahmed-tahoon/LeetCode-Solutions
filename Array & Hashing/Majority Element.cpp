class Solution
{
public:
    int majorityElement(vector<int> &nums)
    {

        sort(nums.begin(), nums.end());

        return nums[nums.size() / 2];
    }
};
/// @brief //////////////////////////////////////////////////
class Solution
{
public:
    int majorityElement(vector<int> &nums)
    {
        map<int, int> mp;

        for (int i = 0; i < nums.size(); i++)
        {
            if (mp[nums[i]] >= nums.size() / 2)
                return nums[i];
            mp[nums[i]]++;
        }

        return 0;
    }
};