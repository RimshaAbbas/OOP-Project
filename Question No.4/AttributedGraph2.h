#ifndef ATTRIBUTEDGRAPH2_H
#define ATTRIBUTEDGRAPH2_H
#include "SimpleGraph.h"
#include "AttributedNode2.h"
#include "SimpleNode.h"
class AttributedGraph2 : public SimpleGraph 
{
private:
    AttributedNode2* attributedNodes;
public:
    AttributedGraph2();
    explicit AttributedGraph2(int numNodes, int numEdges);
    ~AttributedGraph2();
    
    const SimpleNode* getNeighbors(int nodeId) const;
    int getNodeId(int index) const;
    void appendAttributes(int nodeId);
    virtual void printData() const;
    void printNeighbors(int nodeId) const;
    
};

#endif


