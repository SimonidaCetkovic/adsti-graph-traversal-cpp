#ifndef GRAPH_H
#define GRAPH_H

#include <bits/stdc++.h>
#include "node.h"

using namespace std;

class Graph {
public:
    std::list<string> DFS(string currentWord, Node* node);
};

#endif