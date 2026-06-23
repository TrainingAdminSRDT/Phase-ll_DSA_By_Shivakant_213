class Solution:
    def isPowerOfThree(self, n: int) -> bool:
        # if n==1:
        #     return True
        # elif n<=0 or n%3 !=0:
        #     return False
        # return self.isPowerOfThree(n/3)
        if n <= 0:
            return False
        while n % 3 == 0:
            n //= 3
        return n == 1