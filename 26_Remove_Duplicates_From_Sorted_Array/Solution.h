class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int i = 0;

        while(i < nums.size())
        {
            if ((i + 1) < nums.size() && nums[i + 1] == nums[i])
                nums.erase(nums.begin() + i);
            else
                i++;
        }

        return nums.size();
    }
};
