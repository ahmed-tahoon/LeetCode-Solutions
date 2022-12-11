class Solution
{
public:
    void sortColors(vector<int> &nums)
    {

        int f = 0;
        int l = nums.size() - 1;

        for (int i = 0; i <= l; i++)
        {
            if (nums[i] == 0)
            {
                swap(nums[i], nums[f]);
                f++;
            }

            else if (nums[i] == 2)
            {
                swap(nums[i], nums[l]);
                i--;
                l--;
            }
        }
    }
};