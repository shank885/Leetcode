/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution
{
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB)
    {
        ListNode *slow = headA;
        ListNode *fast = headB;

        // move through both the list and check for intsersection
        while (slow->next)
        {
            slow = slow->next;
        }

        //  join the tail of list to list B head and create a loop;
        ListNode *tmp = slow;
        slow->next = headB;

        slow = headA;
        fast = headA;

        // serch for loop and loop start node
        // remove the loop before returning
        while (fast && fast->next)
        {
            slow = slow->next;
            fast = fast->next->next;

            if (slow == fast)
            {
                slow = headA;

                while (slow != fast)
                {
                    slow = slow->next;
                    fast = fast->next;
                }
                tmp->next = nullptr;
                return slow;
            }
        }
        tmp->next = nullptr;
        return nullptr;
    }
};