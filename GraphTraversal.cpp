//
// Created by MADAN RAJ on 02-09-2026.
//

#include "GraphTraversal.h"

vector<GraphNode*> bfs(GraphNode* start){
    if(start == nullptr) return {};

    vector<GraphNode*> res;
    unordered_set<GraphNode*> is_visited;
    queue<GraphNode*> q;

    is_visited.insert(start);
    res.push_back(start);
    q.push(start);

    while(!q.empty()){
        GraphNode* g = q.front();
        q.pop();
        for(GraphNode* i : g->neighbours){
            if(!is_visited.contains(i)){
                res.push_back(i);
                q.push(i);
                is_visited.insert(i);
            }
        }
    }

    return res;
}

void solveDFS(GraphNode* start, vector<GraphNode*>& res, unordered_set<GraphNode*>& is_visited){
    for(GraphNode* i : start->neighbours){
        if(!is_visited.contains(i)){
            res.push_back(i);
            is_visited.insert(i);
            solveDFS(i, res, is_visited);
        }
    }
}

vector<GraphNode*> dfs(GraphNode* start){
    if(start == nullptr) return {};

    vector<GraphNode*> res;
    unordered_set<GraphNode*> is_visited;

    is_visited.insert(start);
    res.push_back(start);

    solveDFS(start, res, is_visited);
    return res;
}
