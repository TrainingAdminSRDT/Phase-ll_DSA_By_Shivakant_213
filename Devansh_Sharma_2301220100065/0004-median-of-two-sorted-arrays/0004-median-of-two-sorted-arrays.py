class Solution(object):
    def findMedianSortedArrays(self, nums1, nums2):
        """
        :type nums1: List[int]
        :type nums2: List[int]
        :rtype: float
        """
        l1=nums1+nums2
        l1.sort()
        mid = len(l1)//2
        if len(l1) % 2 ==0:
            return (l1[mid-1]+l1[mid])/2.0
        else:
            return l1[mid]
        