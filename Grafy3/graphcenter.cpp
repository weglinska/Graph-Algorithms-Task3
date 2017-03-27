#include "graphcenter.h"
#define MIN 999999
#define MAX -999999

GraphCenter::GraphCenter() {}

int GraphCenter::getGraphCenter(Graph* graph) {
    int graphCenter = 0;
    int minSum = MIN;
    int verticesNumber = graph->getVerticesNumber();

    for(int i=1; i<=verticesNumber; i++) {
        std::vector<std::vector<int> > dijkstraResult =
                Dijkstra::individualDijkstra(graph, i);
        int sum = 0;

        for(unsigned int j=1; j<dijkstraResult.size(); j++)
            for(unsigned int k=1; k<dijkstraResult[j].size()-1; k++)
                sum += graph->getConnectionWeight
                        (dijkstraResult[j][k]-1, dijkstraResult[j][k+1]-1);
        if(sum < minSum) {
            minSum = sum;
            graphCenter = i;
        }
    }

    return graphCenter;
}

int GraphCenter::getGraphMiniMaxCenter(Graph* graph) {
    int GraphMiniMaxCenter = 0;

    int minDistance = MIN;
    int verticesNumber = graph->getVerticesNumber();

    for(int i=1; i<=verticesNumber; i++) {
        std::vector<std::vector<int> > dijkstraResult =
                Dijkstra::individualDijkstra(graph, i);
        int maxDistance = MAX;

         for(unsigned int j=1; j<dijkstraResult.size(); j++) {
             int distance = 0;
             for(unsigned int k=1; k<dijkstraResult[j].size()-1; k++) {
                 distance += graph->getConnectionWeight
                         (dijkstraResult[j][k]-1, dijkstraResult[j][k+1]-1);
             }
             if(distance > maxDistance) {
                maxDistance = distance;
             }
         }
         if(maxDistance < minDistance) {
            minDistance = maxDistance;
            GraphMiniMaxCenter = i;
         }
    }

    return GraphMiniMaxCenter;
}

