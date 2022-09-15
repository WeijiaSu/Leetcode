class Solution(object):
    def mySqrt(self, x):
        c1=1
        c2=x
        while c1<=c2:
            mid=int((c2+c1)/2)
            s=int(x/mid)
            if s>mid:
                c1=mid+1
            elif s<mid:
                c2=mid-1
            else:
                return mid
        return c2
