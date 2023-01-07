class Solution:
    def findMaxK(self, nums: List[int]) -> int:
        l=[k for k in nums if k*(-1) in nums]
        if len(l)==0:
            return -1
        else:
            return max(l)
