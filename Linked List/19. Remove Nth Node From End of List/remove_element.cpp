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
    ListNode *removeNthFromEnd(ListNode *head, int n)
    {
        ListNode *tmp = new ListNode(0);
        tmp->next = head;
        ListNode *fwd = tmp;
        ListNode *bwd = tmp;

        for (int i = 0; i <= n; i++)
        {
            fwd = fwd->next;
        }

        while (fwd)
        {
            fwd = fwd->next;
            bwd = bwd->next;
        }

        fwd = bwd->next;
        bwd->next = bwd->next->next;
        delete fwd;

        return tmp->next;
    }
};