class NumArray {
private:
    vector<int> part_sums;
public:
    NumArray(vector<int> nums) {
        int cur_sum = 0;

        for(int i = 0; i < nums.size(); i++)
        {
            cur_sum += nums[i];
            part_sums.push_back(cur_sum);
        }
    }

    int sumRange(int i, int j) {
        return this->part_sums[j] - ( (i - 1 < 0) ? 0 : part_sums[i - 1]);
    }
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray obj = new NumArray(nums);
 * int param_1 = obj.sumRange(i,j);
 */
