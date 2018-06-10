### Analysis

#### Solution 01

Just tranverse the array and compare nums[i] with nums[i + 1].
If they are the same, remove either one.
However, just note the iterator if erase() is used.

Here, I use index to avoid iterator problem.

Time Complexity: O(n).
However, time for removing may be a large number.

#### Solution 02
Declare another space, say dictionary, to store numbers and the times they appear.
Time Complexity: O(n)
Space Complexity: O(n)

#### Solution 03

Two Pointer Method.

##### From 2 ends VS from the same end ?
Because our goal is to remove duplicated elements from sorted array,
it does not make any sense if the two pointers start from 2 ends.

##### declare 2 pointers
i: iteration variable, used for getting the last number within a range of same numbers.
k: let us define the loop invariat: [0, k) contains all in-duplicated numbers. That is, k is the next replaced position.

Thus, the algorithm should looks like this:
```python
k = 0
for i from 0 to len(nums):
  if nums[i + 1] != nums[i]:
    swap nums[k] with nums[i]
    k++
```

Explain the algorithm:
[1,1,1,2,3,4,4,5]
1. tranverse the array to look for the last number of a range of same numbers, for example finding the third 1 in the array.
2. k is the next replaced position
3. swap nums[k] with nums[i] so that [0, k) contains in-duplicated numbers.

##### Another similar alglrithm
k: [0, k] contains all in-duplicated numbers. That is, k + 1 is next replaced position.
In other words, who can be placed in nums[k + 1]?
The answer is the number who is not equal to nums[k].

```python
k = 0
for i from 0 to len(nums):
  if nums[i] != nums[k]:
    k++
    swap nums[k] with nums[i]
```

#### Summary
How to use two pointers method from the same end?
* define one of the pointer k, who also has the definition of loop invariat.
* if k is related to the next replaced position, for example k or k + 1 is the next replaced position, define who can be placed in the next replaced position.
  According to who can be placed, we can get the oprations of variable i.
