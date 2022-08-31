class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int ans = 0, min_buy = prices[0];
        for (int i=1;i<prices.size();++i) {
            ans = max(ans, prices[i]-min_buy);
            min_buy = min(min_buy, prices[i]);
        }
        return ans;
    }

	int maxProfit(vector<int>& prices) {
        int ans = 0, min_left = 0;
        for (int i=0;i<prices.size();++i) {
            if (prices[i]<prices[min_left]) {
                min_left = i;
            }
            ans = max(ans, prices[i]-prices[min_left]);
        }
        return ans;
    }
};
