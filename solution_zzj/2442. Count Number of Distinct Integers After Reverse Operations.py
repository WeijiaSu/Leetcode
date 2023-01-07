class Solution:
    def countDistinctIntegers(self, nums: List[int]) -> int:
        l=list(set(nums))
        res=l
        for i in range(0,len(l)):
            res.append(int(str(l[i])[::-1]))
        return len(set(res))
