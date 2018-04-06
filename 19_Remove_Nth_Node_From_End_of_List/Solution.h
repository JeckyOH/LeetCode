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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode *prev = NULL, *iter = head, *n_step = head;
        while(n--) n_step = n_step->next;

        while(n_step != NULL)
        {
            prev = iter;
            iter = iter->next;
            n_step = n_step->next;
        }
        if(prev != NULL)
            prev->next = iter->next;
        else
            head = head->next;

        return head;
    }
};
