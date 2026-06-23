class TreeNode:
    def __init__(self, data):
        self.data = data
        self.children = []

    def add_child(self, child):
        self.children.append(child)
        
# Root node
root = TreeNode("A")

# Child nodes
b = TreeNode("B")
c = TreeNode("C")
d = TreeNode("D")

root.add_child(b)
root.add_child(c)
b.add_child(d)


