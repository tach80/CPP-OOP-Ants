/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * Archivo:   main.cpp
 * Autor: alberto.garcia
 *
 * Created on 17th March 2017, at 10:10
 */

/*
 * Let's make a little ant game.
 */

// Libraries and resources.
#include <cstdlib>
#include <iostream>
#include <ctime>

// Other external code.
#include "AntNest.h"
#include "Resource.h"


int main(int argc, char** argv) {
    // Creation of the ant nests.
    //for (int i = 0; i < 2; i++) {
    //    AntNest Nest(i)(50*i, 25*i, 0, true, true, "ID");
    //}
    AntNest Nest1(50, 25, 0, true, false);
    AntNest Nest2(100, 50, 0, true, false);
    std::cout << Nest1.getID() << "\n";
    std::cout << Nest2.getID() << "\n";
    round(Nest1);
    round(Nest2);
    std::cout << "\n\n\n";    
    std::cout << "Nº of workers 1: " << Nest1.getAntWorker() << "\n";
    std::cout << "Nº of workers 2: " << Nest2.getAntWorker() << "\n";
    std::cout << "Nº of soldiers 1: " << Nest1.getAntSoldier() << "\n";
    std::cout << "Nº of soldiers 2: " << Nest2.getAntSoldier() << "\n";
    std::cout << "Total number of ants 1: " << Nest1.getAntTotal() << "\n";
    std::cout << "Total number of ants 2: " << Nest2.getAntTotal() << "\n";
    Nest1.harvestFood(); // The ant nest 1 gathers food.
    Nest2.harvestFood(); // The ant nest 2 gathers food.
    std::cout << "The ant nest 1 harvests " << Nest1.getFood() << " food units.\n";
    std::cout << "The ant nest 2 harvests " << Nest2.getFood() << " food units.\n";
    Nest1.getAnts(); // The ant nest 1 creates ants.
    Nest2.getAnts(); // The ant nest 2 creates ants.
    std::cout << "Nº of workers 1: " << Nest1.getAntWorker() << "\n";
    std::cout << "Nº of workers 2: " << Nest2.getAntWorker() << "\n";
    std::cout << "Nº of soldiers 1: " << Nest1.getAntSoldier() << "\n";
    std::cout << "Nº of soldiers 2: " << Nest2.getAntSoldier() << "\n";
    std::cout << "Total number of ants 1: " << Nest1.getAntTotal() << "\n";
    std::cout << "Total number of ants 2: " << Nest2.getAntTotal() << "\n";
    std::cout << "Colony 1 will eat " << Nest1.getRequiredFood() << " food units.\n";
    std::cout << "Colony 2 will eat " << Nest2.getRequiredFood() << " food units.\n";
    Nest1.consumeFood();
    Nest2.consumeFood();
    std::cout << "After eating, colony 1 still has " << Nest1.getFood() << " food units.\n";
    std::cout << "After eating, colony 2 still has " << Nest1.getFood() << " food units.\n";
    return 0;
}

