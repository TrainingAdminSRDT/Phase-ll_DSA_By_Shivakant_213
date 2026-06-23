#a tree is a non linear data structure which is used to represent hierarchical data

class Node:
    def __init__(self,data):
        self.data = data
        self.children = []
    def add_child(self,child_node):
        self.children.append(child_node)
    def remove_child(self,child_node):
        self.children = [child for child in self.children if child != child_node]
    def __repr__(self,level=0):
        ret = " " * (level*4) + repr(self.data) + "\n"
        for child in self.children:
            ret += child.__repr__(level+1)
        return ret
    
    
if __name__ == "__main__":
    root = Node("root")
    child1 = Node("child1")
    child2 = Node("child2")
    child3 = Node("child3")
    root.add_child(child1)
    root.add_child(child2)
    child1.add_child(child3)
    print(root)
    
    