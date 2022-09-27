class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int temp = 0, int ans = 1;
        int mx = *max_element(nums.begin(), nums.end());
        for (int i=0;i<nums.size();i++) {
             if (nums[i] == mx) {
                 temp++;
                 ans = max(ans, temp);
             } else {
                 temp = 0;
             }
        }
        return ans;
    }
};
