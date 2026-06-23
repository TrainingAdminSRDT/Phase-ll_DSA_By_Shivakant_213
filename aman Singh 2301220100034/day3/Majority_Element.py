class Solution(object):
    def majorityElement(self, nums):
        a = set(nums)
        for i in a:
            if nums.count(i) > len(nums) / 2:
                return i