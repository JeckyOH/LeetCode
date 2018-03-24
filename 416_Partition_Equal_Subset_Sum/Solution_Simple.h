class Solution {
public:
    bool canPartition(vector<int>& nums) {
        bitset<100 * 200 + 1> dp(1);
        int sum = 0;

        for(int i = 0; i < nums.size(); i++)
        {
            sum += nums[i];
            dp = dp | (dp << nums[i]);
        }

        return (sum % 2 == 0) && dp[sum/2];
    }
};
