
bool com(string s1, string s2)
{
    return s1 + s2 > s2 + s1;
}
class Solution
{
public:
    string largestNumber(vector<int> &nums)
    {

        string new_num[nums.size()];

        for (int i = 0; i < nums.size(); i++)
        {
            new_num[i] = to_string(nums[i]);
        }

        sort(new_num, new_num + nums.size(), com); // nlogn

        string ans = "";

        for (int i = 0; i < nums.size(); i++)
        {
            ans += new_num[i];
        }

        if (new_num[0] == "0")
            return "0";

        return ans;
    }
};