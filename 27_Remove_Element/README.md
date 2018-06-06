### Analysis

Array Problems.
This problem is very similar to Problem 283. 

Intuitively, we can declare another array to store elements which are not same with val.
However, in this way, even though the time complexity is O(n), the space complexity is also O(n).

Thus, let us consider two pointers method.
idea 01:
two pointers start from the same end. let k denote the replaced position in next swapping operation.
[0, k) should contain numbers which are not equal to val in any iteration.
In this method, i is the iteration variable. k is increased only when encountering the number which is not equal to val.

idea 02:
because the relative position is not a problem, we can also use another method: two pointers start from 2 ends.
In this way, let i denote the position of a number which is equal to val, let j denote the position of a number which is not equal to val.
In any iteration, we should maintain i < j and swap nums[i] with nums[j].
