class Solution {
public:
    
    static bool dp(int i, vector<int>& nums) {
        int n = nums.size();
        if (i>=n-1 || i+nums[i]>=n-1) return true;
        for (int j=1;j<=nums[i];++j) {
            if (dp(i+j, nums)) return true;
        }
        return false;
    }
    
    bool canJump(vector<int>& nums) {
        return dp(0, nums);
    }
};
