class Solution {
public:
    int dp[31];
    int go(int n) {
        if (n == 0)
            return 0;
        if (n == 1)
            return 1;
        if (dp[n] != -1)
            return dp[n];
        int ans = 0;
        ans = go(n - 1) + go(n - 2);
        return dp[n] = ans;
    }
    int fib(int n) {
        for (int i = 0; i <= n; i++) {
            dp[i] = -1;
        }
        return go(n);
    }
};