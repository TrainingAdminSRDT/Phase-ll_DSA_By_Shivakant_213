class Solution:
    def runningSum(self, nums: List[int]) -> List[int]:
        rs=[]
        t=0
        for i in range(len(nums)):
            t+=nums[i]
            rs.append(t)
        return rs
