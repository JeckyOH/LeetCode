class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int low_index = 0, high_index = nums.size() - 1;

        while(low_index <= high_index)
        {
            if (target < nums[low_index])
                return low_index;
            else if (target > nums[high_index])
                return (high_index + 1);
            else
            {
                int mid_index = (low_index + high_index) / 2;
                if (target == nums[mid_index])
                    return mid_index;
                else if (target > nums[mid_index])
                    low_index = mid_index + 1;
                else
                    high_index = mid_index;
            }
        }

        return -1;
    }
};
