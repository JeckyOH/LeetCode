### Solution 01

Intuitively, we can use the thought of counting sort.
1. Tranverse the array to calculate the number of 0, 1 and 2.
2. Tranverse the array again and modify the contents of array.

Time Complexity: O(n). Twice to tranverse the array.
Space Complexity: O(k). k is 3 here. We can assume it is O(1).

### Solution 02

The array need to be seperated into 3 parts finally.
```
*************************************************************
*number 0    *  number 1    * unclasified    * number 2     *
*^          ^                ^                ^             *
*|          |                |                |             *
*0         zero              i               two            *
*************************************************************
```

As the above figure, the array is being seperated into 4 parts when the algorithm is running.
We set up 3 pointers to seperate these 4 parts.
* [0, zero] contains number 0;
* (zero, i) contains number 1;
* [i, two) contains unclasified number;
* [two, len(array) - 1] contains number 2.

This algorithm is similar to 3-way quick sort. 
When the algorithm is running, the array is seperated into x parts, thus we need x - 1 pointers.
