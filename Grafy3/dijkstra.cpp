#include "dijkstra.h"
#include <vector>
#define INF 1000000


Dijkstra::Dijkstra()
{

}

std::vector<std::vector<int> > Dijkstra::individualDijkstra(Graph* graph, int source)
{

    int size=graph->getVerticesNumber();
    if (source<=size)

    {
        source--;
        int* d = new int[size];
        int* prev = new int[size];
        std::vector<int> queue;

        for (int i=0; i<size; ++i)
        {
            d[i]=INF;

            prev[i]=size;

            queue.push_back(i);
        }

        d[source]=0;
        prev[source]=source;

        while(queue.size())
        {
            //zdejmowanie minimum z kolejki
            int u=queue[0];
            int index=0;
            for (unsigned int i=1; i<queue.size(); ++i)
            {
                if (d[queue[i]]<d[u])
                {
                    u=queue[i];
                    index=i;
                }
            }

            queue.erase(queue.begin()+index);

            for (unsigned int i=0; i<queue.size(); ++i)
            {
                int waga=graph->getWeight(u, queue[i]);
                if (waga)
                {

                    if (d[queue[i]]>d[u]+waga)
                    {
                        d[queue[i]]=d[u]+waga;
                        prev[queue[i]]=u;
                    }
                }

            }
        }

        std::vector<std::vector<int> >paths (size);

        for (int i=size-1; i>=0; --i)
        {
            int ost=i;
            while (ost!=source)
            {
                paths[i].push_back(ost+1);

                ost=prev[ost];
            }
            paths[i].push_back(source+1);

        }

        int **matrix=graph->getDistanceMatrix();

        for (int i=0; i<size; ++i)
        {
            matrix[source][i]=d[i];
        }

        delete [] d;
        delete [] prev;

        return paths;
    }

}
