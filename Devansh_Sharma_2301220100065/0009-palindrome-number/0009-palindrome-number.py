class Solution:
    # def check(self,x) -> int:
    #     rev=0

    #     while x>0:
    #         rev=(rev*10)+(x%10)
    #         x=x//10
    #     return rev


    def isPalindrome(self, x: int) -> bool:
        # if self.check(x)==x:
        #     return True
        # else:
        #     return False

        i=str(x)
        return i[::-1]==i