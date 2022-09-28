class Solution(object):
    def sortPeople(self, names, heights):
        d=dict(zip(heights,names))
        d=sorted(d.items(), key=lambda item: item[0],reverse=True)
        l=[k[1] for k in d]
        return l
