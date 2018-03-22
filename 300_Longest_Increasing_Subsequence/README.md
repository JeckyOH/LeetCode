### Analysis

Optimization Problem: Dynamic Programming

#### wrong analysis

state:
dp[i, j] represents the length of longest increasing subsequence of subarray A[i...j].
However, this is too general to represent next state by using dp[i, j], because we cannot determine if A[i -1] or A[j + 1] is in the longest increasing subsequence of subarray A[i -1...j] or A[i ... j + 1].

### Correct Analysis

Go through the array from 0 to N and define that A[i] must in the longest increasing subsequence of subarray A[0...i].

State:
let dp[i] represent the length of longest increasing subseqence of subarray A[0...i] while A[i] must be in the longest increasing subarray.

When exaxmine dp[i + 1], we will determine whether A[i + 1] in the longest increasing subsequence.
Here we will use array(j) to represent the longest increasing subsequence of A[0...j].
Go through the subarray A[0...i + 1], if A[j] < A[i + 1], we can combine array(j) with A[i + 1] to compose a longer subsequence.

Note:
If A[j] > A[i + 1], you may want to compare dp[j] with current dp[i + 1] and store the larger one as new value of dp[i + 1].
However, remember that we have a limitation that A[i + 1] must be in the longest increasing subsequence of subarray A[0...i+1].
Besides, dp[j] has already been calculated and recorded, there is no need to record this value in the dp[i + 1] again.
If we set up a global variable called maxlength and compare every dp[i] with maxlength, dp[j] will be recorded into maxlength if it indeed is the max length of entire array A[0...N].

Example 01: [9, 10, 1, 2]
9: no previous lower element, dp[0] = 1;
10: 9 is lower than 10, thus dp[1] = dp[0] + 1 = 2
1: no previous lower element, dp[2] = 1. Note: do not use dp[1] because subsequence [9, 10] does not include 1.
2: 1 is lower than 2, thus dp[3] = dp[2] + 1 = 2.

Example 02: [10, 9, 2, 5, 3, 7, 101, 18]

10: no previous lower element, dp[0] = 1
9: same, dp[1]= 1
2: same, dp[2] = 1
5: A[2] = 2 is lower than A[3]=5, dp[3] = dp[2] + 1 = 2
3: A[2] = 2 is lower than A[4]=3, dp[4] = dp[2] + 1 = 2
7: 2, 5, 3 are all lower than 7, thus dp[5] = max{dp[2] + 1 = 2, dp[3] + 1 = 3, dp[4] + 1 = 3} = 3
101: all previous element are lower than 101, thus dp[6] = max{dp[i]} + 1, where 0<=i<6. dp[6] = 4
18: A[0...5] are all lower than 18, thus dp[7] = max{dp[i] + 1} where 0<=i<6. dp[7] = 4.

#### Recursive Relation
From above example, we can determine our recursive relation:
dp[i + 1] = max{dp[j]} + 1, where 0<=j<i+1 and A[j] < A[i+1]

### Optimization
use dp[] to store the LIS.
tranverse A[0...N], for A[i], put it in the correct position of dp[] so that dp[] contains the LIS which includes A[i].
Use binary search to find the first element in dp[] which is larger than A[i] and replace this element in dp[] with A[i].

Note:
replacement of A[i] in dp[] will not affect the length of LIS.
for example:
A[] = ...9, 10, 3, 4...
when we scan 3, dp[] may look like this: ...9,10. 
9 is the first element larger than 3, so we replace 9 with 3. dp[] will become ...3,10. The length of LIS does not change.
Then when we scan 4, the dp[] will become ...3,4.
