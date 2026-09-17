//
// Created by MADAN RAJ on 15-09-2026.
//

#include "GraphProblems.h"

bool solve(int curr, const vector<vector<int>>& adj, unordered_set<int>& is_visited, unordered_set<int>& path) {
    is_visited.insert(curr);
    path.insert(curr);
    for (int next : adj[curr]) {
        if (path.contains(next)) return true;
        if (is_visited.contains(next)) continue;
        if(solve(next, adj, is_visited, path)) return true;
    }
    path.erase(curr);
    return false;
}

bool directedCycleDetection(int n, const vector<vector<int>>& edges) {
    vector<vector<int>> adj(n, vector<int>());
    unordered_set<int> is_visited, curr;
    for (vector<int> i : edges) adj[i[1]].push_back(i[0]);

    for (int i = 0; i < n; i++) {
        if (!is_visited.contains(i)) {
            if (solve(i, adj, is_visited, curr)) return true;
        }
    }

    return false;
}