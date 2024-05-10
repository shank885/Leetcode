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
    ListNode *reverseList(ListNode *head)
    {

        if (!head)
        {
            return nullptr;
        }
        if (!head->next)
        {
            return head;
        }

        ListNode *temp = nullptr;
        ListNode *bwd = head;
        ListNode *fwd = head->next;

        while (bwd->next)
        {
            bwd->next = temp;
            temp = bwd;
            bwd = fwd;
            fwd = fwd->next;
        }
        bwd->next = temp;
        head = bwd;

        return head;
    }
};