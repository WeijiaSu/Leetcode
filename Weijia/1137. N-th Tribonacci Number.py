class Solution(object):
    def tribonacci(self, n):
        if n<2:
            return n
        elif n==2:
            return 1
        m=[0,1,1]
        for i in range(3,n+1):
            m=[m[-2],m[-1],m[-3]+m[-2]+m[-1]]
        return m[-1]
