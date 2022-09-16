// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        uint l = 1, r = n - 1;
        while (l <= r) {
            uint mid = (l + r) / 2;
            if (isBadVersion(mid))
                r = mid - 1;
            else
                l = mid + 1;
        }
        return l;
    }
};
