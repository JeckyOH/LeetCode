class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int min_price = INT_MAX, max_diff = 0;
        for(int i = 0; i < prices.size(); i++)
        {
            if (prices[i] > min_price)
            {
                max_diff = max_diff < (prices[i] - min_price) ? (prices[i] - min_price) : max_diff;
            }
            else
            {
                min_price = prices[i];
            }
        }
        return max_diff;
    }
};
