class Solution(object):
    
    def helper(self, nums):
            if len(nums) ==1:
                return nums[0]
            elif len(nums) ==2:
                return max(nums[0],nums[1])
            else:
                m=[nums[0],max(nums[0],nums[1])]
                for i in range(2,len(nums)):
                    m=[m[-1],max(m[0]+nums[i],m[1])]
                return m[-1]
    def rob(self, num):
        if len(num)<=3:
            return max(num)
        t1=self.helper(num[1:])
        t2=self.helper(num[:-1])
        return max(t1,t2)
