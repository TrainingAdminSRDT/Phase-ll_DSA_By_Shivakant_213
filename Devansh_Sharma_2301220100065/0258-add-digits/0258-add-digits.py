class Solution:
    def addDigits(self, num: int) -> int:
        if num>9:
            temp=(num//10)+(num%10)
            return self.addDigits(temp)
        else:
            return num
        # return 0 if num==0 else 1+(num-1)%9
            