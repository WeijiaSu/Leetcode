class Solution(object):
    def checkPossibility(self, nums):
        nums1,nums2=[],[]
        if len(nums)<=2:
            return True
        else:
            i=0
            while i<len(nums)-2:
                if nums[i]>nums[i+1]:
                    nums1=[nums[i]]+nums[i+2:]
                    nums2=nums[:i]+nums[i+1:]
                    break
                else:
                    i+=1
            R1=all(nums1[n+1]-nums1[n]>=0 for n in range (0,len(nums1)-1)) 
            R2=all(nums2[n+1]-nums2[n]>=0 for n in range (0,len(nums2)-1)) 
            return R1 or R2
    
