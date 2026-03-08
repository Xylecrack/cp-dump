class Solution {
public:
    string findDifferentBinaryString(vector<string>& nums) {
        int n = nums.size();
        int i = n;
        string res;
        for (auto& it : nums) {
            res += (it[n - i] == '0') ? "1" : "0";
            i--;
        }
        return res;
    }
};