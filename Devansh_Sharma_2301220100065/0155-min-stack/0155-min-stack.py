class MinStack(object):

    def __init__(self):
        self.stack=[]
        self.min1=[]
        

    def push(self, value):
        """
        :type value: int
        :rtype: None
        """
        self.stack.append(value)
        if not self.min1:
            self.min1.append(value)
        elif value<self.min1[-1]:
            self.min1.append(value)
        else:
            self.min1.append(self.min1[-1])


    def pop(self):
        """
        :rtype: None
        """
        self.min1=self.min1[:-1]
        self.stack=self.stack[:-1]

        

    def top(self):
        """
        :rtype: int
        """
        return self.stack[-1]

    def getMin(self):
        """
        :rtype: int
        """
        if self.min1:
            return self.min1[-1]
        else:
            return []

            
        


# Your MinStack object will be instantiated and called as such:
# obj = MinStack()
# obj.push(value)
# obj.pop()
# param_3 = obj.top()
# param_4 = obj.getMin()