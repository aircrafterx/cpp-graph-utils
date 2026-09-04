//
// Created by MADAN RAJ on 03-09-2026.
//

#include "GraphProblems.h"

int rottingOranges(vector<vector<int>> grid) {
    int n = grid.size(), m = grid[0].size();

    queue<pair<int, int>> q;
    int fresh = 0, minutes = 0;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (grid[i][j] == 2) q.push({i, j});
            if (grid[i][j] == 1) fresh++;
        }
    }

    int dx[4] = {-1, 1, 0, 0}, dy[4] = {0, 0, -1, 1};

    if (fresh == 0) return 0;
    if (q.empty() && fresh > 0 ) return -1;

    while (!q.empty()) {
        int sz = q.size();
        bool isRottten = false;

        while (sz--) {
            auto [x, y] = q.front();
            q.pop();

            for (int k = 0; k < 4; k++) {
                int nx = x + dx[k], ny = y + dy[k];

                if (nx >= 0 && ny >= 0 && nx < n && ny < m && grid[nx][ny] == 1) {
                    q.push({nx, ny});
                    grid[nx][ny] = 2;
                    isRottten = true;
                    fresh--;
                }
            }
        }
        if (isRottten) minutes++;
    }

    return (fresh != 0) ? -1 : minutes;
}
