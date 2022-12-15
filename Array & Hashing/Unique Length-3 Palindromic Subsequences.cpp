///////////////////////////////Code 1////////////////////////
class Solution
{
public:
    int countPalindromicSubsequence(string s)
    {

        int first[26] = {[0 ... 25] = INT_MAX}, last[26] = {0}, res = 0;

        for (int i = 0; i < s.size(); i++)
        {
            first[s[i] - 'a'] = min(i, first[s[i] - 'a']);
            last[s[i] - 'a'] = i;
        }

        for (int i = 0; i < 26; i++)
        {
            unordered_set<char> st;
            if (first[i] < last[i])
            {
                for (int j = first[i] + 1; j < last[i]; j++)
                {
                    st.insert(s[j]);
                }
                res += st.size();
            }
        }
        return res;
    }
};

///////////////////////////////Code 2////////////////////////
class Solution
{
public:
    int countPalindromicSubsequence(string s)
    {

        int first[26] = {[0 ... 25] = INT_MAX}, last[26] = {0}, res = 0;

        for (int i = 0; i < s.size(); i++)
        {
            first[s[i] - 'a'] = min(i, first[s[i] - 'a']);
            last[s[i] - 'a'] = i;
        }

        for (int i = 0; i < 26; i++)
        {
            if (first[i] < last[i])
            {
                res += unordered_set<char>(begin(s) + first[i] + 1, begin(s) + last[i]).size();
            }
        }
        return res;
    }
};