class Solution {
public:
    int largestSubmatrix(vector<vector<int>>& matrix) {
        int n1 = matrix.size();
        int n2 = matrix[0].size();
        for (int i = 1; i < n1; i++) {
            for (int j = 0; j < n2; j++) {
                if (matrix[i][j] == 1) {
                    matrix[i][j] = matrix[i - 1][j] + 1;
                } else {
                    matrix[i][j] = 0;
                }
            }
        }
        int area=0;
        for (int i = 0; i < n1; i++) {
            sort(matrix[i].begin(), matrix[i].end(), greater<int>());
            for (int j = 0; j < n2; j++) {
                area = max(area, matrix[i][j] * (j + 1));
            }
        }
        return area;
    }
};