class Solution:
    def mySqrt(self, x: int) -> int:
        # for i in range(1,x+1):
        #     if i*i>x:
        #         return i-1
        # return x
        if x==0:
            return x
        l,r=0,x
        while l<=r:
            m=l+(r-l)//2
            if m*m==x:
                return m
            elif m*m>x:
                r=m-1
            else:
                l=m+1
        return r