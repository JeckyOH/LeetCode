class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        if(nums.empty())
            return 0;

        vector<int> dp(nums.size(), 0);
        vector<int>::iterator last_element = dp.begin();
        for(int i = 0; i < nums.size(); i++)
        {
            vector<int>::iterator target = lower_bound(dp.begin(), last_element, nums[i]);
            *target = nums[i];
            if(last_element == target)
                last_element++;
        }
        return last_element - dp.begin() ;
    }
};
