//
// Created by MADAN RAJ on 03-09-2026.
//

#include "GraphProblems.h"

int numberOfIslands(vector<vector<string>> grid) {
    int n = grid.size(), m = grid[0].size();

    int dx[4] = {0, 0, -1, 1}, dy[4] = {-1, 1, 0, 0};
    int count = 0;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (grid[i][j][0] == '1') {
                queue<pair<int, int>> q;

                count++;
                q.push({i, j});
                grid[i][j] = "0";

                while (!q.empty()) {
                    auto [x, y] = q.front();
                    q.pop();

                    for (int k = 0; k < 4; k++) {
                        int nx = x + dx[k], ny = y + dy[k];
                        if (nx >= 0 && ny >= 0 && nx < n && ny < m && grid[nx][ny][0] == '1') {
                            q.push({nx, ny});
                            grid[nx][ny] = "0";
                        }
                    }
                }
            }
        }
    }

    return count;
}