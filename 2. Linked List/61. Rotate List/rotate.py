# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def rotateRight(self, head: Optional[ListNode], k: int) -> Optional[ListNode]:
        tail = head
        curr = head
        temp = None

        if not head or not head.next:
            return head

        list_len = 1
        while tail.next:
            tail = tail.next
            list_len += 1

        iter = list_len - (k % list_len)

        for i in range(iter):
            temp = head
            head = head.next
            temp.next = None
            tail.next = temp
            tail = tail.next

        return head
