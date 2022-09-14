class Solution(object):
    def maxSubArray(self, nums):
        if len(nums)==1:
            return nums[0]
        sub = sum_ = nums[0]        
        for i in range(1, len(nums)):
            sub = max(nums[i], nums[i] + sub)
            sum_ = max(sub, sum_)
        return sum_
