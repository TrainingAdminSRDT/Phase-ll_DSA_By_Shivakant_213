class Solution:
    def reverseBits(self, n):
        a = bin(n)[2:]
        if len(a) < 32:
            a = '0' * (32-len(a))+a
        a = a[::-1]
        a = int(a,2)
        
        return a