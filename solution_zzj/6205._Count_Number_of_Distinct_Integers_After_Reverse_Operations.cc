class Solution {
public:
    
    static int rev(int num) {
        string s1 = to_string(num);
        string s2 = s1;
        reverse(s2.begin(),s2.end());
        return stoi(s2);
    }
    
    int countDistinctIntegers(vector<int>& nums) {
        unordered_set<int> s(nums.begin(), nums.end());
        for (int num: nums) {
            s.insert(num);
            s.insert(rev(num));
        }
        return s.size();
    }
};
