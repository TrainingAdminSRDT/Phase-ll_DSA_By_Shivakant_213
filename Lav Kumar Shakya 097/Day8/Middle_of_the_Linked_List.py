# Definition for singly-linked list.
class ListNode(object):
    def __init__(self, val=0, next=None):
        self.val = val
        self.next = next
class Solution(object):
    def middleNode(self, head):
        """
        :type head: Optional[ListNode]
        :rtype: Optional[ListNode]
        """
        if not head:
            return -1
        fast=head
        slow=head
        while (fast and fast.next):
            fast=fast.next.next
            slow=slow.next
        return slow