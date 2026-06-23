class Solution:
    def evalRPN(self, tokens: List[str]) -> int:
        """
        :type tokens: List[str]
        :rtype: int
        """
        l=[]
        for i in tokens:
            if i in "+-*/":
                a=l.pop()
                b=l.pop()
                if i == "+":
                    l.append(b+a)
                elif i=="-":
                    l.append(b-a)
                elif i=="*":
                    l.append(b*a)
                else:
                    l.append(int(b/a))
            else:
                l.append(int(i))

        return l[0]
