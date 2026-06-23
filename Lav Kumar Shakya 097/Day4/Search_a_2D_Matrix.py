class Solution(object):
    def searchMatrix(self, matrix, target):
        l = 0
        r = len(matrix) - 1
        while l <= r:
            mid = l + (r - l) // 2
            if matrix[mid][0] < target:
                l = mid + 1
            elif matrix[mid][0] > target:
                r = mid - 1
            else:
                return True
        if r < 0:
            return False

        l1 = 0
        r1 = len(matrix[r]) - 1
        while l1 <= r1:
            mid = l1 + (r1 - l1) // 2
            if matrix[r][mid] < target:
                l1 = mid + 1
            elif matrix[r][mid] > target:
                r1 = mid - 1
            else:
                return True
        return False