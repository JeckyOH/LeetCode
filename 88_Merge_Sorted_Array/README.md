### Analysis

Intuitively, we need two pointers for nums1 and nums2 respectively to tranverse these two arrays.
Besides, another pointer is needed to point to the position which will be filled in nums1.

#### Idea 01
I tried to make pointers i and j start from 0; k start from m.
However, the order cannot be maintained or more moving operations should be done to maintain the order of nums1.

#### Idea 02
We can make k start from m + n -1, i start from m - 1 and j start from n - 1.
