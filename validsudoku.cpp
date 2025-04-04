#include <iostream>
#include <vector>
using namespace std;

bool isSafe(vector<vector<char>>& board, int i, int j, char c) {
    int cnt = 0;
    for (int k = 0; k < 9; k++) {
        if (board[i][k] == c) cnt++;
        if (board[k][j] == c) cnt++;
        if (board[3 * (i / 3) + k / 3][3 * (j / 3) + k % 3] == c) cnt++;
    }
    return cnt <= 3;
}

class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        for (int i = 0; i < 9; i++) {
            for (int j = 0; j < 9; j++) {
                if (board[i][j] != '.') {
                    if (!isSafe(board, i, j, board[i][j])) {
                        return false;
                    }
                }
            }
        }
        return true;
    }
};
