//
// Created by MADAN RAJ on 01-09-2026.
//

#include "GraphUtils.h"

GraphNode* createNode(int id, int n){
    return new GraphNode(id, n);
}

void addEdge(GraphNode* from, GraphNode* to){
    if(from == nullptr || to == nullptr) return;

	auto it = find(from->neighbours.begin(), from->neighbours.end(), to);
	if(it == from->neighbours.end()) from->neighbours.push_back(to);
}

void removeEdge(GraphNode* from, GraphNode* to){
	if(from == nullptr || to == nullptr) return;

    auto it = find(from->neighbours.begin(), from->neighbours.end(), to);
    if(it != from->neighbours.end()) from->neighbours.erase(it);
}

GraphNode* buildDirectedGraph(const vector<int>& nodes, const vector<pair<int, int>>& edges){
	unordered_map<int, GraphNode*> nodeMap;
	int id = 0;

	for(int i : nodes){
		nodeMap[id] = createNode(id, i);
		id++;
	}

	for(auto& [k, v] : edges){
		if(k >= 0 && v >= 0 && k < id && v < id) addEdge(nodeMap[k],nodeMap[v]);
	}

	if(!nodeMap.empty()) return nodeMap[0];

	return nullptr;
}

GraphNode* buildUndirectedGraph(const vector<int>& nodes, const vector<pair<int, int>>& edges){
	unordered_map<int, GraphNode*> nodeMap;
	int id = 0;

	for(int i : nodes){
		nodeMap[id] = createNode(id, i);
		id++;
	}

	for(auto& [k, v] : edges){
		if(k >= 0 && v >= 0 && k < id && v < id){
			 addEdge(nodeMap[k], nodeMap[v]);
			 addEdge(nodeMap[v], nodeMap[k]);
		}
	}

	if(!nodeMap.empty()) return nodeMap[0];

	return nullptr;
}

void destroyGraph(GraphNode* start) {
	if (start == nullptr) return;

	unordered_set<GraphNode*> visited;
	queue<GraphNode*> q;

	visited.insert(start);
	q.push(start);

	while (!q.empty()) {
		GraphNode* node = q.front();
		q.pop();

		for (GraphNode* i : node->neighbours) {
			if (!visited.contains(i)) {
				visited.insert(i);
				q.push(i);
			}
		}
	}

	for (GraphNode* node : visited) delete node;
}



