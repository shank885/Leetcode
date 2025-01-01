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
    ListNode *rotateRight(ListNode *head, int k)
    {
        ListNode *tail = head;
        ListNode *curr = head;
        ListNode *temp;

        if (!head || !head->next)
        {
            return head;
        }

        int list_len = 1;
        while (tail->next)
        {
            tail = tail->next;
            list_len++;
        }

        printf("%d", list_len);

        int iter = list_len - (k % list_len);

        for (int i = 0; i < iter; i++)
        {
            temp = head;
            head = head->next;
            temp->next = nullptr;
            tail->next = temp;
            tail = tail->next;
        }
        return head;
    }
};