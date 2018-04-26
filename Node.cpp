//
// Created by zumbi on 20/04/18.
//

#include "Node.h"
Node::Node(int ind, double x, double y) {

    this->ind = ind;
    this->coordX = x;
    this->coordY = y;

}
Node::Node() {
    this->ind = -1;
    this->coordX = -1;
    this->coordY = -1;
}

int Node::getIndex() {
    return this->ind;
}

double Node::getcoordX() {
    return this->coordX;
}

double Node::getcoordY() {
    return this->coordY;
}

void Node::setCoordX(double x) {

    this->coordX = x;

}
void Node::setCoordY(double y) {
    this->coordY = y;

}

void Node::setEdge(Edge *n) {
  edgeDist.push_back(n);
}

void Node::setInd(int i) {
    this->ind = i;
}

