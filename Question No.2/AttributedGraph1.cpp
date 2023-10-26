#include <iostream>
#include "AttributedGraph1.h"
using namespace std;

AttributedGraph1::AttributedGraph1()  //invoked the constructor from header file using scope operator
{ // easy to access the code in .cpp file from .h file
    ANodes = new AttributedNode1*[numNodes];
}

void AttributedGraph1::appendAttributes()
{
    int n1;
        char c1;
       
        for (int i=0;i<numNodes;i++)
        {
            ANodes[i] = new AttributedNode1();
            cout<<"Enter Node ID: "<<Nodes[i].getNodeId()<<endl;
            cout<<"Gender (Male (m) / Female (f)) : ";
            cin>>c1;
            ANodes[i]->setGender(c1);
            cout<<"Age :";
            cin>>n1;
            ANodes[i]->setAge(n1);
        }    
}
void AttributedGraph1::printGraphData()
{
    for (int i = 0; i < numNodes; i++)
    {
        cout<<endl;
        cout<<"Node "<<i+1<<": "<<Nodes[i].getNodeId()<<endl; //Node1: integer num
        cout<<"Gender: "<<ANodes[i]->getGender()<<endl;       // Male or female
        cout<<"Age: "<<ANodes[i]->getAge()<<endl;     //int age
        printNeighbours(Nodes[i].getNodeId());
       
    }        
}
int AttributedGraph1:: getnode(){
    return numNodes;
}

AttributedGraph1::~AttributedGraph1()
{
    delete[] ANodes;
}