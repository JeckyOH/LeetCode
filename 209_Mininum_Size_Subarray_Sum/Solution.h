class Solution {
public:
    int minSubArrayLen(int s, vector<int>& nums) {
        int min_len = INT_MAX, sum = 0, i = 0, j = -1;
        // sum is the summation of [i, j]. [i, j] is the sliding window contains all considered elements.

        while (i < nums.size())
        {
            if ( (j + 1)<nums.size() && sum < s )
                sum += nums[++j];
            else
            {
                if (sum >= s)
                    min_len = min_len < (j - i + 1) ? min_len : (j - i + 1);
                sum -= nums[i++];
            }
        }

        if (min_len == INT_MAX)
            min_len = 0;

        return min_len;
    }
};
