#include <iostream>
#include "SimpleGraph.h"
#include "SimpleGraph.cpp"
#include "SimpleNode.h"
#include "SimpleNode.cpp"
#include "AttributedNode1.h"
#include "AttributedNode1.cpp"
#include "AttributedGraph1.h"
#include "AttributedGraph1.cpp"
using namespace std;
int main() {
    AttributedGraph1 attribute1;
    int nodesNum;
    cout << " Enter the number of nodes: " << endl;
    cin >> nodesNum;
    int nodeId[nodesNum];
    for (int i = 0; i < nodesNum; i++) {
        cout << "Node ID " << i + 1 <<endl;
        cin >> nodeId[i];
        attribute1.addNode(nodeId[i]);
    }
    char find= 'y';
    int num1,num2;  
    //while true loop used.
    while (find== 'y') { //jaisy hi y hoga the program will further ask, y k ilawa if u'll even press
                         // any number, the program will break and display the final output.

        cout << "Enter node IDs to be edged together :" << endl;
        cin >>num1;
        for (int i=0;i<nodesNum;i++)
        {
            if (nodeId[i] ==num1)
            {
                num1= i;
                cin >>num2;
                for (int i=0;i<nodesNum;i++)
                {
                    if (nodeId[i] ==num2)
                    {
                        num2= i;
                        attribute1.addEdge(nodeId[num1], nodeId[num2]);
}
}        
}    
}
        cout << "Would you like to create more edges? Yes(y) / No(n):  " << endl;
        cin >>find;
    }
    attribute1.appendAttributes();
    attribute1.printGraphData();
    return 0;
}