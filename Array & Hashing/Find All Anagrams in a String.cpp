class Solution
{
public:
    vector<int> findAnagrams(string s, string p)
    {

        int s_len = s.length();
        int p_len = p.length();

        if (s.size() < p.size())
            return {};

        vector<int> vp(26, 0);
        vector<int> vs(26, 0);

        vector<int> ans;

        for (int i = 0; i < p_len; i++)
        {
            vp[p[i] - 'a']++;
        }

        int start = 0;

        for (int i = 0; i < s_len; i++)
        {

            vs[s[i] - 'a']++;

            if (i >= p.size())
            {
                vs[s[start] - 'a']--;
                start++;
            }

            if (vp == vs)
                ans.push_back(start);
        }

        return ans;
    }
};