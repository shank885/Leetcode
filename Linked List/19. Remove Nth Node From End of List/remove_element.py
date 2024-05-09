# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def removeNthFromEnd(self, head: Optional[ListNode], n: int) -> Optional[ListNode]:
        tmp = ListNode()
        tmp.next = head
        fwd = tmp
        bwd = tmp

        for i in range(n + 1):
            fwd = fwd.next

        while fwd:
            fwd = fwd.next
            bwd = bwd.next

        fwd = bwd.next
        bwd.next = bwd.next.next
        del fwd

        return tmp.next