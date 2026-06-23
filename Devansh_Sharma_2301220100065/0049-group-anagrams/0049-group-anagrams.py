class Solution(object):
    def groupAnagrams(self, strs):
        sl=[]
        rl=[]
        for i in range(len(strs)):
            if i in sl:
                continue
            else:
                l=[strs[i]]
                for j in range(i+1,len(strs)):   
                        if (len(strs[i])==len(strs[j])):
                            for k in range(len(strs[i])):
                                if (strs[i][k] in strs[j]) and (strs[j][k]  in strs[i]) and (strs[i].count(strs[j][k])==strs[j].count(strs[j][k])):
                                    pass
                                else:
                                    break
                            else:
                                sl.append(j)
                                l.append(strs[j])
                rl.append(l)
        return rl
                