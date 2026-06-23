class Node:
    def __init__(self, data):
        self.data = data
        self.next = None
        
#singly linked list class
class SinglyLinkedList:
    def __init__(self):
        self.head = None
        
    #function to add a new node at the end of the linked list
    def append(self, data):
        new_node = Node(data)
        if not self.head:
            self.head = new_node
            return
        last_node = self.head
        while last_node.next:
            last_node = last_node.next
        last_node.next = new_node
        
    #function to print the linked list 
    def print_list(self):
        current_node = self.head
        while current_node:
            print(current_node.data, end=" -> ")
            current_node = current_node.next
        print("None")
        
        
        
#singly linked list is a data structure that consists of a sequence of nodes, 
# where each node contains data and a reference (or pointer) to the next node in the sequence. 
# It allows for efficient insertion and deletion of elements, as well as dynamic memory allocation.
#creation of a singly linked list and adding nodes to it
sll = SinglyLinkedList()
sll.append(1)
sll.append(2)
sll.append(3)

#inserting a new node at the end of the linked list
sll.append(4)
#printing the linked list
sll.print_list()

#insert a new node at the beginning of the linked list
new_node = Node(6)
new_node.next = sll.head
sll.head = new_node
#printing the linked list after inserting a new node at the beginning
sll.print_list()


#inserting a new node after a given node in the linked list with n elements 
def insert_after(self, prev_node, data):
    if not prev_node:
        print("The given previous node must be in the linked list.")
        return
    new_node = Node(data)
    new_node.next = prev_node.next
    prev_node.next = new_node       