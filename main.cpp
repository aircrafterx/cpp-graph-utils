//
// Created by MADAN RAJ on 27-08-2026.
//

#include <bits/stdc++.h>

#include "GraphUtils.h"
#include "GraphTraversal.h"
#include "GraphProblems.h"

int main() {
    vector<int> nodes = {1, 2, 3, 4};
    vector<pair<int, int>> edges = {{0, 1}, {1, 2}, {2, 3}, {3, 0}};
    GraphNode* start = buildUndirectedGraph(nodes, edges);

    GraphNode* res = cloneGraph(start);
    vector<GraphNode*> nums = bfs(res);

    for (GraphNode* i : nums) cout << i->val << " ";

    destroyGraph(start);
    destroyGraph(res);

    return 0;
}