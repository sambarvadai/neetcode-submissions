# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next

class Solution:
    def addTwoNumbers(self, l1: Optional[ListNode], l2: Optional[ListNode]) -> Optional[ListNode]:
        ptr1 = l1
        ptr2 = l2
        carry = 0
        dummy = ListNode(0)
        cur = dummy
        while ptr1 or ptr2:
            v1 = ptr1.val if ptr1 else 0
            v2 = ptr2.val if ptr2 else 0 
            sum = carry + v1 + v2
            carry = sum // 10
            sum = sum % 10
            newNode = ListNode(sum)
            cur.next = newNode
            cur = cur.next
            ptr1 = ptr1.next if ptr1 else None
            ptr2 = ptr2.next if ptr2 else None

        if(carry > 0):
            newNode = ListNode(carry)
            cur.next = newNode
        return dummy.next