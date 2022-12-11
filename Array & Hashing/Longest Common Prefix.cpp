class Solution
{
public:
    string longestCommonPrefix(vector<string> &strs)
    {

        string ans = "";

        for (int i = 0; i < strs[0].size(); i++)
        {
            char x = strs[0][i]; // flower

            for (int j = 0; j < strs.size(); j++)
            {
                if (strs[j][i] != x)
                    return ans;
            }
            ans += x;
        }

        return ans;
    }
};