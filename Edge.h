//
// Created by zumbi on 26/04/18.
//

#ifndef SISTEMAS_INTELIGENTES_TSP_EDGE_H
#define SISTEMAS_INTELIGENTES_TSP_EDGE_H


class Edge {

    double dist;
    int first;
    int second;

public:

    Edge(double dist, int first, int second);

    double getDist() const;
    void setDist(double dist);
    int getFirst() const;
    void setFirst(int first);
    int getSecond() const;
    void setSecond(int second);


};


#endif //SISTEMAS_INTELIGENTES_TSP_EDGE_H
