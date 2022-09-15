class Solution {
public:
    int mySqrt(int x) {
        if (x == 0 || x == 1)
            return x;
        long long l = 0, r = x / 2;
        while (l <= r) {
            long long m = (l + r) / 2;
            if (m * m == x) {
                return m;
            } else if (m * m > x) {
                r = m - 1;
            } else {
                l = m + 1;
            }
        }
        return r;
    }
};
