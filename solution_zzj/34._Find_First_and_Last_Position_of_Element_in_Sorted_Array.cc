class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> ans = {-1, -1};
        int l = 0, r = nums.size() - 1;
        while (l <= r) {
            int mid = (l + r) / 2;
            if (nums[mid] == target) {
                ans[0] = mid, ans[1] = mid;
                int i = mid, j = mid;
                while (i-1>=0 && nums[i-1]==target) {
                    ans[0] = i-1;
                    i--;
                }
                while (j+1<nums.size() && nums[j+1]==target) {
                    ans[1] = j+1;
                    j++;
                }
                return ans;
            } else if (nums[mid] < target) {
                l = mid + 1;
            } else {
                r = mid - 1;
            }
        }
        return ans;
    }
};
