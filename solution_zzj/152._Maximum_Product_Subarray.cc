class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int ans = 0, n = nums.size();
        vector<int> dpMax(n, 0), dpMin(n, 0);
        dpMax[0] = nums[0];
        dpMin[0] = nums[0];
        for (int i=1; i<n; i++) {
            if (nums[i]>0) {
                dpMax[i] = max(dpMax[i-1], 1) * nums[i];
                dpMin[i] = min(dpMin[i-1], 1) * nums[i];
            } else if (nums[i]<0) {
                dpMax[i] = min(dpMin[i-1], 1) * nums[i];
                dpMin[i] = max(dpMax[i-1], 1) * nums[i];
            }
        }
        return *max_element(dpMax.begin(), dpMax.end());
    }
};
