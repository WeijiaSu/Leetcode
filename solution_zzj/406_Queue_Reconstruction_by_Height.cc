class Solution {
public:
    static bool cmp(vector<int>& a, vector<int>& b) {
        if (a[0] == b[0])
            return a[1] > b[1];
        return a[0] < b[0];
    }
    
    vector<vector<int>> reconstructQueue(vector<vector<int>>& people) {
        sort(people.begin(), people.end(), cmp);
        vector<vector<int>> ans;
        for (auto p: people) {
            ans.push_back({-1,-1});
        }
        
        for (auto person: people) {
            int count = 0;
            for (int i=0;i<people.size();++i) {
                if (ans[i][0] == -1) {
                    count++;
                    if (count == person[1] + 1) {
                        ans[i] = person;
                        break;
                    }
                }
            }
        }
        return ans;
    }
};
