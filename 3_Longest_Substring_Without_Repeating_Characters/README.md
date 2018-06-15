### Analysis

#### Solution 01

Brute Force.
Tranverse all possible subarray s[i...j] to see whether it contains duplicated characters.
Time: O(n^3).

#### Solution 02

Sliding window can be a good way to solve this kind of problems which query a subarray.
let s[i...j] represents the sliding window.
in the loop:
1. if s[j + 1] is not a duplicated character, right boundry move forward and update the max length
2. otherwise, left boundry move forward

loop invariant:
in each iteration, s[i...j] contains only non-duplicated characters.
