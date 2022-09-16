class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        int l = 0, r = letters.size() - 1;
        while (l < r) {
            int mid = (l + r) / 2;
            if (letters[mid] > target)
                r = mid;
            else
                l = mid + 1;
        }
        if (letters[l] > target)
            return letters[l];
        return letters[0];
    }
};
