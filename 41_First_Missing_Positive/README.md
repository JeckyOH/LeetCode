### Analysis

#### Fundamental Idea

For k positive numbers, the first missing number locates in [1, k + 1],

Supposing we have k balls waiting to be put into k+1 boxes.
The boxes are labeled with numbers from 1 to k + 1, like 1, 2, 3...k+1.
Similarlly, the balls are already labeled with some unpredictable positive numbers.
Once we pick up a ball and if its number is in the scope [1, k + 1], put it into the corresponding box.
After tranversing all balls, the empty box is our result.

#### Back to the problem

Numbers in the input array are balls, we have at most N balls if numbers are all positive.
Input array is the boxes, whose volume is N.

When we tranverse the input array, if 0 < nums[i] <= N, mark at the corresponding box nums[nums[i] - 1] to indicate that nums[i] has shown up.

#### How to mark?

Because it is not allowed to set up another space. We need to use original array.
Some method can be used:
    
    * minestone, like -1, INT_MAX, INT_MIN...
    * negative number transformed from positive number

Here because we also need to get the original number, we just store the negative number of nums[nums[i] - 1].
Besides, in order to avoid the affect of original negative numbers in the input array, we first tranverse the input array to change negative numbers to nums.size() + 1.

#### Why we can make this change?

Because we can assume there are k positive numbers in the array of size N.
No matter k is, we need to tranverse the entire array of size N, and the time complexity will be O(N).
What we do is just to make k as N, which has no effect on the result, because nums.size() + 1 will not be put into boxes.
