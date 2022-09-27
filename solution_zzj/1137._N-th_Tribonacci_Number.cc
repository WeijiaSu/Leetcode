class Solution {
public:
    int tribonacci(int n) {
        unordered_map<int, int> memo;
        memo[0] = 0;
        memo[1] = 1;
        memo[2] = 1;
        for (int i=3; i<=n; i++) {
            memo[i] = memo[i-3] + memo[i-2] + memo[i-1];
        }
        return memo[n];
    }
};
