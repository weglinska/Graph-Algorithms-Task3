#ifndef GRAPHCENTER_H
#define GRAPHCENTER_H
#include <vector>
#include "dijkstra.h"

class GraphCenter {
private:
    GraphCenter();
public:
    static int getGraphCenter(Graph* graph);
    static int getGraphMiniMaxCenter(Graph* graph);
};

#endif // GRAPHCENTER_H
