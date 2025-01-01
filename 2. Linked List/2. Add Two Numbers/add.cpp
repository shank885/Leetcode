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
    ListNode *addTwoNumbers(ListNode *l1, ListNode *l2)
    {
        ListNode *head = new ListNode(0);
        ListNode *temp = head;

        int val;
        int carry = 0;

        while (l1 && l2)
        {
            val = l1->val + l2->val;
            if (carry)
            {
                val = val + carry;
            }
            temp->next = new ListNode(val % 10);
            temp = temp->next;
            carry = val / 10;

            l1 = l1->next;
            l2 = l2->next;
        }

        while (l1)
        {
            val = l1->val + carry;
            temp->next = new ListNode(val % 10);
            temp = temp->next;
            carry = val / 10;
            l1 = l1->next;
        }
        while (l2)
        {
            val = l2->val + carry;
            temp->next = new ListNode(val % 10);
            temp = temp->next;
            carry = val / 10;
            l2 = l2->next;
        }
        if (carry)
        {
            temp->next = new ListNode(carry);
            temp = temp->next;
        }
        return head->next;
    }
};