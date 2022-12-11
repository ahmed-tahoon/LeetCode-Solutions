class Solution
{
public:
    vector<vector<string>> groupAnagrams(vector<string> &strs)
    {

        map<string, vector<string>> mp;

        for (int i = 0; i < strs.size(); i++)
        {
            string x = strs[i];

            sort(x.begin(), x.end());

            mp[x].push_back(strs[i]);
        }

        vector<vector<string>> ans;

        for (auto it : mp)
        {
            ans.push_back(it.second);
        }
        return ans;
    }
};