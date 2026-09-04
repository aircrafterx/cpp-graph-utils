//
// Created by MADAN RAJ on 29-08-2026.
//

#pragma once
#include <vector>

struct GraphNode{
	int id;
    int val;
    std::vector<GraphNode*> neighbours;

    GraphNode(int id, int val) : id(id), val(val){}
};
