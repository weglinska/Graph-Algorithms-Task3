#ifndef MINIMUMSPANNINGTREE
#define MINIMUMSPANNINGTREE

#include <iostream>
#include <cstdio>
#include <limits.h>
#include <vector>
#include "graph.h"

/*minimalne drzewo rozpinające - algorytm Prim'a*/

class MinimumSpanningTree
{
	public:
		static bool** getMST(Graph* graph);
		static int minCost(std::vector<int> cost, std::vector<bool> isInMST,int verticesNumber);
		static bool** getMatrix(std::vector<int> constructedMST, int verticesNumber);
};

#endif