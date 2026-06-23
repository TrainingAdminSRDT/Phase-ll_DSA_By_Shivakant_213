class Solution(object):
    def isValid(self, s):
        d = {"(":")", "[":"]", "{":"}"}
        j = []
        if (s[0] in d.values()) or (s[-1] in d.keys()) or (len(s)%2 != 0):
            return False
        else:
            for i in s:
                if i in d.keys():
                    j.append(i)
                else:
                    if len(j) != 0 and d[j[-1]] == i:
                        j.pop(-1)
                    else:
                        return False
            return True if len(j) == 0 else False