class Solution {
public:
    int n;
    long long dp[100001][2];
    long long go(int i, bool even, vector<int>& nums) {
        if (i >= n)
            return 0;
        if (dp[i][even] != -1) {
            return dp[i][even];
        }
        long long ans = go(i + 1, even, nums);
        if (even)
            ans = max(ans, nums[i] + go(i + 1, 0, nums));
        else
            ans = max(ans, -nums[i] + go(i + 1, 1, nums));
        return dp[i][even] = ans;
    }
    long long maxAlternatingSum(vector<int>& nums) {
        this->n = nums.size();
        for (int i = 0; i <= n; i++) {
            for (int j = 0; j <= 1; j++) {
                dp[i][j] = -1;
            }
        }
        return go(0, 1, nums);
    }
};