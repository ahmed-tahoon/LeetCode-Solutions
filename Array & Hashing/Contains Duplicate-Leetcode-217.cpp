class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        
    map<int,bool>mp;

    for(int i =0 ;i < nums.size(); i++)
    {
        if(mp[nums[i]])
        {
            return true;
        }

        mp[nums[i]]=true;
        
    }

    return false;
    }

};


// Time : o(n)
//Space : o(n)