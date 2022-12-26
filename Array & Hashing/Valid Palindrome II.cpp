//Solution 01:
class Solution {
public:

    bool ispli(string s , int l , int r)
    {
        while(l<=r)
        {
            if(s[l]!=s[r])
            return false;

            l++;
            r--;
        }

        return true;
    }


    bool validPalindrome(string s) {
       int l=0;
       int r=s.size()-1;
       while(l<=r)
       {
           if(s[l]==s[r])
             {
                 l++;
                 r--;
             }
             else
             {
  return (ispli(s,l+1,r)||ispli(s,l,r-1));
             } 
       }

  return true;
    }
};