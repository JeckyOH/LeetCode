### Solution 01

Brute Force.
Tranverse all contiguous subarrays nums[i ... j] to test if their summations >= s.

Time Comlexity: O(n^3).
It can be optimised to O(n^2) if we store the summations to avoid duplicated calculations.

### Solution 02

By analysing brute force solution, we can find that there are many duplicated calculations for the summations of contiguous subarrays.
For example, we have calculated the sum of `nums[i...j]`, in order to calculate the sum of `nums[i...j+1]`, we can only use `nums[i...j+1] = nums[i...j] + nums[j+1]`.
In the brute force method, once we calculate a summation, we`ll test if this summation satisfied the conditions.

Thus, we can maintain a sliding window, `nums[i...j]`, on the array. Assuming we know its summation as sum, we can test if it satisfied the conditions.
Then, we can calculate the sum of `nums[i...j+1]` and move forward.
Here, we introduce a concept --- sliding window.

Algorithm for sliding window `nums[i...j]`:
```python
while there are sliding windows:
    if ( j+1 < len(array) && sum < s):
        right boundry slip right
    else:
        if (sum >= s):
            update min_length
        left boundry slip left
```

### Summary

For problem which is querying the subarray, we can consider the sliding window method.
If the previous iteration is related to the next iteration. Like in this problem, the sum of `nums[i...j+1] = nums[i...j] + nums[j]`, we can consider sliding window.

In sliding window method, we have to define these things:
1. definition of sliding window
2. how to move the window
