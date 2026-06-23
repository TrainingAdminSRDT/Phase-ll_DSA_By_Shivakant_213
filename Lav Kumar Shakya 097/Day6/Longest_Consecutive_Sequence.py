class Solution(object):
    def longestConsecutive(self, nums):
        if not nums:
            return 0

        l = sorted(set(nums))

        c = 1
        lon = 1

        for i in range(1, len(l)):
            if l[i] == l[i-1] + 1:
                c += 1
            else:
                lon = max(lon, c)
                c = 1

        lon = max(lon, c)
        return lon