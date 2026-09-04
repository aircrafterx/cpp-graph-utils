# 🕸️ Graph Utilities in C++

A reusable utility library for practicing Graph problems in C++.

## Features

- Build Directed Graph from node and edge input
- Build Undirected Graph from node and edge input
- Add Edge
- Remove Edge
- Duplicate Edge Prevention
- Breadth-First Traversal (BFS)
- Depth-First Traversal (DFS)
- Cycle-safe Graph Destruction
- Graph problems organized by category

## Project Structure

```text
GraphUtils/
├── GraphNode.h
├── GraphUtils.h
├── GraphUtils.cpp
├── GraphTraversal.h
├── GraphTraversal.cpp
├── GraphProblems.h
├── main.cpp
├── CMakeLists.txt
├── numberOfIslands.cpp
├── rottingOranges.cpp
└── maxAreaOfIsland.cpp
```

## Example

```cpp
vector<int> nodes = {10, 20, 30, 40, 50};

vector<pair<int, int>> edges = {
    {0, 1},
    {0, 2},
    {1, 3},
    {2, 3},
    {3, 4}
};

GraphNode* root = buildDirectedGraph(nodes, edges);

auto bfsResult = bfs(root);
auto dfsResult = dfs(root);

destroyGraph(root);
```

## Time Complexity

| Function            | Complexity |
|---------------------|------------|
| createNode           | O(1)       |
| addEdge               | O(degree)  |
| removeEdge             | O(degree)  |
| buildDirectedGraph      | O(V + E)   |
| buildUndirectedGraph    | O(V + E)   |
| BFS                     | O(V + E)   |
| DFS                     | O(V + E)   |
| destroyGraph            | O(V + E)   |

## Problems Solved — 3/10

### Utilities
- ✅ Build Directed Graph
- ✅ Build Undirected Graph
- ✅ Add / Remove Edge
- ✅ Duplicate Edge Prevention
- ✅ BFS Traversal
- ✅ DFS Traversal
- ✅ Graph Destruction

### Problem Tracker

| # | Problem | Pattern | Status |
|---|---------|---------|--------|
| 1 | Number of Islands (200) | Grid DFS/BFS | ✅ |
| 2 | Rotting Oranges (994) | Multi-source BFS | ✅ |
| 3 | Max Area of Island (695) | Grid BFS + component size | ✅ |
| 4 | Clone Graph (133) | DFS/BFS + visited mapping | ⬜ |
| 5 | Course Schedule (207) | Cycle Detection / Topo Sort | ⬜ |
| 6 | Course Schedule II (210) | Topological Sort | ⬜ |
| 7 | Word Ladder (127) | BFS + implicit graph | ⬜ |
| 8 | Pacific Atlantic Water Flow (417) | Reverse BFS/DFS | ⬜ |
| 9 | Directed Cycle Detection | DFS states / Kahn's Algorithm | ⬜ |
| 10 | Dijkstra's Algorithm | Weighted shortest path | ⬜ |

---

Built while mastering Graph data structures, BFS, DFS, and graph traversal fundamentals.
