## Problem

Given array A[1...N], calculate the maximum sum of the contiguous subarray.

## Analysis:

### Clue 1.
Optimization Problem => Dynamic Programming
Thus, try to find the sub-problem and the state.

#### State

DP[i, j] represents the state of sub-problem of array A from i to j.
Usually we can find the relation between DP[i, j] with DP[i + 1, j], DP[i, j + 1] or DP[i + 1, j + 1].
However, this time we can NOT. Because we cannot determine the relation between A[i] with the contiguous subarray of A[i, j - 1] with maximum sum.

### Clue 2.

#### State

Re-define the state as DP[i], which represents the maxinum sum of any contiguous subarray of A[1, i]. 
How to extend DP[i] to DP[i + 1]?
Define that DP[i] must have A[i] as the end element of the contiguous subarray with maximum sum.
Thus,
    1. DP[i + 1] = DP[i] + A[i + 1] if DP[i] > 0;
    2. DP[i + 1] = A[i] if DP[i] < 0
Also, it can be represented as DP[i + 1] = Max{DP[i] + A[i + 1], A[i + 1]}.
This indicates 2 cases:
    1. The contiguous subarray of A[1...i] with maximum sum joins with A[i + 1] to produce a longer subarray of A[1...i+1] with maximum sum as DP[i] + A[i + 1].
    2. A[i + 1] as the only element of subarray of A[1...i+1] with maximum sum.
The reason of these 2 cases are:
    1. because A[i] has to be the end element of contiguous subarray of A[1...i] with max sum, the only thing to be decided is that whether A[i + 1] should be added into the subarray or discard previous array.
    2. If DP[i] < 0, no matter how large A[i + 1] is, the sum will be smaller. Thus discard previous array and pick A[i + 1] as the only element of the new array with max sum as A[i + 1].
    3. If DP[i] > 0, no matter how small A[i + 1] is, the sum will be larger. Thus, contatinate A[i + 1] with previous subarray with max sum as DP[i] + A[i + 1].

Reference:
[Kadane's algorithm](https://en.wikipedia.org/wiki/Maximum_subarray_problem)
