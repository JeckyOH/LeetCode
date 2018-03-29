### Analysis

Almost similar to [33 Search in Rotated Sorted Array](../33_Search_in_Rotated_Sorted_Array).

So, just find the rotation times.

Some differences:
1) [3,3,3,4,5,6,0,1,3,3] is allowed, so we need to skip the duplicated elements in the front of array.
2) [3,1,1,1] is allowed, when we find the minimum number, if we find nums[mid] == nums[high], go to the first half to continue finding minimum elements.
