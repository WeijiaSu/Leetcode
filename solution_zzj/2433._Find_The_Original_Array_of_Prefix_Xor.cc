class Solution {
public:
    
    static int find(int num1, int target) {
        std::string binary1 = std::bitset<32>(num1).to_string();
        std::string target1 = std::bitset<32>(target).to_string();
        string ans = "";
        for (int i = 0;i<binary1.size();i++) {
            if (target1[i] == '1') {
                ans += binary1[i] == '1' ? '0' : '1';
            } else {
                ans += binary1[i] == '1' ? '1' : '0';
            }
        }
        return stol(ans, 0, 2);
    }
    
    vector<int> findArray(vector<int>& pref) {
        int n = pref.size();
        vector<int> ans(n);
        ans[0] = pref[0];
        int cur = ans[0];
        for (int i = 1;i<n;i++) {
            ans[i] = find(cur, pref[i]);
            cur ^= ans[i];
        }
        return ans;
    }
};
