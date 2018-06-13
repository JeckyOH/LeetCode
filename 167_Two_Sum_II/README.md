### Analysis

Because the array is sorted, we can from 2 ends and converge to the middle.

#### Idea 02 Brute Force
O(n^2) time.

#### Idea 03 Binary Search
For every element i, find target - nums[i] in the range [i + 1, len(array)].
O(nlgn) time.
