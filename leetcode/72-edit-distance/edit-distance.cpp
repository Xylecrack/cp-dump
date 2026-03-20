class Solution {
public:
    int m;
    int dp[501][501];
    int go(int i, int j, string& a, string& b) {
        if (i == a.length())
            return m - j;
        if (j == m)
            return a.length() - i;
        if (dp[i][j] != -1)
            return dp[i][j];
        int op = 0;
        // skip
        if (a[i] == b[j])
            op = go(i + 1, j + 1, a, b);
        // take (min of 3 options)
        else
            op = min({1 + go(i, j + 1, a, b), 1 + go(i + 1, j, a, b),
                      1 + go(i + 1, j + 1, a, b)});
        return dp[i][j] = op;
    }
    int minDistance(string a, string b) {
        m = b.length();
        memset(dp, -1, sizeof(dp));
        return go(0, 0, a, b);
    }
};