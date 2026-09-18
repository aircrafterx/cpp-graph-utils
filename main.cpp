//
// Created by MADAN RAJ on 27-08-2026.
//

#include <bits/stdc++.h>

#include "GraphUtils.h"
#include "GraphTraversal.h"
#include "GraphProblems.h"

int main() {
    vector<vector<int>> edges = {{0,1,2}, {1,2,3}, {2,0,1}, {2,3,4}};

    vector<int> res = dijkstra(4, edges, 0);
    for (int i : res) cout << i << " ";

    return 0;
}