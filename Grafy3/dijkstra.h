#ifndef DIJKSTRA_H
#define DIJKSTRA_H
#include "graph.h"

class Dijkstra
{
public:
    Dijkstra();
    static std::vector<std::vector<int> > individualDijkstra(Graph* graph, int source);
};

#endif // DIJKSTRA_H
