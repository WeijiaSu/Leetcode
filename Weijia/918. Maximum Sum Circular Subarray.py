class Solution:
    def maxSubarraySumCircular(self, nums: List[int]) -> int:
        ### All -:
        if max(nums)<=0:
            return max(nums)
       #case1
        dp=[0]*len(nums)
        for i in range(len(nums)):
            if i==0:
                dp[i]=nums[i]
            dp[i]=max(dp[i-1]+nums[i],nums[i])
        case1=max(dp)
        #case2:
        dp2=[0]*len(nums)
        for i in range(len(nums)):
            if i==0:
                dp2[i]=nums[i]
            dp2[i]=min(dp2[i-1]+nums[i],nums[i])
        case2=sum(nums)-min(dp2)
        return max(case1,case2)
