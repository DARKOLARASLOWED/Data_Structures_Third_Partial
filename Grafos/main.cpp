#include "graph.h"

int main() {
    graph g(5);

    g.addEdge(0, 1);
    g.addEdge(0, 4);
    g.addEdge(1, 2);
    g.addEdge(1, 3);
    g.addEdge(1, 4);
    g.addEdge(2, 3);
    g.addEdge(3, 4);

    cout << "adjacency list of vertices in the graph" << endl;
    g.printGraph();

    cout << endl << "DFS" << endl;
    for (int i = 0; i < 5; ++i) {
        g.dfs(i);
    }
    return 0;
}
