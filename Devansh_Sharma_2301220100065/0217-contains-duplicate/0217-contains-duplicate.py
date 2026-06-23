class Solution(object):
    def containsDuplicate(self, nums):
        ans=set(nums)
        if len(ans)==len(nums):
            return False
        else:
            return True