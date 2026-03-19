class Solution {
public:
    int n;
    int dp[12][10001];
    int go(int i, int sum, int amount, vector<int>& coins) {
        if (i >= n || sum > amount)
            return 10001;
        if (sum == amount)
            return 0;
        if (dp[i][sum] != -1)
            return dp[i][sum];
        int take = 10001;
        if (coins[i] <= amount - sum)
            take = 1 + go(i, sum + coins[i], amount, coins);
        return dp[i][sum] = min(take, go(i + 1, sum, amount, coins));
    }
    int coinChange(vector<int>& coins, int amount) {
        this->n = coins.size();
        memset(dp, -1, sizeof(dp));
        int res = go(0, 0, amount, coins);
        return (res >= 10001) ? -1 : res;
    }
};