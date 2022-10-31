class Solution {
public:
    int averageValue(vector<int>& nums) {
        int ans = 0, cnt = 0;
        for (auto num: nums) {
            if (num % 6 == 0) {
                ans += num;
                cnt ++;
            } 
        }
        return cnt == 0 ? 0 : ans/cnt;
    }
};
