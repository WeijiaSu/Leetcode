class Solution:


    def jump(self, nums: List[int]) -> int:
        res=0
        l=r=0
        while r<len(nums)-1:
            far=0
            for i in range(l,r+1):
                far=max(far,i+nums[i])
            l+=1
            r=far
            res+=1
        return res

##############  DP TLE #################
    # def jump(self, nums: List[int]) -> int:
    #     if len(nums)==1:
    #         return 0
    #     mem={}
    #     def dp(i):
    #         if i>=len(nums)-1:
    #             return 0
    #         if i in mem:
    #             return mem[i]
    #         ans=float("inf")
    #         for m in range(i,i+nums[i]):
    #             ans=min(ans,dp(m+1)+1)
    #         mem[i]=ans
    #         return ans
    #     return dp(0)
