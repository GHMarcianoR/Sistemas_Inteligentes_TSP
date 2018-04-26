//
// Created by zumbi on 26/04/18.
//

#include "Edge.h"

Edge::Edge(double dist, int first, int second) : dist(dist), first(first), second(second) {}

double Edge::getDist() const {
    return dist;
}

void Edge::setDist(double dist) {
    Edge::dist = dist;
}

int Edge::getFirst() const {
    return first;
}

void Edge::setFirst(int first) {
    Edge::first = first;
}

int Edge::getSecond() const {
    return second;
}

void Edge::setSecond(int second) {
    Edge::second = second;
}


