#include <iostream>
#include "SimpleGraph.cpp"
#include "SimpleNode.cpp"

using namespace std;

int main() 
{
    SimpleGraph sg1; //simple graph ka obj
    int nodesNum;
    int edgeId1, edgeId2;
    char find = 'y';
    cout<<" Enter the Number of nodes in graph: ";
    cin>>nodesNum;

    int nodeId[nodesNum]; //nodesNum=2

    for (int i = 0; i < nodesNum; i++) {
        cout <<"Enter the  Node ID: "<<i+1<<endl;
        cin >> nodeId[i];
        sg1.addNode(nodeId[i]);  //void addNode(int NodeId);
    }
    while (find== 'y')  // if u'll enter other than y the program will break.
    {
        cout << "Enter the node ID you want to make an edge of?" << endl;
        cin >> edgeId1;
        for (int i=0;i<nodesNum;i++)
        {
            if (nodeId[i] == edgeId1)
            {
                edgeId1= i;
                cin >> edgeId2;
                for (int i=0;i<nodesNum;i++)
                {
                    if (nodeId[i] ==edgeId2)
                    {
                        edgeId2= i;
                        sg1.addEdge(nodeId[edgeId1], nodeId[edgeId2]);  //void addEdge(int nodeId1,int nodeId2)
                    }
                }        
            }
        }
        cout << "Do you want to create more edges? Yes(y) / No(n)" << endl;
        
        cin >>find;
    }

    cout<<"Printing graph data:"<<endl;
    sg1.printGraphData();

return 0;
}