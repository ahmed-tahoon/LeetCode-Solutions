class Solution
{
public:
    vector<int> productExceptSelf(vector<int> &nums)
    {
        int post[100005] = {1};
        int pre[100005] = {1};

        post[nums.size()] = 1;

        for (int i = 0; i < nums.size(); i++)
        {
            pre[i + 1] = pre[i] * nums[i];
        }

        for (int i = nums.size() - 1; i >= 0; i--)
        {
            post[i] = post[i + 1] * nums[i];
        }

        vector<int> ans;

        for (int i = 0; i < nums.size(); i++)
        {
            ans.push_back(pre[i] * post[i + 1]);
        }

        return ans;
    }
};






////////////////////////////////////////////Sol 2/////////////////////

class Solution
{
public:
    vector<int> productExceptSelf(vector<int> &nums)
    {

        int n = nums.size();

        vector<int> res(n, 1);

        // prefix

        int pre = 1;

        for (int i = 0; i < n; i++)
        {
            res[i] = pre;
            pre = pre * nums[i];
        }
        int pos = 1;
        for (int i = n - 1; i >= 0; i--)
        {
            res[i] = res[i] * pos;
            pos = pos * nums[i];
        }

        return res;
    }
};