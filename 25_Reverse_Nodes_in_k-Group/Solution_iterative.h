class Solution {
public:
    ListNode* reverseKGroup(ListNode* head, int k) {
        ListNode dummy(0);
        dummy.next = head;

        ListNode *p = &dummy, *q = head;

        while(q != NULL)
        {
            // move q to the last node
            for (int i = 0; i < k - 1 && q != NULL; i++) q = q->next;

            if (q == NULL) continue;

            ListNode *cur_first = p->next, *next_first = q->next;
            p->next = q;
            ListNode *iter_prev = cur_first, *iter_next = cur_first->next;
            cur_first->next = q->next;

            for (int i = 0; i < k - 1; i++)
            {
                ListNode* tmp = iter_next->next;

                iter_next->next = iter_prev;
                iter_prev = iter_next;
                iter_next = tmp;
            }

            p = cur_first;
            q = next_first;
        }

        return dummy.next;
    }
};
