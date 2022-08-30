class Solution(object):
    def reconstructQueue(self, people):
        people=sorted(people,key=lambda x: (-x[0],x[1]))
        res=[]
        for i in people:
            res.insert(i[1],i)
        return res
