# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def oddEvenList(self, head: Optional[ListNode]) -> Optional[ListNode]:
        if not head:
            return None

        curr = head
        temp = None
        even = ListNode(0)
        even_tail = even

        while curr and curr.next:
            temp = curr.next
            curr.next = temp.next
            even_tail.next = temp
            temp.next = None
            even_tail = even_tail.next

            if curr.next:
                curr = curr.next

        curr.next = even.next
        return head
