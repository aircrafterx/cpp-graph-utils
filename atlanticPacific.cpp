//
// Created by MADAN RAJ on 14-09-2026.
//

#include "GraphProblems.h"

struct PairHash {
    size_t operator()(const pair<int, int>& p) const {
        size_t h1 = hash<int>{}(p.first);
        size_t h2 = hash<int>{}(p.second);

        return h1 ^ (h2 + 0x9e3779b9 + (h1 << 6) + (h1 >> 2));
    }
};

vector<vector<int>> atlanticPacific(const vector<vector<int>>& grid) {
    int n = grid.size(), m = grid[0].size();

    vector<vector<int>> res;
    queue<pair<int, int>> atlanticQ, pacificQ;
    unordered_set<pair<int, int>, PairHash> atlanticSet, pacificSet;

    int dx[4] = {-1, 1, 0, 0}, dy[4] = {0, 0, -1, 1};

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (i == 0 || j == 0) {
                pacificQ.push({i, j});
                pacificSet.insert({i, j});
            }

            if (i == n - 1 || j == m - 1) {
                atlanticQ.push({i, j});
                atlanticSet.insert({i, j});
            }
        }
    }

    while (!atlanticQ.empty()) {
        auto [x, y] = atlanticQ.front();
        atlanticQ.pop();

        for (int k = 0; k < 4; k++) {
            int nx = x + dx[k], ny = y + dy[k];
            if (nx >= 0 && ny >= 0 && nx < n && ny < m && grid[nx][ny] >= grid[x][y] && !atlanticSet.contains({nx, ny})) {
                atlanticQ.push({nx, ny});
                atlanticSet.insert({nx, ny});
            }
        }
    }

    while (!pacificQ.empty()) {
        auto [x, y] = pacificQ.front();
        pacificQ.pop();
        if (atlanticSet.contains({x, y})) res.push_back({x, y});

        for (int k = 0; k < 4; k++) {
            int nx = x + dx[k], ny = y + dy[k];
            if (nx >= 0 && ny >= 0 && nx < n && ny < m && grid[nx][ny] >= grid[x][y] && !pacificSet.contains({nx, ny})) {
                pacificQ.push({nx, ny});
                pacificSet.insert({nx, ny});
            }
        }
    }

    return res;
}