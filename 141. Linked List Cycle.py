# Definition for singly-linked list.
# class ListNode(object):
#     def __init__(self, x):
#         self.val = x
#         self.next = None

class Solution(object):
    def hasCycle(self, head):
        """
        :type head: ListNode
        :rtype: bool
        """
        if head==None:
            return False
        n1=head
        n2=head.next
        while n1 !=None and n2!=None and n2.next !=None:
            if n1 ==n2:
                return True
            else:
                n1=n1.next
                n2=n2.next.next
        return False
