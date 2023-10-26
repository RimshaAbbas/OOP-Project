#ifndef SimpleGraph_H
#define SimpleGraph_H

#include "SimpleNode.h"

class SimpleGraph
{
    protected:
    int numNodes;
    int numEdges;
    SimpleNode* Nodes;

    public:
    SimpleGraph();  //def constr
    SimpleGraph(int nodes,int edges);  //parameterized constr

    //methods 

    void addNode(int NodeId);
    void addEdge(int nodeId1,int nodeId2);
    void printNeighbours(int nodeId);
    void printGraphData();

    ~SimpleGraph(); //destr called
};

#endif