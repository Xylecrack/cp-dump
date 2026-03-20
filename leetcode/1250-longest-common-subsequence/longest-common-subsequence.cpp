class Solution {
public:
    int n, m;
    int dp[1001][1001];
    int go(int i, int j, string& a, string& b) {
        if (i > n || j > m)
            return 0;
        if (dp[i][j] != -1)
            return dp[i][j];
        int subseq = 0;
        if (a[i] == b[j])
            subseq = 1 + go(i + 1, j + 1, a, b);
        else
            subseq = max(go(i, j + 1, a, b), go(i + 1, j, a, b));
        return dp[i][j] = subseq;
    }
    int longestCommonSubsequence(string a, string b) {
        memset(dp, -1, sizeof(dp));
        n = a.length() - 1;
        m = b.length() - 1;
        return go(0, 0, a, b);
    }
};