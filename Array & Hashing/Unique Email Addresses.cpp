class Solution
{
public:
    int numUniqueEmails(vector<string> &emails)
    {

        set<string> st;

        for (int i = 0; i < emails.size(); i++)
        {
            string email = emails[i];
            string cleanEmail = "";
            for (int j = 0; j < email.size(); j++)
            {
                if (email[j] == '.')
                    continue;
                else if (email[j] == '+' || email[j] == '@')
                    break;
                cleanEmail += email[j];
            }

            cleanEmail += email.substr(email.find('@'), email.size() - 1);
            st.insert(cleanEmail);
        }

        return st.size();
    }
};