#include <iostream>
using namespace std;
#include "AttributedGraph2.h"
#include "SimpleNode.h"
AttributedGraph2::AttributedGraph2() : SimpleGraph(),attributedNodes(nullptr) {
cout << "AttributedGraph2 default constructor called" <<endl;
}

AttributedGraph2::AttributedGraph2(int numNodes, int numEdges) : SimpleGraph(), attributedNodes(nullptr) {
    attributedNodes = new AttributedNode2[numNodes];
cout << "AttributedGraph2 constructor called" << endl;
}

AttributedGraph2::~AttributedGraph2() {
    delete[] attributedNodes;
    cout << "AttributedGraph2 destructor called" <<endl;
}

void AttributedGraph2::appendAttributes(int nodeId) {
    for (int i = 0; i <  numNodes; i++) {
        if (getNodeId(i) == nodeId) {
            cout << "Enter profession for node " << nodeId << ": ";
            string profession;
            cin >> profession;
            attributedNodes[i].setProfession(profession);

            cout << "Enter location for node " << nodeId << ": ";
            string location;
            cin >> location;
            attributedNodes[i].setCityName(location);

            break;
        }
    }
}

void AttributedGraph2::printData() const 
{
    for (int i = 0; i < numNodes; i++) {
        cout << "Node " << getNodeId(i) <<endl;
        cout << "Profession: " << attributedNodes[i].getProfession() <<endl;
        cout << "Location: " << attributedNodes[i].getCityName() <<endl;
        cout << "Neighbors: ";
        printNeighbors(i);
    }
}
void AttributedGraph2::printNeighbors(int nodeId) const 
{    SimpleNode n;
    const SimpleNode* neighbors = getNeighbors(nodeId);
    int neighborCount = n.getNeighborCount();

    for (int i = 0; i < neighborCount; i++) {
        cout << SimpleGraph::Nodes[i].getNeighbor()<< " ";
    }

    cout <<endl;
}





