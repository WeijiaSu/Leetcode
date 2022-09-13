class Solution {
public:
    bool isSubsequence(string s, string t) {
        int indS = 0, indT = 0;
        while (indS<s.size() && indT<t.size()) {
            if (s[indS]==t[indT]) {
                indS++;
            }
            indT++;
        }
        return indS==s.size()? true:false;
    }
};
