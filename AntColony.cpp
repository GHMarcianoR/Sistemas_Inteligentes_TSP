//
// Created by zumbi on 20/04/18.
//

#include <cmath>
#include "AntColony.h"

AntColony::AntColony(string dataPath)
{
    fstream file;
    file.open(dataPath, ios::in);
    string line;
    int indNode;
    double x,y;
    for(int i =0; i<6; i++)
    {
        getline(file,line);
        if(i == 3)
        {
            unsigned long ind = 0;
            for(unsigned long k = line.length(); k>0 ; --k)
            {
                if(line[k] == ' ')
                {
                    ind = k +1;
                    string val = line.substr(ind, line.length() - (k-1));
                    size = std::stoi(val);
                    break;
                }

            }
        }
    }

    this->matDistPhe = new Node [size];
    for(int i = 0; i<size; i++)
    {
        file>>indNode;
        file>>x;
        file>>y;
        this->matDistPhe[i] =  Node(indNode,x,y);
        ants[i] = new Ant();
        ants[i]->addNodeToTour(&matDistPhe[i]);
    }

}

void AntColony::preProcessing()
{

    for(int i = 0; i<size; i++)
        for(int j = 0; j < size; j++)
                     matDistPhe[i].setEdge(
                     new Edge(this->calculateDist(matDistPhe[i],matDistPhe[j]),
                     matDistPhe[i].getIndex(),
                     matDistPhe[j].getIndex())
                     );
}

double AntColony::calculateDist(Node n, Node n1) {
    return sqrt(pow(n.getcoordX() - n1.getcoordX(),2)+
                        pow(n.getcoordY() - n1.getcoordY(),2) );
}

void AntColony::startProcessing() {

    for(Ant *& a : ants)
    {
        a->addNodeToTour(this->calculateNextNode(a));

    }
}

Node *AntColony::calculateNextNode(Ant *ant)
{
    if(ant->getTour().size() == 1)
    {
        int i = rand() % size;
        while(ant->getTour()[0]->getIndex() == matDistPhe[i].getIndex())
            i = rand() % size;
        return &matDistPhe[i];
    }
    else
    {

    }



}


