#include <iostream>
#include "AttributedWeightedGraph.h"
using namespace std;
AttributedWeightedGraph::AttributedWeightedGraph() : edgeWeights(nullptr) {
    cout << "AttributedWeightedGraph default constructor called" << endl;
}

AttributedWeightedGraph::AttributedWeightedGraph(int numNodes, int numEdges)
    : AttributedGraph1(), AttributedGraph2(numNodes, numEdges),
      edgeWeights(new int*[numNodes]) {
    for (int i = 0; i < numNodes; i++) {
        edgeWeights[i] = new int[numNodes];
        for (int j = 0; j < numNodes; j++) {
            edgeWeights[i][j] = 0;
        }
    }
    cout << "AttributedWeightedGraph constructor called" << endl;
}

AttributedWeightedGraph::~AttributedWeightedGraph() {
    for (int i = 0; i < getNumNodes(); i++) {
        delete[] edgeWeights[i];
    }
    delete[] edgeWeights;
    cout << "AttributedWeightedGraph destructor called" <<endl;
}

void AttributedWeightedGraph::appendWeight(int nodeId1, int nodeId2, int weight) {
    if (nodeId1 >= 0 && nodeId1 <getNumNodes() && nodeId2 >= 0 && nodeId2 < getNumNodes()) {
        edgeWeights[nodeId1][nodeId2] = weight;
        edgeWeights[nodeId2][nodeId1] = weight;
    }
}

void AttributedWeightedGraph::printNeighbors(int nodeId) const {
    if (nodeId >= 0 && nodeId < getNumNodes()) {
        cout << "Neighbors: ";
        for (int i = 0; i < getNumNodes(); i++) {
            if (edgeWeights[nodeId][i] != 0) {
                cout << "Node " << i << " (Weight: " << edgeWeights[nodeId][i] << "), ";
            }
        }
        cout << endl;
    }
}
void AttributedWeightedGraph::printData() const {
    for (int i = 0; i < getNumNodes(); i++) {
        attributedNodes[i].printNode();
        cout << "Gender: " << attributedNodes[i].getGender() <<endl;
        cout << "Age: " << attributedNodes[i].getAge() << endl;
        cout << "Profession: " << attributedNodes[i].getProfession() <<endl;
        cout << "Location: " << attributedNodes[i].getLocation() << endl;
        cout << "Neighbors: ";
        printNeighbors(i);
        cout <<endl;
    }
}

void AttributedWeightedGraph::setEdgeWeight(int nodeId1, int nodeId2, int weight) {
    if (nodeId1 >= 0 && nodeId1 < getNumNodes() && nodeId2 >= 0 && nodeId2 < getNumNodes()) {
        edgeWeights[nodeId1][nodeId2] = weight;
        edgeWeights[nodeId2][nodeId1] = weight;
    }
}

int AttributedWeightedGraph::getEdgeWeight(int nodeId1, int nodeId2) const {
    if (nodeId1 >= 0 && nodeId1 < getNumNodes() && nodeId2 >= 0 && nodeId2 < getNumNodes()) {
        return edgeWeights[nodeId1][nodeId2];
    }
    return 0; 