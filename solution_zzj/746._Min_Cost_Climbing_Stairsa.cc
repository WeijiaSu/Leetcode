class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
        vector<int> ans = {cost[0], cost[1]};
        for (int i=2;i<cost.size();i++) {
            ans.push_back(min(ans[i-1], ans[i-2])+cost[i]);
        }
        return min(ans[cost.size()-2], ans[cost.size()-1]);
    }
};
