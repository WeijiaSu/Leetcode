import math

class Solution:
    def judgeSquareSum(self, c: int) -> bool:
        n=math.sqrt(c)
        if n.is_integer()==True:
            return True
        else:
            i=0
            j=int(n)
            while i<=j:
                m=i*i+j*j
                if m==c:
                    return True
                elif m>c:
                    j-=1
                elif m<c:
                    i+=1
            return False
