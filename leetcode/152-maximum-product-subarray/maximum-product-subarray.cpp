class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n = nums.size();
        int pmax = nums[0];
        int pmin = nums[0];
        int ans = nums[0];
        int cmax, cmin;
        for (int i = 1; i < n; i++) {
            // based on kadane algorithm..
            cmax = max({nums[i], pmax * nums[i], pmin * nums[i]});
            cmin = min({nums[i], pmax * nums[i], pmin * nums[i]});
            pmax = cmax;
            pmin = cmin;
            ans = max(ans, cmax);
        }
        return ans;
    }
};