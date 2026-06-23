class Solution:
    def rotate(self, nums):
        if k > len(nums):
            k %= len(nums)
            nums[:] = nums[-k:] + nums[:-k]
        else:
            nums[:] = nums[-k:] + nums[:-k]
        