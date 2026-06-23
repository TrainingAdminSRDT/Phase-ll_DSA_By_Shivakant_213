class Solution(object):
    def shuffle(self, nums, n):
        """
        :type nums: List[int]
        :type n: int
        :rtype: List[int]
        """
        l2=nums[n::1]
        l=[]
        for i in range(n):
            l.append(nums[i])
            l.append(l2[i])
        return l