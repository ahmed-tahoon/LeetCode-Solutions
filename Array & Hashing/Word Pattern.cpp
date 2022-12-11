class Solution
{
public:
    bool wordPattern(string pattern, string s)
    {

        map<char, string> charToWord;
        map<string, char> WordToChar;

        vector<string> v;
        // word variable to store word in the string s
        string word;
        // making a string stream
        stringstream iss(s);
        // Push each word in vector
        while (iss >> word)
            v.push_back(word);

        if (v.size() != pattern.size())
            return false;

        for (int c = 0; c < pattern.size(); c++)
        {
            string word = v[c];
            if (charToWord[pattern[c]] != "" && charToWord[pattern[c]] != word)
                return false;
            if (WordToChar[word] && WordToChar[word] != pattern[c])
                return false;

            charToWord[pattern[c]] = word;
            WordToChar[word] = pattern[c];
        }
        return true; // both the lengths should be equal
    }
};