class Solution(object):
    def longestContinuousSubstring(self, s):
        if len(s)<2:
            return len(s)
        else:
            i,j=0,1
            n=1
            l=[1]
            while i <len(s) and j< len(s):
                if s[i]+s[j] in "abcdefghijklmnopqrstuvwxyz":
                    n+=1
                else:
                    l.append(n)
                    n=1
                i+=1
                j+=1
                l.append(n)
            return max(l)
            
                    
