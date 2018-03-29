class Solution {
public:
    int search(vector<int>& nums, int target) {
        int low = 0, high = nums.size() - 1;

        while(low < high)
        {
            int mid = (low + high) / 2;

            if(nums[mid] > nums[high])
                low = mid + 1;
            else if (nums[mid] < nums[high])
                high = mid;
        }

        int rotate = low;
        low = 0;
        high = nums.size() - 1;

        while(low <= high)
        {
            int mid = (low + high) / 2;
            int act_mid = (mid + rotate) % nums.size();

            if(nums[act_mid] == target)
                return act_mid;
            else if (nums[act_mid] < target)
                low = mid + 1;
            else
                high = mid - 1;
        }

        return -1;
    }
};
