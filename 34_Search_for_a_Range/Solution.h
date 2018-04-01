class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        if(nums.empty())
            return vector<int>({-1, -1});

        int start_index = -1, end_index = -1;
        int low = 0, high = nums.size() - 1;

        while(low < high)
        {
            int mid = (low + high) / 2;
            if(nums[mid] >= target )
                high = mid;
            else
                low = mid + 1;
        }
        if(nums[low] != target)
            return vector<int>({start_index, end_index});
        start_index = low;

        low = 0;
        high = nums.size() - 1;
        while(low < high)
        {
            int mid = (low + high + 1)/2;
            if(nums[mid] <= target)
                low = mid;
            else
                high = mid - 1;
        }
        end_index = low;

        return vector<int>({start_index, end_index});
    }
};
