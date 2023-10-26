#ifndef ATTRIBUTEDWEIGHTEDGRAPH_H
#define ATTRIBUTEDWEIGHTEDGRAPH_H

#include "AttributedGraph1.h"
#include "AttributedGraph2.h"

class AttributedWeightedGraph : public AttributedGraph1, public AttributedGraph2 {
protected:
    int** edgeWeights;
    int getNumNodes();
public:
    AttributedWeightedGraph();
    explicit AttributedWeightedGraph(int numNodes, int numEdges);
    ~AttributedWeightedGraph();

    void appendWeight(int nodeId1, int nodeId2, int weight);
    void printNeighbors(int nodeId) const;
    void printData() const;

    // Setter for edge weight
    void setEdgeWeight(int nodeId1, int nodeId2, int weight);

    // Getter for edge weight
    int getEdgeWeight(int nodeId1, int nodeId2) const;
};

#endif

