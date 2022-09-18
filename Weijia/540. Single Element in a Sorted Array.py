class Solution(object):
    def singleNonDuplicate(self, nums):
        s1,s2=0,len(nums)-1
        while s1<s2:
            m=(s1+s2)/2
            if m%2!=0:
                m=m-1
            if nums[m]==nums[m+1]:
                s1=m+2
            else:
                s2=m
        return nums[s1]
