class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        int max_length = 0;
        vector<int> dp(nums.size(), 1);

        for(int i = 0; i < nums.size(); i++)
        {
            int cur_max_length = 0;
            for(int j = 0; j < i; j++)
            {
                cur_max_length = ( (nums[j] < nums[i] && dp[j] > cur_max_length ) ? dp[j] : cur_max_length );
            }
            dp[i] = cur_max_length + 1;
            max_length = dp[i] > max_length ? dp[i] : max_length;
        }
        return max_length;
    }
};
