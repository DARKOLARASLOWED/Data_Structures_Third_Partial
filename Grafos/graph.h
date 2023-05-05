//
// Created by DARKOLARASLOWED on 18/04/2023.
//

#ifndef GRAPH_GRAPH_H
#define GRAPH_GRAPH_H

#include <bits/stdc++.h>
#include <iostream>

using namespace std;

class graph {
private:
    vector<list<int>> adj;
    int v;
public:
    explicit graph(int v);
    void addEdge(int u, int w);
    void printGraph();
    void dfs(int n);
};


#endif //GRAPH_GRAPH_H
