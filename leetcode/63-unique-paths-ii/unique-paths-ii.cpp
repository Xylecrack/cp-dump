class Solution {
public:
    int n, m;
    int dp[101][101];
    int go(int i, int j, vector<vector<int>>& obstacleGrid) {
        if (i >= n || j >= m)
            return 0;
        if (obstacleGrid[i][j] == 1)
            return 0;
        if (i == n - 1 && j == m - 1)
            return 1;

        if (dp[i][j] != -1)
            return dp[i][j];

        return dp[i][j] =
                   go(i + 1, j, obstacleGrid) + go(i, j + 1, obstacleGrid);
    }
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
        n = obstacleGrid.size();
        m = obstacleGrid[0].size();
        memset(dp, -1, sizeof(dp));
        return go(0, 0, obstacleGrid);
    }
};