class Solution(object):
    def findMaxConsecutiveOnes(self, nums):
        c,f=0,0
        for i in nums:
            if i:
                c+=1
            else:
                if c>f:
                    f=c
                c=0
        if c>f:
            f=c
        return f