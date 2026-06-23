class Solution(object):
    def twoSum(self, nums, target):
        """
        :type nums: List[int]
        :type target: int
        :rtype: List[int]
        """
        dis={}
        for i in range(len(nums)):
            val=target-nums[i]
            if val in dis:
                return [dis[val],i]
            dis[nums[i]]=i
        return []