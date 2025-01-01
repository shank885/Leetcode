/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* prev;
    Node* next;
    Node* child;
};
*/

class Solution
{
public:
    Node *flatten(Node *head)
    {
        Node *curr = head;
        Node *temp, *tail;

        while (curr)
        {
            if (curr->child)
            {
                if (curr->next == nullptr)
                {
                    curr->next = curr->child;
                    curr->child->prev = curr;
                    curr->child = nullptr;
                    curr = curr->next;
                    continue;
                }

                temp = curr->next;
                curr->next = curr->child;
                curr->child->prev = curr;

                tail = curr->child;
                while (tail->next != nullptr)
                {
                    tail = tail->next;
                }
                tail->next = temp;
                temp->prev = tail;
                curr->child = nullptr;
            }
            curr = curr->next;
        }
        return head;
    }
};