class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        int a = 0;
        for (auto& it : nums)
            a += it;
        int b = 0;
        while (n > 0) {
            b += n;
            n--;
        }
        return b - a;
    }
};