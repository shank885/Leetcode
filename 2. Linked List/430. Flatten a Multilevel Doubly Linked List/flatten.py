"""
# Definition for a Node.
class Node:
    def __init__(self, val, prev, next, child):
        self.val = val
        self.prev = prev
        self.next = next
        self.child = child
"""


class Solution:
    def flatten(self, head: "Optional[Node]") -> "Optional[Node]":
        curr = head
        temp = None
        tail = None

        while curr:
            if curr.child:
                if curr.next == None:
                    curr.next = curr.child
                    curr.child.prev = curr
                    curr.child = None
                    curr = curr.next
                    continue

                temp = curr.next
                curr.next = curr.child
                curr.child.prev = curr

                tail = curr.child

                while tail.next != None:
                    tail = tail.next
                tail.next = temp
                temp.prev = tail
                curr.child = None

            curr = curr.next
        return head
