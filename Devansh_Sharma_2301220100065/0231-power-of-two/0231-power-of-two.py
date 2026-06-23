class Solution:
    def isPowerOfTwo(self, n: int) -> bool:
        if (n%2!=0 or n<=0) and n!=1:
            return False
        else:
            for i in range(31):
                if n==pow(2,i):
                    return True
            return False
