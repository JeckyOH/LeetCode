### Analysis

Devide the problem into 2 subproblems:

    1. Find the start index of target in the array
    2. Find the end index of target in the array

Because the array is sorted, Binary Search should be the first clue in our mind.

#### Find the Start Index

mid = (low + high) / 2;

1. Target is in the left side, if target <= nums[mid] => high = mid
2. Target is in the right side, if target > nums[mid] => low = mid + 1

Then, we need to check whether target is in the array by checking nums[low] == target.

#### Find the End Index

1. Target is in the right side, if target >= nums[mid] => low = mid
2. Target is in the left side, if target < nums[mid] => high = mid - 1

Note:
If we still use mid = (low + high) / 2 here, we would get in the infinite loop when target >= nums[mid] and there are only 2 elements between low and high.
Thus, we use mid = (low + high + 1) / 2 to use the upper boundry of (low + high) / 2.


