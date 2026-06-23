class Solution:
    def buildArray(self, target: List[int], n: int) -> List[str]:
        l=[]
        c=0
        for i in range(1,n+1):
            l.append("Push")
            if i in target:
                c+=1
            else:
                l.append("Pop")
            if c==len(target):
                break
        return l