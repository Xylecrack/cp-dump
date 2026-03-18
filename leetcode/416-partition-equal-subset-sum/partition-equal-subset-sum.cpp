class Solution {
public:
    int n;
    int dp[201][20001];
    bool go(int i, int trgt, vector<int>& nums) {
        if (trgt == 0)
            return 1;
        if (trgt < 0 || i >= n)
            return 0;
        if (dp[i][trgt] != -1)
            return dp[i][trgt];

        return dp[i][trgt] =
                   go(i + 1, trgt, nums) || go(i + 1, trgt - nums[i], nums);
    }
    bool canPartition(vector<int>& nums) {
        memset(dp, -1, sizeof(dp));
        this->n = nums.size();
        int totalSum = 0;
        for (auto& it : nums) {
            totalSum += it;
        }
        if (totalSum % 2 != 0)
            return false;
        return go(0, totalSum / 2, nums);
    }
};