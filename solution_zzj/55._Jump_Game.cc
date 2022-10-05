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

class Solution {
public:
    bool canJump(vector<int>& nums) {
        int ans=0;
        
        for(int i=0;i<nums.size();i++){
            if(i>ans) return false; // if ith stair is greater than ans(the maximum stair), return false.
            ans=max(ans,i+nums[i]); // with current steps in nums[i], what is the maximum stair one can reach.
        }
        return true;
    }
};
