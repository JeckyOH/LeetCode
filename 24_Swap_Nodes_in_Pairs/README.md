### Analysis

The swaping process is iterative for every pair of nodes.

`
for every pair:
    firstnode->next = secondnode->next
    secondnode->next = firstnode
`

However, we cannot determine the value of "next" pointer of second node for now, until the following swaping process complete.

There are 2 methods:
1. Iterative:

`
prev_node = null
for every pair:
    firstnode->next = secondnode->next
    secondnode->next = firstnode
    
    if prev\_node != null:
        prev\_node -> next = secondnode
    prev\_node = firstnode
    firstnode = firstnode->next
`

2. Recursive:

`
swap\_pair(ListNode* cur)
{
    if cur == null:
        return null
    if cur->next == null:
        return cur
        
    firstnode = cur
    secondnode = cur->next
    
    firstnode->next = secondnode->next
    secondnode->next = firstnode
    
    firstnode->next = swap\_pair(firstnode->next)
    
    return secondnode
}
int main()
{
    swap\_pair(root)
}
`
