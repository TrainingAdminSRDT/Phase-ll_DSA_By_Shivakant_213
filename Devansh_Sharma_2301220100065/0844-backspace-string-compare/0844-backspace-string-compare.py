class Solution:
    def build(self, string):
        stack = []
        for ch in string:
            if ch == '#':
                if stack:
                    stack.pop()
            else:
                stack.append(ch)
        return stack

    def backspaceCompare(self, s: str, t: str) -> bool:
        return self.build(s) == self.build(t)