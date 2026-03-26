class Solution {
public:
    int dp[38];
    int go(int n) {

        if (n == 0)
            return 0;
        if (n == 1 || n == 2)
            return 1;
        if (dp[n] != -1)
            return dp[n];
        return dp[n] = go(n - 3) + go(n - 2) + go(n - 1);
    }
    int tribonacci(int n) {
        memset(dp, -1, sizeof(dp));
        return go(n);
    }
};