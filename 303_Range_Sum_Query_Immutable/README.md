### Analysis

If just store nums, it will need O(n) time to calculate sumRange(i, j). 

### Hint

#### Objective

Query Time: O(1)

However, it takes O(n) time to initial object.

#### method

1) When initial the object, calculate the sum of A[0...i], where i from 0 to N.

2) Query operation: sumRange(i, j) = sum(j) - sum(i - 1).
Besides, i - 1 may be negative, it needs additional handling.
