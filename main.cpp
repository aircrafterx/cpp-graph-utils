//
// Created by MADAN RAJ on 27-08-2026.
//

#include <bits/stdc++.h>

#include "GraphUtils.h"
#include "GraphTraversal.h"
#include "GraphProblems.h"

int main() {
    vector<string> words = {"hot","dot","dog","lot","log","cog"};
    cout << wordLadder("hit", "cog", words);

    return 0;
}