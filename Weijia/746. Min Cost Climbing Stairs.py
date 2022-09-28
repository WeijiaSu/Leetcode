class Solution:
    def minCostClimbingStairs(self, cost: List[int]) -> int:
        def min_for_i(i):
            if i <=1:
                return 0
            else:
                # climb from step i-1 or climb from step i-2
                return min(min_for_i(i-1)+cost[i-1],
                          min_for_i(i-2)+cost[i-2])
        return min_for_i(len(cost))
