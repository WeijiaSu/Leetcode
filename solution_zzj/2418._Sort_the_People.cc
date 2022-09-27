class Solution {
public:
    
    static bool cmp(pair<int, string>& a, pair<int, string>& b)
    {
        return a.first > b.first;
    }
    
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
        vector<pair<int, string>> vec;
        vector<string> ans;
        for (int i=0;i<names.size();i++) {
            vec.push_back({heights[i], names[i]});
        }
        sort(vec.begin(), vec.end(), cmp);
        for (auto& item: vec)
            ans.push_back(item.second);
        return ans;
    }
};
