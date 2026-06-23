class Node:
    def __init__(self, x):
        self.data = x
        self.next = None
    
    
def insertAtFront(head, x):
    newNode = Node(x)
    newNode.next = head
    return newNode


def insertAtEnd(head, x):
    # Create a new node
    newNode = Node(x)

    # If the Linked List is empty, make
    # the new node as the head and return
    if head is None:
        return newNode

    # Store the head reference in a temporary variable
    last = head

    # Traverse till the last node
    while last.next is not None:
        last = last.next

    # Change the next pointer of the last node 
    # to point to the new node
    last.next = newNode
    return head


def insertPos(head, pos, val):

    if pos < 1:
        return head

    # head will change if pos = 1
    if pos == 1:
        newNode = Node(val)
        newNode.next = head
        return newNode

    curr = head

    # Traverse to the node just before the new node
    for i in range(1, pos - 1):
        if curr is None:
            return head
        curr = curr.next

    # If position is greater than number of nodes
    if curr is None:
        return head

    newNode = Node(val)

    # update the next pointers
    newNode.next = curr.next
    curr.next = newNode

    return head
