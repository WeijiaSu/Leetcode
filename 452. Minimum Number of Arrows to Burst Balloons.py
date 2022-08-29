class Solution(object):
    def findMinArrowShots(self, points):
        points=sorted(points,key=lambda x: x[1])
        End=float('-inf')
        res=0
        for i in points:
            if i[0]>End:
                End=i[1]
            else:
                res+=1
        return len(points)-res
