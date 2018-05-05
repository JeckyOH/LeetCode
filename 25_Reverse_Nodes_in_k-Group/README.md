### Analysis

#### How to reverse a linked list?

1-> 2-> 3-> 4-> 5-> 6-> 7-> 8-> 9

Time Complexity: O(n)

1 loop with 2 pointers

`
prev = head;
next = head->next;
while (next != null):
    tmp = next->next;
    next->next = prev;
    prev = next;
    next = tmp;
`

#### How to reverse the linked list with groups?

              |                  |
1-> 2-> 3-> 4 | -> 5-> 6-> 7-> 8 | -> 9
              |                  |

Here, there are 3 groups with size of 4.

Within one group:
Use the method described above to reverse the part of linked list within the group.

Between groups:
1. Recursive Method:
   return the head pointer to be assigned to the last pointer of previous part.

2. Iterative Method:
   Two pointers for every part:
       * p: pointing to the sentinel node of current part
       * q: pointing to the last node of current part
   Thus, we need to reverse the part (p, q] for every iteration.
   First, make sure the successive node of sentinel node and first node is correct.
   Second, reverse the list according to the method described above.
