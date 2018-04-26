//
// Created by zumbi on 20/04/18.
//

#ifndef SISTEMAS_INTELIGENTES_TSP_ANT_H
#define SISTEMAS_INTELIGENTES_TSP_ANT_H

#include <vector>
#include <unordered_set>
#include "Node.h"

using namespace std;
class Ant {

    vector<Node*> tour;
    double costTour;
public:

    Ant();
    void addNodeToTour(Node *n);
    const vector<Node *> &getTour() const;


};


#endif //SISTEMAS_INTELIGENTES_TSP_ANT_H
