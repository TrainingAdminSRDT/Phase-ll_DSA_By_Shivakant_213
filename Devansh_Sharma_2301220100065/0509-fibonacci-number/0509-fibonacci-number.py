class Solution:
    def fib(self, n: int) -> int:
        # if n==0:
        #     return 0
        # elif n==1:
        #     return 1
        # return self.fib(n-1)+self.fib(n-2)
        a, b = 0, 1
        if n == 0:
            return a
        elif n == 1:
            return b
        for _ in range(2, n + 1):
            c = a + b
            a = b
            b = c
        return c