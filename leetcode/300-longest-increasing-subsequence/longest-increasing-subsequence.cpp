class Solution {
public:
    int n;
    int dp[2501][2501];
    int go(int i, int j, vector<int>& nums) {
        if (i >= n)
            return 0;
        if (dp[i][j + 1] != -1)
            return dp[i][j + 1];
        int take = 0;
        if (j == -1 || nums[i] > nums[j])
            take = 1 + go(i + 1, i, nums);
        return dp[i][j + 1] = max(go(i + 1, j, nums), take);
    }
    int lengthOfLIS(vector<int>& nums) {
        memset(dp, -1, sizeof(dp));
        n = nums.size();
        return go(0, -1, nums);
    }
};