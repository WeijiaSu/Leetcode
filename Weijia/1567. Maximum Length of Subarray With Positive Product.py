class Solution:
    def maxProduct(self, nums: List[int]) -> int:
        if len(nums)==1:
            return nums[0]
        current_min,current_max=nums[0],nums[0]
        min_list,max_list=[nums[0]],[nums[0]]
        for i in range(1,len(nums)):
            temp_min=current_min
            temp_max=current_max
            current_min=min(nums[i],nums[i]*temp_min,nums[i]*temp_max)
            current_max=max(nums[i],nums[i]*temp_min,nums[i]*temp_max)
            min_list.append(current_min)
            max_list.append(current_max)

        return max(max(min_list),max(max_list))
