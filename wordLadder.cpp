//
// Created by MADAN RAJ on 11-09-2026.
//

#include "GraphProblems.h"

int wordLadder(string begin, string end, vector<string> words) {
    unordered_set<string> freq;
    for (string s : words) freq.insert(s);

    if (!freq.contains(end)) return 0;

    queue<string> q;
    q.push(begin);

    int res = 1;
    while (!q.empty()) {
        int sz = q.size();
        while (sz--) {
            string curr = q.front();
            if (curr == end) return res;
            q.pop();

            for (int i = 0; i < curr.size(); i++) {
                char c = curr[i];
                char k = 'a';
                for (int j = 0; j < 26; j++) {
                    if (k == c) {
                        k++;
                        continue;
                    }

                    curr[i] = k;
                    k++;
                    if (freq.contains(curr)) {
                        q.push(curr);
                        freq.erase(curr);
                    }
                }
                curr[i] = c;
            }
        }
        res++;
    }

    return 0;
}