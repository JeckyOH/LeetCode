class Solution {
public:
    int climbStairs(int n) {
        if (n < 2)
            return 1;
        int fab[n + 1] = {0};
        fab[0] = fab[1] = 1;
        for(int i = 2; i < n + 1; i++)
        {
            fab[i] = fab[i - 1] + fab[i - 2];
        }
        return fab[n];
    }
};
