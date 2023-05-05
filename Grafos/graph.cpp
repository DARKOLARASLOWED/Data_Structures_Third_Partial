//
// Created by DARKOLARASLOWED on 18/04/2023.
//

#include "graph.h"

graph::graph(int v) {
    this->v = v;
    adj.resize(v);
}

void graph::addEdge(int u, int w) {
    adj[u].push_back(w);
    adj[w].push_back(u); // si el grafo es no dirigido
}

void graph::printGraph() {
    for(int i = 0; i < v; i++) {
        cout << i << ": ";
        for (const auto& j: adj[i]) {
            cout << j << " ";
        }
        cout << endl;
    }
}

void graph::dfs(int n) {
    stack<int> s;
    vector<bool> visited(v, false);
    cout << n << " ";
    visited[n] = true;
    s.push(n);
    while (!s.empty()) {
        bool band = false;
        int aux = s.top();
        for (const auto& V: adj[aux]) {
            if (!visited[V]) {
                cout << V << " ";
                visited[V] = true;
                s.push(V);
                band = true;
                break;
            }
        }
        if (!band) {
            s.pop();
        }
    }
    cout << endl;
}

