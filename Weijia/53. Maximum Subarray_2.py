class Solution:
    def maxSubArray(self, nums: List[int]) -> int:
        max_sum=[0]*len(nums)
        max_sum[0]=nums[0]
        for i in range(1,len(nums)):
            max_sum[i]=max(max_sum[i-1]+nums[i],nums[i])
        return max(max_sum)

############## Recursion (Time limit exceeded) ##############
#        max_sum=[0]*len(nums)
#        def dp(i):
#            if i==0:
#                return nums[i]
#            return max(dp(i-1)+nums[i],nums[i])
#        for i in range(len(nums)):
#           max_sum[i]=dp(i)
#       return max(max_sum)
