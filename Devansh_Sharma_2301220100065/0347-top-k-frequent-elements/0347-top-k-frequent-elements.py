class Solution(object):
    def topKFrequent(self, nums, k):
        d={}
        l=[]
        for i  in nums:
            if i in d:
                d[i]+=1
            else:
                d[i]=0
        for i in range(k):
            m = max(d, key=d.get)
            l.append(m)
            del d[m]
        return l