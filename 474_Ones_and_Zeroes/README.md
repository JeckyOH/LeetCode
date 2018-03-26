### Analysis

Optimization Problem => Dynamic Programming

#### Understand problem:
Given an array of strings composed by '0's and '1's and m, representing the number of 0s you have, and n, representing the number of 1s you have.
Now, using m 0s and n 1s to compose the most strings you are given.
Question: How many strings you can compose?

#### State:
Example: Array = {"10", "0001", "111001", "1", "0"}, m = 5, n = 3
Get state: 
1) Given 0 0s and 0 1s, 0 string can be composed.
2) Given 1 0s and 0 1s, 1 string can be composed.
3) Given 0 0s and 1 1s, 1 string can be composed.
4) ... Given i 0s and j 1s, dp[i][j] strings can be composed.

### Recursive Relation:
Let numCounter[k][0] and numCounter[k][1] represent the number of 0 and 1 of string Array[k].
When we calculate the entire dp[][] array, we need to tranverse the string array.
So, for each dp[i][j], we need to tranverse string array to decide which string we need to take.

However, consider when we calculate dp[3][2], first we decide that "10" is selected, then dp[2][1] + 1 should be the result.
But note, dp[2][1] is calculated under the entire string array which includes "10". 
The correct situation is: after we select "10", dp[2][1] should be the result of rest elements except for "10".

Another clue:

For each string in the string array, just decide whether to take it and calculate dp[][] based on the previous results.
How?
For example, when we consider "10", just decide whether to take it. If no, dp[i][j] does not change. If yes, dp[i][j] = dp[i - 1][j - 1] + 1.
Then, we consider "0001", when we calculate dp[4][2], we decide to take it and dp[4][2] = dp[4 - 3][2 - 2] + 1 = dp[1][1] + 1 = 2.
Note that here dp[1][1] is the result of taking "10".
Then, we consider "1", dp[4][3] should be dp[4][2] + 1 = 3. Here dp[4][2] is the result of previous consideration of "0001".

In summary, 
1) tranverse string array to calculate entire dp[][] deciding if take specific string or not.
2) When considering next string in the array, dp[][] is currently the result of previous consideration of last string.
So, dp[i][j] should represent the maximum number of strings composed by i 0s and j 1s considering up to current string in the string array.
3) Considering dp[i - numsZeroes][j - numsOnes] of consideration of last string should be used when calculate dp[i][j] of current string, dp[][] should be updated from bottem right to top left.


