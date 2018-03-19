class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int max_sum = nums[0], cur_max_sum = nums[0];
        for(int i = 1; i < nums.size(); i++)
        {
            cur_max_sum = cur_max_sum > 0 ? cur_max_sum + nums[i] : nums[i];
            max_sum = max_sum < cur_max_sum ? cur_max_sum : max_sum;
        }
        return max_sum;
    }
};
