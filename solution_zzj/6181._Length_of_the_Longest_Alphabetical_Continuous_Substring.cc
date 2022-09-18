class Solution {
public:
    int longestContinuousSubstring(string s) {
        map<char, int> m;
        string alp = "abcdefghijklmnopqrstuvwxyz";
        int i = 0, ans = 0, cur = 1;
        for (auto c: alp)
            m[c] = i++;
        for (int i = 0; i < s.size() - 1; i++) {
            if (m[s[i+1]] - m[s[i]] == 1) {
                cur++;
            } else {
                ans = max(ans, cur);
                cur = 1;
            }
        }
        return max(ans,cur);
    }
};
