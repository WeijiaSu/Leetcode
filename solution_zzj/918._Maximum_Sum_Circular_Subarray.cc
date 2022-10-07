class Solution {
public:
    
    static int maxSub(vector<int>& nums) {
        int n = nums.size();
        vector<int> dp(n);
        dp[0] = nums[0];
        for (int i = 1; i < n; i++) {
            dp[i] = max(0, dp[i-1]) + nums[i];
            cout << dp[i] << endl;
        }
        return *max_element(dp.begin(), dp.end());
    }
    
    /* if the case is that the answer starts from right half and ends with left half, then ->
    /  maxSubarray(right + left) = maxSubarray(sum(array) - mid) // mid is the rest of subarray apart from left+right, e.g. [1,2,-2,-1,2] ->       /  [-2, -1]
    /  = sum(array) - minSubarray(mid).
    /  Thus, find the minimum subarray and subtracted it from the sum of the original arary will be it. * a corner case where all elements
    /  are negative, in this case we need to return the sum of entire array instead of 0.
    */
    static int minSub(vector<int>& nums) {
        int n = nums.size();
        int sum = accumulate(nums.begin(), nums.end(), 0);
        vector<int> dp(n);
        dp[0] = nums[0];
        for (int i = 1; i < n; i++) {
            dp[i] = min(0, dp[i-1]) + nums[i];
        }
        // corner case
        return sum - *min_element(dp.begin(), dp.end()) == 0 ? sum : sum - *min_element(dp.begin(), dp.end());
    }
    
    int maxSubarraySumCircular(vector<int>& nums) {
        if (nums.size() == 1) return nums[0];
        return max(maxSub(nums), minSub(nums));
    }
};
