# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, x):
#         self.val = x
#         self.next = None


class Solution:
    def getIntersectionNode(
        self, headA: ListNode, headB: ListNode
    ) -> Optional[ListNode]:
        slow = headA
        fast = headB

        # Move to end of the node from list A
        # Join the tail of a to the head of B
        # keep a temp pointer there so that the
        # connection can be broken again
        while slow.next:
            slow = slow.next

        tmp = slow
        slow.next = headB

        slow = headA
        fast = headA

        # Check for loop and return the pointer to the intersection of list
        while fast and fast.next:
            slow = slow.next
            fast = fast.next.next

            if slow == fast:
                slow = headA
                while slow != fast:
                    slow = slow.next
                    fast = fast.next
                tmp.next = None
                return slow

        tmp.next = None
        return None
