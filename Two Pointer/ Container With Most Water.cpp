class Solution {
public:
    int maxArea(vector<int>& height) {
         int st=0;
         int end=height.size()-1;
         int mx=INT_MIN;
         while(st<end)
         {
          int ans = min(height[st],height[end])*(end-st);
          mx=max(mx,ans);

          if(height[st]<height[end])
          {
              st++;
          }
          else
          end--;
         }

         return mx;



    }
};