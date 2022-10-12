class Solution {
public:
    
    static int numOfOnes(string num) {
        int ans = 0;
        for (auto &c: num) {
            if (c=='1')
                ans++;
        }
        return ans;
    }
    
    int minimizeXor(int num1, int num2) {
        int ans = 0;
        std::string binary1 = std::bitset<32>(num1).to_string();
        std::string binary2 = std::bitset<32>(num2).to_string();
        int diff = numOfOnes(binary2) - numOfOnes(binary1);
        if (diff > 0) { // start from right and replace ${diff} 0s to 1s
            while (diff > 0) {
                for (int i = binary1.size()-1; i>=0; i--) {
                    if (diff == 0) break;
                    if (binary1[i] == '0') {
                        binary1[i] = '1';
                        diff--;
                    }
                }
            }
        } else if (diff < 0) { // start from right and replace ${diff} 1s to 0s
            while (diff < 0) {
                for (int i = binary1.size()-1; i>=0; i--) {
                    if (diff == 0) break;
                    if (binary1[i] == '1') {
                        binary1[i] = '0';
                        diff++;
                    } 
                    
                }
            }
        } else {
            return num1;
        }
        ans = stol(binary1, 0, 2);
        return ans;
    }
};
