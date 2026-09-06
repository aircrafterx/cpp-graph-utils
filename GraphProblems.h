//
// Created by MADAN RAJ on 03-09-2026.
//

#ifndef GRAPHPROBLEMS_H
#define GRAPHPROBLEMS_H

#include <bits/stdc++.h>
#include "GraphNode.h"
#include "GraphUtils.h"

using namespace std;

// problems on unweighted, undirected graphs
int numberOfIslands(vector<vector<string>> grid);
int rottingOranges(vector<vector<int>> grid);
int maxAreaOfIsland(vector<vector<int>> grid);

GraphNode* cloneGraph(GraphNode* start);

#endif //GRAPHPROBLEMS_H
