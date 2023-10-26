#ifndef SIMPLENODE_H
#define SIMPLENODE_H

class SimpleNode
{
    int nodeId;
    int neighborCount;
    SimpleNode** arrNeighbors;

    public:
    SimpleNode(); //default constr
    SimpleNode(int id,int count); //parameterized constr
    ~SimpleNode();  //destruc
    
    //methods
    void addEdge(SimpleNode& obj); //if not dereferred, raises an error in attributed graph 2.cpp and.h file
    int getNeighborCount();
    SimpleNode **getNeighbor();
    int getNodeId();
    void setNodeId(int id);
    void setNeighborCount(int count);

};

#endif