#include <iostream>
#include "AntColony.h"

int main() {

    srand(time(NULL));
    AntColony  *ac = new AntColony("/home/zumbi/CLionProjects/Sistemas_Inteligentes_TSP/vm1748.tsp");
    ac->preProcessing();

    delete ac;
    return 0;
}