class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
     
       sort(nums.begin(),nums.end());

       vector<vector<int> >v1;

       for(int i =0; i< nums.size(); i++)
       {
           if(i>0&& nums[i]==nums[i-1])
           continue;

             int num1=nums[i];

             int st=i+1;
             int end=nums.size()-1;             
             while(st<end)
             {     
                 int sum =num1+nums[st]+nums[end];
                if(sum==0)
                 {
                    v1.push_back({nums[i],nums[st],nums[end]});
                     
                    int Vstart = nums[st];
                    int Vend = nums[end];


                    while(st<end && nums[st]==Vstart)
                    {
                        st++;
                    } 
                    while(st<end && nums[end]==Vend)
                    {
                        end--;
                    } 
                 }
                 else if(sum<0)
                 {
                     st++;
                 }
                 else
                 {
                     end--;
                 }

             
           }

       }

     return v1;
        
    }
};