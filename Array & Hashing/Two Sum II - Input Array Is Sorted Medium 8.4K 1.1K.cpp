class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        
        int st=0;
        int end=numbers.size()-1;

        while(st<=end)
        {
              if(numbers[st]+numbers[end]==target)
              {
                  return {st+1,end+1};
              }
              else if(numbers[st]+numbers[end]>target)
              {
                  end--;
              }
              else
              st++;
        }
return {-1,-1};
    }
};