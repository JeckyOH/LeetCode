### Analysis

Similar to swap method in quick sort.

2 pointers: 
1. i: from 0 to j
2. j: from n-1 to i

do:
num[i] is seeking for the val while num[j] is seeking for the value which is not val.
Swap num[i] with num[j].
until i > j
return i
