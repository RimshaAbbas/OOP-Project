#include <iostream>
#include "SimpleNode.h"
using namespace std;

SimpleNode::SimpleNode()  //specify the class to which the function belongs, it is a d. constr
    {
        nodeId = 0;
        neighborCount = 0;
        arrNeighbors = nullptr;
    }
// through scope operator it is specified that from which class the constructor belongs to

    SimpleNode::SimpleNode(int id, int count)  //parameterized constr
    {
        nodeId = id;
        neighborCount = count;
        arrNeighbors = new SimpleNode*[neighborCount];
    }


    void SimpleNode::addEdge(SimpleNode& obj) 
    {
        int count=0;
        for (int i=0;i<neighborCount;i++)
        {
            if (arrNeighbors[i]->getNodeId()==obj.getNodeId()) // -> cuz pointer and dot operator can't be used together
            {
                count++;
            }
        }
        if (count ==0)
        {
            SimpleNode **newArr = new SimpleNode *[neighborCount + 1];
            for (int i = 0; i < neighborCount; i++) 
            {
               newArr[i] = arrNeighbors[i];
            }
            newArr[neighborCount] = &obj; //refering address of obj to newArr[]

            delete[] arrNeighbors; //deallocation
            
            arrNeighbors = newArr;
            neighborCount++;
        }    
    }

    

    int SimpleNode::getNeighborCount()
    {
        return neighborCount;
    }

    SimpleNode** SimpleNode::getNeighbor()
    {
        return arrNeighbors;
    }

    int SimpleNode::getNodeId()
    {
        return nodeId;
    }

    void SimpleNode::setNodeId(int a) 
    {
        nodeId = a;
    }

    void SimpleNode::setNeighborCount(int a) 
    {
        neighborCount = a;
    }

        SimpleNode::~SimpleNode() 
    {
        delete[] arrNeighbors;
}