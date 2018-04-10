class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {

        for (int i = 0; i < nums.size(); i++)
            nums[i] = (nums[i] <=0) ? nums.size() + 1 : nums[i];

        for (int i = 0; i < nums.size(); i++)
        {
            int positive = abs(nums[i]);
            if (positive <= nums.size())
                nums[positive - 1] = nums[positive - 1] < 0 ? nums[positive - 1] : -nums[positive - 1];
        }

        for (int i = 0; i < nums.size(); i++)
            if (nums[i] > 0)
                return i + 1;

        return nums.size() + 1;
    }
};
