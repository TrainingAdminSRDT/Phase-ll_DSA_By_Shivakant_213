class Solution(object):
    def mergeAlternately(self, word1, word2):
        l1=len(word1)
        l2=len(word2)
        i=0
        nstr=[]
        while i<l1 and i<l2:
            nstr.append(word1[i])
            nstr.append(word2[i])
            i+=1
        if i<l1:
            nstr.append(word1[i:])
        if i<l2:
            nstr.append(word2[i:])
        return "".join(nstr)