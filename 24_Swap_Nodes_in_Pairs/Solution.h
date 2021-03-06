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
    ListNode* swapPairs(ListNode* head) {
        ListNode* res = (head != NULL && head->next != NULL ? head->next : head);

        ListNode *cur_node = head, *prev = NULL;
        while (cur_node != NULL && cur_node->next != NULL)
        {
            ListNode* next_node = cur_node->next;
            cur_node->next = next_node->next;
            next_node->next = cur_node;

            if (prev != NULL)
                prev->next = next_node;
            prev = cur_node;
            cur_node = cur_node->next;
        }

        return res;
    }
};
