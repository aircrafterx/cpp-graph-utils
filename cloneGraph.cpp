//
// Created by MADAN RAJ on 05-09-2026.
//

#include "GraphProblems.h"

GraphNode* cloneGraph(GraphNode* start) {
    if (start == nullptr) return nullptr;

    unordered_map<GraphNode*, GraphNode*> clones;
    clones[start] = createNode(start->id, start->val);

    queue<GraphNode*> q;
    q.push(start);

    while (!q.empty()) {
        GraphNode* curr = q.front();
        q.pop();

        for (GraphNode* i : curr->neighbours) {
            if (!clones.contains(i)) {
                GraphNode* node = createNode(i->id, i->val);
                clones[i] = node;
                q.push(i);
            }
            addEdge(clones[curr], clones[i]);
        }
    }

    return clones[start];
}