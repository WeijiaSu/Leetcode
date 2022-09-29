class Solution:
    def rob(self, nums: List[int]) -> int:
        @cache
        #max money for house i
        def r(i):
            if i ==0:
                return nums[0]
            elif i ==1:
                return max(nums[0],nums[1])
            else:
                return max(r(i-1),r(i-2)+nums[i])
        return r(len(nums)-1)
