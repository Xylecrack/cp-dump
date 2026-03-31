class Solution {

public:
    bool isValidSudoku(vector<vector<char>>& board) {
        unordered_map<int, int> sudorow[9];
        for (int row = 0; row < 9; row++) {
            for (auto& it : board[row]) {
                if (it == '.')
                    continue;
                if (sudorow[row][it - '0'] == 1)
                    return false;
                sudorow[row][it - '0']++;
            }
        }
        unordered_map<int, int> sudocol[9];
        for (int col = 0; col < 9; col++) {
            for (auto& it : board) {
                if (it[col] == '.')
                    continue;
                if (sudocol[col][it[col] - '0'] == 1)
                    return false;
                sudocol[col][it[col] - '0']++;
            }
        }
        unordered_map<int, int> sudoblock[9];
        for (int i = 0; i < 9; i++) {
            for (int j = 0; j < 9; j++) {
                if (board[i][j] == '.')
                    continue;
                int n = (i / 3) * 3 + (j / 3);
                if (sudoblock[n][board[i][j] - '0'] == 1)
                    return false;
                sudoblock[n][board[i][j] - '0']++;
            }
        }

        return true;
    }
};