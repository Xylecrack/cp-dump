class Solution {
public:
    int m, n;
    int dp[101][101];
    int go(int i, int j) {
        if (i == m - 1 && j == n - 1)
            return 1;
        if (i >= m || j >= n)
            return 0;
        if (dp[i][j] != -1)
            return dp[i][j];
        return dp[i][j] = go(i + 1, j) + go(i, j + 1);
    }
    int uniquePaths(int m, int n) {
        this->m = m;
        this->n = n;
        memset(dp, -1, sizeof(dp));
        return go(0, 0);
    }
};