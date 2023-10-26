#ifndef ATTRIBUTEDGRAPH1_H
#define ATTRIBUTEDGRAPH1_H

#include "AttributedNode1.h"
#include "SimpleGraph.h"

class AttributedGraph1:public SimpleGraph
{
    AttributedNode1** ANodes;
    public:
    AttributedGraph1();
   
    void appendAttributes();
    void printGraphData();
    int getnode();

    ~AttributedGraph1();
};

#endif