class Solution {
public:
    int n;
    int dp[10001];
    int go(int i, vector<int>& nums) {
        if (i >= n - 1)
            return 0;
        if (dp[i] != -1)
            return dp[i];
        int res = 10001;
        for (int j = 1; j <= nums[i]; j++) {
            res = min(res, 1 + go(i + j, nums));
        }
        return dp[i] = res;
    }
    int jump(vector<int>& nums) {
        this->n = nums.size();
        memset(dp, -1, sizeof(dp));
        return go(0, nums);
    }
};