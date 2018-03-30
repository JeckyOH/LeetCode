class Solution {
public:
    int findMin(vector<int>& nums) {
        if(nums.empty())
            return 0;

        int head = 0;
        while( (head < nums.size() - 1) && (nums[head] == nums[nums.size() - 1]) )
            head++;

        int low = head, high = nums.size() - 1;

        while(low < high)
        {
            int mid = (low + high) / 2;

            if(nums[mid] > nums[high])
                low = mid + 1;
            else if (nums[mid] <= nums[high])
                high = mid;
        }

        return nums[low];
    }
};
