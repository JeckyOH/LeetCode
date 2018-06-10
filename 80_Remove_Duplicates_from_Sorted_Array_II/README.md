### Solution 01
Use Dictionary.
Time complexity and space complexity: O(n).

### Solution 02

Two Pointers Method

#### From the same end VS from 2 ends?
from the same end.

#### Algorithm 01

According to [Remove Duplicates from Sorted Array](../26_Remove_Duplicates_From_Sorted_Array/), we will develop the algorithm step by step.

1. pointer k : define loop invariant: [0, k) contains numbers who appear at most twice. That is, k is the next replaced position.
2. Who can be placed in nums[k]?
   There are 3 cases:
   1. [1,2,3,4,5,6], nums[i] is the number who appear only once. 
   2. [1,1,2,2,3,3], nums[i] is the number who appear twice.
   3. [1,1,1,2,2,2], nums[i] is the number who appear more than twice.
   Intuitively, if the number appear more than twice, the last 2 should be placed in nums[k] and nums[k + 1].
   That is, for pointer i, `if ( i+2>=len(nums) or nums[i + 2]!=nums[i] or nums[i+1]!=nums[i] )`, swap nums[k] with nums[i].

#### Algorithm 02

1. pointer k: [0, k] contains numbers who appear at most twice. That is, k + 1 is the next replaced position.
2. Who can be placed in nums[k + 1]?
   `i != k and (nums[i] != nums[k] or i + 1 >=len(nums) or nums[i + 1] != nums[i])`, which means in the example [1,1,1,2,2,2,3,3,3], for the range of number 2, the first 2 was added to result array and the last 2 was also added to result array. For this example: [1,1,2,2,3,3], it is also correct.
