class Solution {
public:
    int rob(vector<int>& nums) {
        if (nums.size()==1)
            return nums[0];
        auto dp = [] (vector<int>& arr) {
            vector<int> ans = {arr[0], max(arr[0], arr[1])};
            for (int i=2;i<arr.size();i++) {
                ans.push_back(max(ans[i-2]+arr[i], ans[i-1]));
            }
            return ans[arr.size()-1];
        };
        int temp = nums[nums.size()-1];
        nums.pop_back();
        int a = dp(nums);
        cout<<a<<endl;
        nums.push_back(temp);
        nums.erase(nums.begin());
        return max(a, dp(nums));
    }
};
