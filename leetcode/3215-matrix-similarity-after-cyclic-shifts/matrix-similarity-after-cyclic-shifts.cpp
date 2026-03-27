class Solution {
public:
    int n, m;
    bool rotatrow(vector<int>& mat, int even, int k) {
        vector<int> original = mat;
        vector<int> temp = mat;
        while (k--) {
            for (int i = 0; i < m; i++) {
                if (even)
                    temp[(((i - 1) % m) + m) % m] = mat[i];
                else
                    temp[(i + 1) % m] = mat[i];
            }
            mat = temp;
        }
        if (temp == original)
            return true;
        return false;
    }
    bool areSimilar(vector<vector<int>>& mat, int k) {
        int cycles = k;
        n = mat.size();
        m = mat[0].size();
        int res = true;
        for (int i = 0; i < n; i++) {
            if (i % 2 == 0)
                res = res && rotatrow(mat[i], 1, cycles);
            else
                res = res && rotatrow(mat[i], 0, cycles);
        }
        return res;
    }
};