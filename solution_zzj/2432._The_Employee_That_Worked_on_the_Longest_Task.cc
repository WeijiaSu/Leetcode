class Solution {
public:
    int hardestWorker(int n, vector<vector<int>>& logs) {
        int ans = logs[0][0], curMax = logs[0][1];
        for (int i = 1; i < logs.size(); i++) {
            int cur = logs[i][1] - logs[i-1][1];
            if (cur > curMax) {
                ans = logs[i][0];
                curMax = cur;
            } else if (cur == curMax) {
                ans = min(ans, logs[i][0]);
            }
        }
        return ans;
    }
};
