# The isBadVersion API is already defined for you.
# @param version, an integer
# @return a bool
# def isBadVersion(version):

class Solution(object):
    def firstBadVersion(self, n):
        s1=0
        s2=n
        while s1<s2:
            mid=(s1+s2)/2
            b=isBadVersion(mid)
            if b==False:
                s1=mid+1
            else:
                s2=mid
        return s1
        
