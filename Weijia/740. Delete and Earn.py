class Solution:
    def deleteAndEarn(self, nums: List[int]) -> int:
        l=[0]*(max(nums))
        
        for i in range(1,max(nums)+1):
            if i in nums:
                l[i-1]=i*nums.count(i)
        print(l)
        if len(l)<=2:
            return max(l)
        else:
            m=[l[0],max(l[0],l[1])]
            for n in range(2,len(l)):
                m=[m[-1],max(m[-1],m[-2]+l[n])]
                print(m)
            return m[-1]
