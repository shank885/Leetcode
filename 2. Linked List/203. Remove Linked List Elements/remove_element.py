# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def removeElements(self, head: Optional[ListNode], val: int) -> Optional[ListNode]:
        if not head:
            return None

        # delete all the leading nodes with node->val == val
        tmp = None
        while head and head.val == val:
            tmp = head
            head = head.next

        # remove intermediate nodes with node->val == val
        curr = head
        while curr and curr.next:
            if curr.next.val == val:
                tmp = curr.next
                curr.next = tmp.next
                del tmp
            else:
                curr = curr.next
        return head