#stack is a linear data structure that follows the LIFO (Last In First Out) principle.

class Stack:
    def __init__(self):
        self.items = []
        
    #function to check if the stack is empty
    def is_empty(self):
        return len(self.items) == 0
    
    #function to add an item to the stack
    def push(self, item):
        self.items.append(item)
        
    #function to remove and return the top item from the stack
    def pop(self):
        if self.is_empty():
            return None
        return self.items.pop()
    
    #function to return the top item from the stack without removing it
    def peek(self):
        if self.is_empty():
            return None
        return self.items[-1]
    
    #function to return the size of the stack
    def size(self):
        return len(self.items)
    
    #function to print the stack
    def print_stack(self):
        print("Stack:", self.items)
        
        
        
s = "()[]{}"
top = s.top()
