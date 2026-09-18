//
// Created by MADAN RAJ on 18-09-2026.
//

#include "GraphProblems.h"

struct compare {
    bool operator()(const pair<int, int>& a, const pair<int, int>& b) {
        return a.second > b.second;
    }
};

vector<int> dijkstra(int n, const vector<vector<int>>& edges, int start) {
    if (start >= n || start < 0) return {-1};

    vector<int> res(n, -1);
    res[start] = 0;

    vector<vector<pair<int, int>>> adj(n, vector<pair<int, int>>());
    for (vector<int> i : edges) adj[i[0]].push_back({i[1], i[2]});

    priority_queue<pair<int, int>, vector<pair<int, int>>, compare> pq;
    pq.push({start, 0});

    while (!pq.empty()) {
        auto [x, y] = pq.top();
        pq.pop();

        if (res[x] != -1 && res[x] >= y) {
            res[x] = y;

            for (const pair<int, int>& p : adj[x]) {
                if (res[p.first] == -1 || res[p.first] > p.second + y) {
                    pq.push({p.first, p.second + y});
                    res[p.first] = p.second + y;
                }
            }
        }
    }

    return res;
}