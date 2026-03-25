class Solution {
public:
    bool canPartitionGrid(vector<vector<int>>& grid) {
        long long total_sum = 0;
        for (auto& it : grid) {
            for (auto val : it)
                total_sum += val;
        }
        long long t_sum = 0;
        for (int i = 0; i < grid.size()-1; i++) {
            for (int j = 0; j < grid[0].size(); j++) {
                t_sum += grid[i][j];
            }
            if (t_sum == total_sum - t_sum)
                return true;
        }
        t_sum = 0;
        for (int i = 0; i < grid[0].size()-1; i++) {
            for (int j = 0; j < grid.size(); j++) {
                t_sum += grid[j][i];
            }
            if (t_sum == total_sum - t_sum)
                return true;
        }
        return false;
    }
};