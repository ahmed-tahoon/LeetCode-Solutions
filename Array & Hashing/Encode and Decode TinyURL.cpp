class Solution
{
public:
    map<string, string> mp;
    int start = 1;
    string base = "http://flkdsjfkl.com/4";

    // Encodes a URL to a shortened URL.
    string encode(string longUrl)
    {

        string res = base + to_string(start);
        start++;
        mp[res] = longUrl;
        return res;
    }

    // Decodes a shortened URL to its original URL.
    string decode(string shortUrl)
    {
        return mp[shortUrl];
    }
};

// Your Solution object will be instantiated and called as such:
// Solution solution;
// solution.decode(solution.encode(url));