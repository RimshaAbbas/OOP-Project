#include "AttributedWeightedGraph.h"

int main() {
    // Create an object of AttributedWeightedGraph
    AttributedWeightedGraph graph(5, 2);

    // Call appendWeight() multiple times to add weights to edges
    graph.appendWeight(0, 1, 5);
    graph.appendWeight(1, 2, 3);

    // ...
     graph.printData();
    return 0;
}


