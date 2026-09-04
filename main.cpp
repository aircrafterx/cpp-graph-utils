//
// Created by MADAN RAJ on 27-08-2026.
//

#include <bits/stdc++.h>

#include "GraphUtils.h"
#include "GraphTraversal.h"
#include "GraphProblems.h"

int main() {
    std::cout << "\n===== GraphUtils: createNode =====\n";

    GraphNode* node1 = createNode(0, 10);
    GraphNode* node2 = createNode(1, 20);

    std::cout << "Node 1 -> id: " << node1->id
              << ", val: " << node1->val << '\n';

    std::cout << "Node 2 -> id: " << node2->id
              << ", val: " << node2->val << '\n';

    std::cout << "\n===== GraphUtils: addEdge =====\n";

    addEdge(node1, node2);

    std::cout << "Node 1 neighbours: "
              << node1->neighbours.size() << '\n';

    std::cout << "Node 2 neighbours: "
              << node2->neighbours.size() << '\n';

    std::cout << "\n===== GraphUtils: removeEdge =====\n";

    removeEdge(node1, node2);

    std::cout << "Node 1 neighbours after removal: "
              << node1->neighbours.size() << '\n';

    std::cout << "\n===== Directed Graph =====\n";

    std::vector<int> nodes = {10, 20, 30, 40, 50};

    std::vector<std::pair<int, int>> directedEdges = {
        {0, 1},
        {0, 2},
        {1, 3},
        {2, 3},
        {3, 4}
    };

    GraphNode* directedGraph =
        buildDirectedGraph(nodes, directedEdges);

    std::cout << "Directed graph built.\n";

    std::cout << "\n===== BFS =====\n";

    std::vector<GraphNode*> bfsResult = bfs(directedGraph);

    std::cout << "BFS: ";

    for (GraphNode* node : bfsResult) {
        std::cout << node->val << ' ';
    }

    std::cout << '\n';

    std::cout << "\n===== DFS =====\n";

    std::vector<GraphNode*> dfsResult = dfs(directedGraph);

    std::cout << "DFS: ";

    for (GraphNode* node : dfsResult) {
        std::cout << node->val << ' ';
    }

    std::cout << '\n';

    std::cout << "\n===== Undirected Graph =====\n";

    std::vector<std::pair<int, int>> undirectedEdges = {
        {0, 1},
        {0, 2},
        {1, 3},
        {2, 3},
        {3, 4}
    };

    GraphNode* undirectedGraph =
        buildUndirectedGraph(nodes, undirectedEdges);

    std::cout << "Undirected graph built.\n";

    std::cout << "\n===== BFS Undirected =====\n";

    std::vector<GraphNode*> undirectedBFS =
        bfs(undirectedGraph);

    std::cout << "BFS: ";

    for (GraphNode* node : undirectedBFS) {
        std::cout << node->val << ' ';
    }

    std::cout << '\n';

    std::cout << "\n===== Graph Problems =====\n";


    // Number of Islands
    std::vector<std::vector<std::string>> grid = {
        {"1", "1", "0", "0"},
        {"1", "0", "0", "1"},
        {"0", "0", "1", "1"},
        {"0", "0", "0", "0"}
    };

    std::cout << "Number of Islands: "
              << numberOfIslands(grid) << '\n';


    // Rotting Oranges
    std::vector<std::vector<int>> oranges = {
        {2, 1, 1},
        {1, 1, 0},
        {0, 1, 1}
    };

    std::cout << "Rotting Oranges: "
              << rottingOranges(oranges) << '\n';


    // Max Area of Island
    std::vector<std::vector<int>> island = {
        {0, 0, 1, 0},
        {1, 1, 1, 0},
        {0, 1, 0, 0},
        {0, 0, 0, 0}
    };

    std::cout << "Max Area of Island: "
              << maxAreaOfIsland(island) << '\n';


    std::cout << "\n===== ALL TESTS COMPLETED =====\n";

    return 0;
}