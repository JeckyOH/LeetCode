### Hint

Dynamic Programming

#### State

dp[i] represent the maximum money he can rob in nums[0...i].

### Recursive Relation

dp[i + 1] = Max{(dp[i - 1] + nums[i + 1]), dp[i]}
