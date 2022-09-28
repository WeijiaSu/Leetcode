class Solution {
public:
    int rob(vector<int>& nums) {
        if (nums.size()==1) return nums[0];
        vector<int> ans = {nums[0], max(nums[0], nums[1])};
        for (int i=2;i<nums.size();i++) {
            ans.push_back(max(ans[i-2]+nums[i], ans[i-1]));
        }
        return ans[nums.size()-1];
    }
};
