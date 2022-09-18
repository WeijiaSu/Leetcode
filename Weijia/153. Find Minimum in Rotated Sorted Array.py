class Solution(object):
    def findMin(self, nums):
        s1=0
        s2=len(nums)
        while s1<=s2:
            mid=int((s1+s2)/2)
            if nums[mid-1]<nums[mid]:
                if nums[mid]>nums[-1]:
                    s1=mid+1
                else:
                    s2=mid-1
            else:
                return nums[mid]
        return nums[s1]
