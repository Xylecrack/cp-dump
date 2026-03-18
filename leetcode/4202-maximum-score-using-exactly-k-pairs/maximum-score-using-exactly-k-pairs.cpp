class Solution {
public:
    int n, m;
    long long dp[101][101][101];
    bool vis[101][101][101];
    long long getMax(int i, int j, vector<int>& nums1, vector<int>& nums2,
                     int k) {
        if (k == 0)
            return 0;
        if (i >= n || j >= m)
            return LLONG_MIN;
        if (vis[i][j][k])
            return dp[i][j][k];

        long long ans = LLONG_MIN;
        long long next = getMax(i + 1, j + 1, nums1, nums2, k - 1);
        if (next != LLONG_MIN)
            ans = max(ans, 1LL * nums1[i] * nums2[j] + next);
        ans = max(ans, getMax(i + 1, j, nums1, nums2, k));
        ans = max(ans, getMax(i, j + 1, nums1, nums2, k));
        dp[i][j][k] = ans;
        vis[i][j][k] = true;
        return ans;
    }
    long long maxScore(vector<int>& nums1, vector<int>& nums2, int k) {
        this->n = nums1.size();
        this->m = nums2.size();
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                for (int t = 0; t <= k; t++) {
                    dp[i][j][t] = LLONG_MIN;
                    vis[i][j][t] = false;
                }
            }
        }
        return getMax(0, 0, nums1, nums2, k);
    }
};