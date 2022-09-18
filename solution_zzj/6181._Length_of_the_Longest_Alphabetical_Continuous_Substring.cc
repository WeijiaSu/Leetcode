class Solution {
public:
    int longestContinuousSubstring(string s) {
        int i = 0, ans = 0, cur = 1;
        for (int i = 0; i < s.size() - 1; i++) {
            if (int(s[i+1]) - int(s[i]) == 1) {
                cur++;
            } else {
                ans = max(ans, cur);
                cur = 1;
            }
        }
        return max(ans,cur);
    }
};
