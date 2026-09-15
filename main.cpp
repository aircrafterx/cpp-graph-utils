//
// Created by MADAN RAJ on 27-08-2026.
//

#include <bits/stdc++.h>

#include "GraphUtils.h"
#include "GraphTraversal.h"
#include "GraphProblems.h"

int main() {
    vector<vector<int>> grid = {
        {1,2,2,3,5},
        {3,2,3,4,4},
        {2,4,5,3,1},
        {6,7,1,4,5},
        {5,1,1,2,4}
    };

    vector<vector<int>> res = atlanticPacific(grid);
    for (vector<int>& i : res) {
        for (int j : i) {
            cout << j << " ";
        }
        cout << endl;
    }

    return 0;
}