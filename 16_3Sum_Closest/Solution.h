class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        int min_diff = INT_MAX;
        int res = 0;

        sort(nums.begin(), nums.end());

        for (int i = 0; i < nums.size(); i++)
        {
            int j = i + 1, k = nums.size() - 1;

            while (j < k)
            {
                int sum = nums[i] + nums[j] + nums[k];
                int diff = sum - target;
                if ( abs(diff) < min_diff)
                {
                    min_diff = abs(diff);
                    res = sum;
                }

                if (diff == 0) return sum;
                else if ( diff <  0 && j < k) j++;
                else if ( diff > 0 && j < k ) k--;
            }
        }

        return res;
    }
};
