class Solution(object):
    def searchRange(self, nums, target):
        if len(nums)==0:
            return [-1,-1]
        elif len(nums)==1 and nums[0]==target:
            return [0,0]
        elif len(nums)==1 and nums[0]!=target:
            return [-1,-1]
        else:
            s1=0
            s2=len(nums)
            while s1<s2:
                mid=(s1+s2)//2
                if nums[mid]<target:
                    s1=mid+1
                elif nums[mid]>target:
                    s2=mid-1
                else:
                    if mid+1<len(nums):
                        if nums[mid]==nums[mid+1]:
                            return [mid,mid+1]
                    if mid-1>=0:
                        if nums[mid]==nums[mid-1]:
                            return [mid-1,mid]
                    else:
                        return [mid,mid]
            return [-1,-1]
        
