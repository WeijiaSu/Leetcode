class Solution {
public:
    
    static int rev(int num) {
        string s1 = to_string(num);
        string s2 = s1;
        reverse(s2.begin(),s2.end());
        return stoi(s2);
    }
    
    bool sumOfNumberAndReverse(int num) {
        for (int i = num; i >= num/2; i--) {
            if (i + rev(i) == num)
                return true;
        }
        return false;
    }
};
