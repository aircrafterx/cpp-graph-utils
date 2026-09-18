cmake_minimum_required(VERSION 3.16)

project(GraphUtils)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

add_executable(GraphUtils
        GraphUtils.cpp
        GraphUtils.h
        GraphNode.h
        GraphTraversal.cpp
        GraphTraversal.h
        GraphProblems.h
        numberOfIslands.cpp
        rottingOranges.cpp
        maxAreaOfIsland.cpp
        main.cpp
        cloneGraph.cpp
        courseSchedule.cpp
        courseSchedule2.cpp
        wordLadder.cpp
        atlanticPacific.cpp
        directedCycleDetection.cpp
        dijkstra.cpp
)