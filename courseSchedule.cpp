//
// Created by MADAN RAJ on 06-09-2026.
//

#include "GraphProblems.h"

bool courseSchedule(int numCourses, vector<vector<int>> edges) {
    vector<int> in_degree(numCourses, 0);
    for (vector<int> i : edges) in_degree[i[0]]++;

    vector<vector<int>> adj(numCourses, vector<int>());
    for (vector<int> i : edges) {
        adj[i[1]].push_back(i[0]);
    }

    queue<int> q;
    for (int i = 0; i < numCourses; i++) if (in_degree[i] == 0) q.push(i);

    int processed = 0;
    while (!q.empty()) {
        int curr = q.front();
        q.pop();
        processed++;

        for (int i : adj[curr]) {
            in_degree[i]--;
            if (in_degree[i] == 0) q.push(i);
        }
    }

    if (processed == numCourses) return true;

    return false;
}
