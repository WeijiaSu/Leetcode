class Solution(object):
    def maxProfit(self, prices):
        i=0
        c_min=prices[0]
        max_pro=0
        while i < len(prices):
            c_min=min(c_min,prices[i])
            curren_pro=prices[i]-c_min
            max_pro=max(max_pro,curren_pro)
            i+=1
        return max_pro

