class Solution(object):
    def findContentChildren(self, g, s):
        g=sorted(g)
        s=sorted(s)
        i=0
        j=0
        while i <len(g) and j<len(s):
            if g[i]<=s[j]:
                i+=1
            j+=1
        return i
