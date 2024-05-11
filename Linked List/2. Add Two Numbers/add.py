# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def addTwoNumbers(
        self, l1: Optional[ListNode], l2: Optional[ListNode]
    ) -> Optional[ListNode]:
        head = ListNode(0)
        temp = head

        carry = 0

        while l1 and l2:
            val = l1.val + l2.val
            if carry:
                val = val + carry

            temp.next = ListNode(val % 10)
            temp = temp.next
            carry = 0 if val < 10 else 1

            l1 = l1.next
            l2 = l2.next

        while l1:
            val = l1.val + carry
            temp.next = ListNode(val % 10)
            temp = temp.next
            carry = 0 if val < 10 else 1
            l1 = l1.next

        while l2:
            val = l2.val + carry
            temp.next = ListNode(val % 10)
            temp = temp.next
            carry = 0 if val < 10 else 1
            l2 = l2.next

        if carry:
            temp.next = ListNode(carry)
            temp = temp.next

        return head.next