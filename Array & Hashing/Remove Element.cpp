class Solution
{
public:
    int removeElement(vector<int> &nums, int val)
    {

        int x = 0;

        for (int j = 0; j < nums.size(); j++)
        {

            if (nums[j] == val)
                x++;
        }
        return nums.size() - x;
    }
};