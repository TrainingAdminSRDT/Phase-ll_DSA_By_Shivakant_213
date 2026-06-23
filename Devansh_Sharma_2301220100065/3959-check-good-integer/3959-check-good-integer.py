class Solution:
    def checkGoodInteger(self, n: int) -> bool:
        sum=0
        sqsum=0
        while n>0:
            temp=n%10
            sum+=temp
            sqsum+=temp**2
            n=n//10
        if sqsum-sum>=50:
            return True
        else:
            return False