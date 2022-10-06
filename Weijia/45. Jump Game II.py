class Solution:
    def jump(self, nums: List[int]) -> int:
        if len(nums)==1:
            return 0
        def dp(i):
            mem={}
            if i>=len(nums)-1:
                return 0
            if i in mem:
                return mem[i]
            ans=float("inf")
            for m in range(i,i+nums[i]):
                ans=min(ans,dp(m+1)+1)
            mem[i]=ans
            return ans
        return dp(0)
