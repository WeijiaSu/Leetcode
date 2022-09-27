class Solution(object):
    def climbStairs(self, n):
        if n<=2:
            return n
        m=(1,2)
        for i in range(3,n+1):
            m=(m[-1],m[-1]+m[-2])
        return m[-1]

