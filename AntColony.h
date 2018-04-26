//
// Created by zumbi on 20/04/18.
//

#ifndef SISTEMAS_INTELIGENTES_TSP_ANTCOLONY_H
#define SISTEMAS_INTELIGENTES_TSP_ANTCOLONY_H


#include "Node.h"
#include <iostream>
#include <fstream>

using namespace std;

class AntColony {

    Node* matDistPhe;
    vector<Ant*> ants;
    int size;
    double calculateDist(Node, Node);
    Node* calculateNextNode(Ant * ant);

public:
    AntColony(string dataPath);
    void preProcessing();

    void startProcessing();

};


#endif //SISTEMAS_INTELIGENTES_TSP_ANTCOLONY_H
