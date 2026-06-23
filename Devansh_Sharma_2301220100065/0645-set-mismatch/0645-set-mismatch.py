class Solution(object):
    def findErrorNums(self, nums):
        """
        :type nums: List[int]
        :rtype: List[int]
    
        """
        s=set(nums)
        n=len(nums)
        dup=sum(nums)-sum(s)
        mis=n*(n+1)//2 - sum(s)
        return [dup,mis]