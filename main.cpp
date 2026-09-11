//
// Created by MADAN RAJ on 27-08-2026.
//

#include <bits/stdc++.h>

#include "GraphUtils.h"
#include "GraphTraversal.h"
#include "GraphProblems.h"

int main() {
    vector<vector<int>> edges = {{1,0}, {3, 2}, {2, 3}, {4, 3}, {5, 4}};

    vector<int> res = courseSchedule2(6, edges);
    for (int i : res) cout << i << " ";

    return 0;
}