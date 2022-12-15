///////////////////////////////Code 1////////////////////////
class Solution
{
public:
    int maxProfit(vector<int> &prices)
    {

        int mx = 0;

        for (int i = 1; i < prices.size(); i++)
        {

            if (prices[i] > prices[i - 1])
            {
                mx += prices[i] - prices[i - 1];
            }
        }

        return mx;
    }
};
///////////////////////////////Code 2////////////////////////
class Solution
{
public:
    int maxProfit(vector<int> &prices)
    {

        int mx = 0;

        for (int i = 1; i < prices.size(); i++)
        {

            mx += max(prices[i] - prices[i - 1], 0);
        }

        return mx;
    }
};
