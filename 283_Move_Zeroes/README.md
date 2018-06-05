### Solution 01

#### Analysis
Intuitively, we can use another list to store non-zero numbers.
1. Tranverse the original list, store the non-zero numbers in the new list.
2. copy non-zero list into original list.
3. store 0 into remaining elements in original list.

In this algorithm, the time complexity is O(n).
However, the space complexity is also O(n).

### Solution 02

#### Analysis
Two Pointers Method is a good way to optimize array-related problems.
There are 2 ways to use two pointers:
1. From 2 ends to converge on middle;
2. From the same end towards the end of array.
Here in this problem, if we use two pointers from 2 ends, the relative position of non-zero numbers will not be maintained.
Thus, these 2 pointers should start from the same end.

Let k denote the replaced position of next swapping operation, which should start from index 0. 
It can point to a non-zero number but should not increase if the iteration encounters a 0.
Let i denote the iteration variable. 
In summary, there is a loop invariant: [0, k) should contain the non-zero numbers in any iteration.

### Summary

For array problems, two pointers method is usually a good way to optimize the solution.
First, we can try to brute force the solution, which means tranverse the array more than once.
Then, consider two pointer method to optimize solution.
There may be 2 ways to use two pointers method:
1. From 2 ends
2. From same end.

From the same end, one of the pointers may be iteration variable and the other pointer can be increased when some conditions are satisfied.
From 2 ends, the terminated condition may be i < j.
