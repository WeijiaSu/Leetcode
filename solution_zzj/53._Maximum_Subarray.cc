class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int ans = nums[0], cur = nums[0];
        int i = 1;
        while (i < nums.size()) {
            cur = max(nums[i], cur + nums[i]);
            ans = max(ans, cur);
            i++;
        }
        return ans;
    }
};

class Solution {
public:
    // // the maximum subarray ending in ith index including i.
    // static int dp(int i, vector<int>& nums, unordered_map<int, int> mp) {
    //     int n = nums.size(), ans = nums[i];
    //     if (i == 0) return nums[i];
    //     if (mp.find(i-1) != mp.end()) {
    //         ans = max(ans, nums[i] + mp[i-1]);
    //     } else {
    //         ans = max(ans, nums[i] + dp(i-1, nums, mp));
    //         mp[i-1] = ans;
    //     }
    //     return ans;
    // }
    
    int maxSubArray(vector<int>& nums) {
//         int ans = nums[0];
//         unordered_map<int, int> mp;
//         for (int i = nums.size()-1; i >= 0; i--) {
//             ans = max(ans, dp(i, nums, mp));
//         }
            
//         return ans;
        int n = nums.size(), ans = nums[0];
        vector<int> dp(n);
        dp[0] = nums[0];
        for (int i = 1; i < n; i++) {
            dp[i] = max(dp[i - 1], 0) + nums[i];
        }
        ans = max(ans, *max_element(dp.begin(), dp.end()));
        return ans;
    }
};
