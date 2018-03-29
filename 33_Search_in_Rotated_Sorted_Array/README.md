### Analysis

Find a number in a sorted array => Binary Search

Now, the sorted array has been rotated => Index has been changed in some principle

#### How does the index of sorted array change to rotated sorted array?

Supposing that the sorted array, with size 10, is right rotated 4 times.
Sorted[i] is placed into Rotated[ (i + 4) % 10].
Thus, if we know how to change rotated array into original sorted array.
We can use binary search with some transformation of index.

### Method

1) Find the index of minimum number in the rotated array => Binary Search => O(lgn)

    Here, it is a really clever method to use binary search. Usually, the way we use binary search is to compary the middle element with a target.
    However, here it compares the middle element with high element. In this way, until low >= high. The low = high = index of minimum number.

2) Supposing we get index 4 from last step, which means the origin sorted array is right rotated 4 times to get rotated array,
just use binary search against rotated array. However, supposing mid = (low + high) / 2, the actual index is (mid + 4) % n.

### Conclusion

This problem looks like problem 74.
They are both the basic binary search, but with some transformation of index when we access the actual data in the arrary.

### How to use Binary Search?

Goal: Find a target.
How: compare middle element and give up half of elements. So, we need to know which part should be given up.
