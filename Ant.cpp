//
// Created by zumbi on 20/04/18.
//

#include "Ant.h"

Ant::Ant(){}


void Ant::addNodeToTour(Node *n) {
    tour.push_back(n);

}

const vector<Node *> &Ant::getTour() const {
    return tour;
}
