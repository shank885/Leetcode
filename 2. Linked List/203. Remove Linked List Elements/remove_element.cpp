/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution
{
public:
    ListNode *removeElements(ListNode *head, int val)
    {
        if (!head)
        {
            return nullptr;
        }

        // delete all the leading nodes with node->val == val
        ListNode *tmp;
        while (head && head->val == val)
        {
            tmp = head;
            head = head->next;
        }

        // remove intermediate nodes with node->val == val
        ListNode *curr = head;
        while (curr && curr->next)
        {
            if (curr->next->val == val)
            {
                tmp = curr->next;
                curr->next = tmp->next;
                delete tmp;
            }
            else
            {
                curr = curr->next;
            }
        }
        return head;
    }
};