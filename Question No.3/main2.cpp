#include <iostream>
#include "SimpleGraph.h"
#include "AttributedGraph2.h"
#include"SimpleGraph.cpp"
#include"SimpleNode.h"
#include"SimpleNode.cpp"
#include"AttributedGraph1.h"
#include"AttributedNode1.h"
#include"AttributedGraph1.cpp"
#include"AttributedNode1.cpp"

int main() {
    AttributedGraph2 graph(5, 5);

    // Adding nodes and edges
    graph.addNode(0);
    graph.addNode(1);
    graph.addNode(2);
    graph.addNode(3);
    graph.addNode(4);
    graph.addEdge(0, 1);
    graph.addEdge(1, 2);
    graph.addEdge(2, 3);
    graph.addEdge(3, 4);
    graph.addEdge(4, 0);

    // Append attributes to nodes
    graph.appendAttributes(0);
    graph.appendAttributes(1);
    graph.appendAttributes(2);
    graph.appendAttributes(3);
    graph.appendAttributes(4);

    // Print graph data
    graph.printData();

    return 0;
}
