# Definition for singly-linked list.
class ListNode(object):
    def __init__(self, val=0, next=None):
        self.val = val
        self.next = next
class Solution(object):
    def reverseList(self, head):
        """
        :type head: Optional[ListNode]
        :rtype: Optional[ListNode]
        """
        t = []
        c = head
        while c is not None:
            t.append(c.val)
            c = c.next
        head1 = None
        for i in range(len(t)):
            n = ListNode(t[i])
            n.next = head1
            head1 = n
        return head1