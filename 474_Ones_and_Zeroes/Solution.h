class Solution {
public:
    int findMaxForm(vector<string>& strs, int m, int n) {
        vector<vector<int>> dp(m+1, vector<int>(n+1, 0));
        for (auto str : strs)
        {
            int counter[2] = {0};

            for (auto chr : str)
                counter[chr - '0']++;

            for(int i = m; i >=0; i--)
            {
                for(int j = n; j >= 0; j--)
                {
                    if(i >= counter[0] && j >= counter[1])
                        dp[i][j] = max(dp[i][j], dp[i - counter[0]][j - counter[1]] + 1);
                }
            }
        }

        return dp[m][n];
    }
};
