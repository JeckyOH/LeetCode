### Analysis

Binary Search.

Search a specific number k between [1, x] so that k^2 <= x < (k + 1)^2.
Apply binary search on [1, x]:
* return the element satisfying the condition k^2 <= x < (k + 1)^2.
* if k > x/k, high = mid - 1
* if k + 1 < x/(k+1), high = mid + 1
