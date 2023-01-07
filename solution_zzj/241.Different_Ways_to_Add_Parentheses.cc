class Solution {
public:

    unordered_map<string, vector<int>> memo;

    static int calc(int num1, int num2, char opt) {
        if (opt == '+') return num1 + num2;
        if (opt == '-') return num1 - num2;
        if (opt == '*') return num1 * num2;
        return -1;
    }

    vector<int> diffWaysToCompute(string expression) {
        /*
        1. Loop through the string, if it's a operator, recursively handle the left and right side.
        2. Append the results from left and right to a vector.
        3. Calculate the result using given operator.
        */
        int n = expression.size();
        vector<int> ans;
        for (size_t i = 0; i < n; i++) {
            if (expression[i] == '+' || expression[i] == '-' || expression[i] == '*') {
                string left = expression.substr(0, i);
                string right = expression.substr(i + 1, n - i - 1);
                vector<int> left_res, right_res;
                if (memo.find(left) == memo.end()){
                    left_res = diffWaysToCompute(left);
                    memo[left] = left_res;
                } else {
                    left_res = memo[left];
                }
                if (memo.find(right) == memo.end()){
                    right_res = diffWaysToCompute(right);
                    memo[right] = right_res;
                } else {
                    right_res = memo[right];
                }
                if (left_res.empty()) left_res.push_back(stoi(left));
                if (right_res.empty()) right_res.push_back(stoi(right));
                for (auto& el_left: left_res) {
                    for (auto& el_right: right_res) {
                        ans.push_back(calc(el_left, el_right, expression[i]));
                    }
                }
            }
        }
        if (ans.empty()) ans.push_back(stoi(expression));
        return ans;
    }
};
