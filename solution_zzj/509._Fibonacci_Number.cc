class Solution {
public:
    int fib(int n) {
//         vector<int> list = {0, 1};
//         if (n == 0 || n == 1) return n;
//         for (int i = 2;i<=n;i++) {
//             list.push_back(list[i-2] + list[i-1]);
//         }
        
//         return list[n];
        unordered_map<int, int> mp;
        mp[0] = 0;
        mp[1] = 1;
        for (int i = 2;i<=n;i++) {
            if (mp.find(i)==mp.end()) {
                mp[i] = mp[i-2] + mp[i-1];
            }
        }
        return mp[n];
    }
};
