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
