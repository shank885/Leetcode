if (!head)
{
    return nullptr;
}

ListNode *curr = head;
ListNode *temp;
ListNode *even = new ListNode(0);
ListNode *even_tail = even;

while (curr && curr->next)
{
    temp = curr->next;
    curr->next = temp->next;
    even_tail->next = temp;
    temp->next = nullptr;
    even_tail = even_tail->next;

    if (curr->next)
    {
        curr = curr->next;
    }
}
curr->next = even->next;

return head;