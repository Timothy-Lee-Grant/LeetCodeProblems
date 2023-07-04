# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, x):
#         self.val = x
#         self.next = None

class Solution:
    def hasCycle(self, head: Optional[ListNode]) -> bool:

        #each 'next' fundamentally is a pointer
        #if the pointer points to the same location in memory, then there is a cycle
        #add each of the node addresses into an array

        if not head:
            return False

        visitedNodes = []

        visitedNodes.append(head)

        while head.next:
            visitedNodes.append(head.next)
            head = head.next

            #check if already in visted node
            for indexVal in range(len(visitedNodes)):
                if head == visitedNodes[indexVal]:
                    return True


        return False