class Solution:
    def canJump(self, nums: List[int]) -> bool:
        if len(nums)<=1:
            return True
        L=[True]+[False]*(len(nums)-1)
        for i in range(0,len(nums)-1):
            if L[i]==True:
                n=nums[i]
                if n>0 and i+n+1>=len(nums):
                    return True
                elif n>0 and i+n+1<len(nums):
                    L[i+1:i+n+1]=[True]*n
            else:
                return False
        return L[-1]
