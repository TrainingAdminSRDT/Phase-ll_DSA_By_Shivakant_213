class Solution:
    def longestCommonPrefix(self, strs: List[str]) -> str:
        pre=""
        m=min(strs,key=len)
        for i in m:
            pre+=i
            for j in strs:
                if j.startswith(pre):
                    continue
                else:
                    return pre[:-1]
        return pre