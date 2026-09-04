//
// Created by MADAN RAJ on 01-09-2026.
//

#ifndef GRAPH_H
#define GRAPH_H

#include <bits/stdc++.h>
#include "GraphNode.h"

using namespace std;

GraphNode* createNode(int id, int n);
void addEdge(GraphNode* from, GraphNode* to);
void removeEdge(GraphNode* from, GraphNode* to);

GraphNode* buildDirectedGraph(const vector<int>& nodes, const vector<pair<int, int>>& edges);
GraphNode* buildUndirectedGraph(const vector<int>& nodes, const vector<pair<int, int>>& edges);

void destroyGraph(GraphNode* start);

#endif //GRAPH_H
