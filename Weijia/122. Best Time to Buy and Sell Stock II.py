class Solution(object):
    def maxProfit(self, prices):
        return sum([prices[i+1] -prices[i] for i in range(0,len(prices)-1) if prices[i+1] -prices[i]>0])
