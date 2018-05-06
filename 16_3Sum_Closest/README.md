### Analysis

Two pointer problem: similar to problem [3 Sum](../15_3Sum).

First, sort the entire array to make it in the ascendent order.
For each element nums[i], we iterate every pair behind it and calculate the sum of these 3 elements.
Here, "sum" is used to represent the current sum.
we can get the difference between the "sum" and "target".
If diff < min\_diff, store the diff as min\_diff and store the current sum.
Then, if the diff is 0, immetiately return the current sum.
If the diff is less than 0, which means we need larger sum, j++;
If the diff is larger than 0, which means we need less sum, k--.
