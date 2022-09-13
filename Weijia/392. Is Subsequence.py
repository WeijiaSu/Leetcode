class Solution(object):
    def isSubsequence(self, s, t):
        i=0
        j=0
        while i < len(s) and j < len(t):
            s_c=s[i]
            while j < len(t):
                t_c=t[j]
                if t_c==s_c:
                    i+=1
                    j+=1
                    break
                else:
                    j+=1       
        return i==len(s)
