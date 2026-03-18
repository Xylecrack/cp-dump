class Solution {
public:
    int countSubmatrices(vector<vector<int>>& grid, int k) {
        int res = 0;
        int prxRow = 1;
        int prxCol = 1;
        while (prxRow < grid.size()) {
            grid[prxRow][0] += grid[prxRow - 1][0];
            if (grid[prxRow][0] <= k)
                res++;
            prxRow++;
        }
        while (prxCol < grid[0].size()) {
            grid[0][prxCol] += grid[0][prxCol - 1];
            if (grid[0][prxCol] <= k)
                res++;
            prxCol++;
        }
        for (int i = 1; i < grid.size(); i++) {
            for (int j = 1; j < grid[0].size(); j++) {
                grid[i][j] = grid[i - 1][j] + grid[i][j - 1] + grid[i][j] -
                             grid[i - 1][j - 1];
                if (grid[i][j] <= k)
                    res++;
            }
        }
        if (grid[0][0] <= k) {
            return ++res;
        }
        return res;
    }
};