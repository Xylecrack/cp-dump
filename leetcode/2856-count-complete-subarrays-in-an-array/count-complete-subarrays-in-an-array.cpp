class Solution {
public:
    int countCompleteSubarrays(vector<int>& nums) {
        int x = nums.size();
        int res = 0;
        unordered_map<int, int> unique;
        for (int i : nums) {
            unique[i]++;
        }
        if (unique.size() == 1) {
            return (x * (x + 1)) / 2;
        } else {
            for (int i = 0; i < x; i++) {
                unordered_map<int, int> bruteForce;
                for (int k = i; k < x; k++) {
                    bruteForce[nums[k]]++;
                    if (bruteForce.size() == unique.size()) {
                        res++;
                    }
                }
            }
        }
        return res;
    }
};
