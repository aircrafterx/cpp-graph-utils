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

// problems on graph nodes
GraphNode* cloneGraph(GraphNode* start);

// problems on graphs represented without explicit graph nodes
bool courseSchedule(int numCourses, vector<vector<int>> edges);
vector<int> courseSchedule2(int numCourses, vector<vector<int> > edges);


#endif //GRAPHPROBLEMS_H
