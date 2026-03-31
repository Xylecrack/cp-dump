class Solution {

public:
    bool isValidSudoku(vector<vector<char>>& board) {
        unordered_map<int, int> sudorow[9];
        unordered_map<int, int> sudocol[9];
        unordered_map<int, int> sudoblock[9];
        for (int i = 0; i < 9; i++) {
            for (int j = 0; j < 9; j++) {
                int n = (i / 3) * 3 + (j / 3);
                if (board[i][j] == '.')
                    continue;
                int num = board[i][j] - '0';
                if (sudorow[i][num] == 1 || sudocol[j][num] == 1 ||
                    sudoblock[n][num] == 1)
                    return false;
                sudorow[i][num]++;
                sudocol[j][num]++;
                sudoblock[n][num]++;
            }
        }
        return true;
    }
};