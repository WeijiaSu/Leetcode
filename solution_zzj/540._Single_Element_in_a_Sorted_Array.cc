class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        if (nums.size()==1) 
            return nums[0];
        int l = 1, r = nums.size() - 1;
        while (l <= r) {
            int mid = (l + r) / 2;
            if (nums[mid - 1] == nums[mid]) {
                if (mid % 2 == 0) {
                    r = mid - 1;
                } else {
                    l = mid + 1;
                }
            } else {
                if (mid % 2 == 0) {
                    l = mid + 1;
                } else {
                    r = mid - 1;
                }
            }
        }
        return nums[r];
    }
};
