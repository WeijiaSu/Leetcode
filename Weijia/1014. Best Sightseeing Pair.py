class Solution:
    def maxScoreSightseeingPair(self, values: List[int]) -> int:
        @cache
        def dp(j):
            if j<0 : return float("-inf"),float("-inf")
            s,v =dp(j-1)
            return max(s,v+values[j]-j),max(v,values[j]+j)
        return dp(len(values)-1)[0]
