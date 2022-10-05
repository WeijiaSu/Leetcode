class Solution {
public:
    int jump(vector<int>& nums) {
        int n=nums.size();
        vector<int>dp(n,0);
        for(int i=n-2;i>=0;i--) {
            if(nums[i]>=n-i-1) // at i'th step, one can reach the last step within nums[i] steps.
                dp[i]=1; // assign ONE step
            else {
                int m=INT_MAX-1;
                for(int j=1;j<=nums[i];j++) // check all the possibilities within nums[i] steps by checking dp[i+j]
                    m=min(m,1+dp[i+j]); // with 1 extra step to reach (i+j)th step, check the minimum steps
                dp[i]=m;
            }
        }
        return  dp[0];
    }
};
