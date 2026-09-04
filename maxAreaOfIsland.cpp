//
// Created by MADAN RAJ on 03-09-2026.
//

#include "GraphProblems.h"

int maxAreaOfIsland(vector<vector<int>> grid) {
    int n = grid.size(), m = grid[0].size();

    int dx[4] = {-1, 1, 0, 0}, dy[4] = {0, 0, -1, 1};
    int maxArea = 0;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (grid[i][j] == 1) {
                queue<pair<int, int>> q;
                int area = 1;

                q.push({i, j});
                grid[i][j] = 0;

                while (!q.empty()) {
                    auto [x, y] = q.front();
                    q.pop();

                    for (int k = 0; k < 4; k++) {
                        int nx = x + dx[k], ny = y + dy[k];

                        if (nx >= 0 && ny >= 0 && nx < n && ny < m && grid[nx][ny] == 1) {
                            q.push({nx, ny});
                            grid[nx][ny] = 0;
                            area++;
                        }
                    }
                }

                maxArea = max(maxArea, area);
            }
        }
    }

    return maxArea;
}
