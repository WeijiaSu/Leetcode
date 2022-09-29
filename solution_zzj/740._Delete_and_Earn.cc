class Solution {
public:
    int deleteAndEarn(vector<int>& nums) {
        int mx = *max_element(nums.begin(),nums.end());
        vector<int> vec(mx, 0);
        for (auto num: nums) {
            vec[num-1] += num;
        }
        if (vec.size()==1) return vec[0];
        vector<int> ans = {vec[0], max(vec[0], vec[1])};
        for (int i=2;i<vec.size();i++) {
            ans.push_back(max(ans[i-2]+vec[i], ans[i-1]));
        }
        return ans[vec.size()-1];
    }
};
