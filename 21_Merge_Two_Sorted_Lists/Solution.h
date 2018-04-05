/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        ListNode head_node = ListNode(0);
        ListNode* iter = &head_node;
        ListNode** pp_cur_head = NULL;

        while(l1 && l2)
        {
            pp_cur_head = &((l1->val < l2->val) ? l1 : l2);
            iter->next = (*pp_cur_head);
            *pp_cur_head = (*pp_cur_head)->next;
            iter = iter->next;
        }
        iter->next = l1 == NULL ? l2 : l1;

        return head_node.next;
    }
};
