class Solution(object):
    def eraseOverlapIntervals(self, intervals):
        current_end=float('-inf')
        res=0
        for start, end in sorted(intervals,key=lambda x:x[1]):
            if start>=current_end:
                current_end=end
            else:
                res+=1
        return res
