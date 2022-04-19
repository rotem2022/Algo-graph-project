#pragma once
#include "Utils.h"
#include "Edge.h"
class Edge;
class Vertex
{
public:
   
   
    int index;
    Edge* head= nullptr;
    Vertex(int i) : index(i) {};
    Vertex();
    void addEdge(Vertex* u, int w);
    void removeEdge(Vertex* u);
    bool isAdjacent(Vertex* u);
    Vertex* getAdjList();
    Edge * getEdges();
    ~Vertex();
private:
    int countAdjs();
};