### Analysis

Pick a set of number to make a specific sum => 0/1 knapsack.

Dynamic Problem

### State
dp[i][j] represents if pick some elements from A[0...i] to make the sum j.

### Recursive Relation
dp[i][j] = dp[i-1][j] || dp[i-1]][j-A[i]]

### Optimization

Use bitsets:

dp[100 * 200 + 1] represents if the sum can be gotten.

1) dp[] is initialized as 1, which means the sum 0 can be gotten initially.
2) Tranverse nums[] from nums[0] to nums[N], when we encounter nums[i], left shift dp[] nums[i] bits.
In this way, all sums which can be gotthen before encountering nums[i] will be added by nums[i].

