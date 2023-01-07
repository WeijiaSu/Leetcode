class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int ans = 0;
        for (int i=0;i<prices.size()-1;i++)
            if (prices[i+1]>prices[i])
                ans += (prices[i+1] - prices[i]);
        return ans;
    }
};

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int ans = 0, cur = prices[0];
        for (int i = 1; i < prices.size(); i++) {
            if (prices[i]>cur) {
                ans+=prices[i]-cur;
            }
            cur = prices[i];
        }
        return ans;
    }
};
