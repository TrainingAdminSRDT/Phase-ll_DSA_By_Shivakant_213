class Solution:
    def generate(self, numRows): 
        s = [[1]]
        for i in range(2, numRows + 1):
            n = 1
            row = [1]
            for j in range(1, i):
                n = (n * (i-j)) // j
                row.append(n)
            s.append(row)
        return s