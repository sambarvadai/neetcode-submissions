"""
# Definition for a Node.
class Node:
    def __init__(self, x: int, next: 'Node' = None, random: 'Node' = None):
        self.val = int(x)
        self.next = next
        self.random = random
"""

class Solution:
    def copyRandomList(self, head: 'Optional[Node]') -> 'Optional[Node]':
        #First make a copy mapping, that stores the references of the old and the new nodes. Kinda like"
        #Kinda like storing the relations.
        oldToNewNode = {None: None}
        #The only default mapping is for none
        cur = head
        while cur:
            copy = Node(cur.val)
            oldToNewNode[cur] = copy #Basically for the old node, this is the corresponding new node created
            cur = cur.next
        cur = head
        while cur:
            copy = oldToNewNode[cur]
            copy.next = oldToNewNode[cur.next]
            copy.random = oldToNewNode[cur.random]
            cur = cur.next
        return oldToNewNode[head]
        