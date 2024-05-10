# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def reverseList(self, head: Optional[ListNode]) -> Optional[ListNode]:
        if not head:
            return None
        if not head.next:
            return head

        temp = None
        bwd = head
        fwd = head.next

        while bwd.next:
            bwd.next = temp
            temp = bwd
            bwd = fwd
            fwd = fwd.next

        bwd.next = temp
        head = bwd

        return head