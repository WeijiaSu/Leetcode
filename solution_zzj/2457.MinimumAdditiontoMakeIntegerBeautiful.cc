class Solution {
public:
    
    static int sumDigit(long long n) {
        int ans = 0, i = 0;
        while (n > 0) {
            ans += (n % 10);
            n /= 10;
        }
        return ans;
    }
    
    long long makeIntegerBeautiful(long long n, int target) {
        long long temp = n, i = 1;
        while (sumDigit(n) > target) {
            n = n - (n % (long long)pow(10, i)) + (long long)pow(10, i);
            i ++;
        }
        return n - temp;
    }
};
