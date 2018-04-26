//
// Created by zumbi on 20/04/18.
//

#ifndef SISTEMAS_INTELIGENTES_TSP_NODE_H
#define SISTEMAS_INTELIGENTES_TSP_NODE_H

#include <vector>
#include "Ant.h"
#include "Edge.h"

using namespace std;

class Node {

    double coordX, coordY;
    int ind;
    vector<Edge *> edgeDist;
    vector<Ant*> currentAntsInNode;

public:
    Node(int,double, double);
    Node();


    void setCoordX(double);
    void setCoordY(double);
    void setInd(int);
    void setEdge(Edge *n);
    double getcoordX();
    double getcoordY();
    int getIndex();




};


#endif //SISTEMAS_INTELIGENTES_TSP_NODE_H
