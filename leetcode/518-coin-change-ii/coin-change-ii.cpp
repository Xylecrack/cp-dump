class Solution {
public:
    int n;
    int dp[300][5001];
    int go(int i, int sum, int amount, vector<int>& coins) {
        if (i >= n || sum > amount)
            return 0;
        if (sum == amount)
            return 1;
        if (dp[i][sum] != -1)
            return dp[i][sum];
        int take = 0;
        if (coins[i] <= amount - sum)
            take = go(i, sum + coins[i], amount, coins);
        return dp[i][sum] = take + go(i + 1, sum, amount, coins);
    }
    int change(int amount, vector<int>& coins) {
        this->n = coins.size();
        memset(dp, -1, sizeof(dp));
        return go(0, 0, amount, coins);
    }
};