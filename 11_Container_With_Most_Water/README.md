### Analysis

We know that we must scan each value, so the minimum time complexity is O(n).

#### Method 1:

Brute Force
O(n^2) Time Complexity

#### Method 2:

Two Pointers

To get the maximum area, the intuitive approach is getting the longer length and longer width.
If we set up 2 pointers, one of them pointing to the begining of the array and another pointing to the end of the array, we now have the longest width.
Now, just calculate the area and compared with max area.
But how to move pointer?
Once we move pointer, we will get shorter width than before. So we need to move the pointer originally pointing to shorter length to see if we can get longer length.
Because if move the pointer originally pointing to longer length, no matter how long the next line, we cannot get longer length than before.
