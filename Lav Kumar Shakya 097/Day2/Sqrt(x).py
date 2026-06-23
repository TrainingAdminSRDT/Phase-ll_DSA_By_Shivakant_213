class Solution:
    def mySqrt(self, x):
        n = x
        if x != 0:
            while True:
                root = (n + x / n) / 2

                if abs(root - n) < 1e-6:
                    return int(root)

                n = root
        else:
            return 0