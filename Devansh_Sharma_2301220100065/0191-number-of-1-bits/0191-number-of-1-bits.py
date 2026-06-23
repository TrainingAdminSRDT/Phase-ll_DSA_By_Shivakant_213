class Solution:
    def hammingWeight(self, n: int) -> int:
        bit=bin(n)[2:]
        return str(bit).count("1")
        # c=0
        # while n>0:
        #     if n%2==1:
        #         c+=1
        #     n//=2
        # return c