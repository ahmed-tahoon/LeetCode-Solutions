class Solution
{
public:
    int maxNumberOfBalloons(string text)
    {

        map<char, int> mp;

        for (int i = 0; i < text.size(); i++)
            mp[text[i]]++;

        int b = mp['b'];
        int a = mp['a'];
        int l = mp['l'] / 2;
        int o = mp['o'] / 2;
        int n = mp['n'];

        return min({a, b, l, o, n});
    }
};