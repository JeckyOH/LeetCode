class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> res;

        sort(nums.begin(), nums.end());

        for(int i = 0; i < nums.size(); i++)
        {
            int target = -nums[i];
            int start = i + 1, end = nums.size() - 1;

            while (start < end)
            {
                if(nums[start] + nums[end] > target) end--;
                else if (nums[start] + nums[end] < target) start++;
                else
                {
                    res.push_back(vector<int>({nums[i], nums[start], nums[end]}));
                    int start_val = nums[start], end_val = nums[end];
                    while(start < end && nums[start] == start_val) start++;
                    while(end > start && nums[end] == end_val) end--;
                }
            }

            while (i + 1 < nums.size() && nums[i + 1] == nums[i]) i++;
        }

        return res;
    }
};
