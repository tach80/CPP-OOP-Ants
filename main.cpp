/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * Archivo:   main.cpp
 * Autor: administrador
 *
 * Creado el 17 de marzo de 2017, a las 10:10
 */

/*
 * Vamos a hacer un pequeño juego de hormigas.
 */

// Librerías y bibliotecas.
#include <cstdlib>
#include <iostream>
#include <ctime>

// Objetos externos
#include "AntNest.h"

/* Un struct que represente al hormiguero y todos sus datos.
 * Así puedo crear un número arbitrario de ellos en pocas líneas.
 */



class Recurso {
    public:
        int tipo; // Un número que indica el tipo de recurso.
        int calidad; // Cantidad de recursos por turno.
        int propiedad; // El número del hormiguero que lo posee.
    
};

int main(int argc, char** argv) {
    // Generación de los hormigueros.
    //for (int i = 0; i < 2; i++) {
    //    AntNest Nest(i)(50*i, 25*i, 0, true, true, "Hormiguero(i)");
    //}
    AntNest Nest1(50, 25, 0, true, false);
    AntNest Nest2(100, 50, 0, true, false);
    std::cout << Nest1.getID() << "\n";
    std::cout << Nest2.getID() << "\n";
    std::cout << "Número de obreras 1: " << Nest1.getAntWorker() << "\n";
    std::cout << "Número de obreras 2: " << Nest2.getAntWorker() << "\n";
    std::cout << "Número de soldados 1: " << Nest1.getAntSoldier() << "\n";
    std::cout << "Número de soldados 2: " << Nest2.getAntSoldier() << "\n";
    std::cout << "Total de hormigas 1: " << Nest1.getAntTotal() << "\n";
    std::cout << "Total de hormigas 2: " << Nest2.getAntTotal() << "\n";
    Nest1.harvestFood(); // El hormiguero 1 recoge comida.
    Nest2.harvestFood(); // El hormiguero 2 recoge comida.
    std::cout << "El hormiguero 1 recoge " << Nest1.getFood() << " unidades de comida.\n";
    std::cout << "El hormiguero 2 recoge " << Nest2.getFood() << " unidades de comida.\n";
    Nest1.getAnts(); // El hormiguero 1 genera hormigas.
    Nest2.getAnts(); // El hormiguero 1 genera hormigas.
    std::cout << "Número de obreras 1: " << Nest1.getAntWorker() << "\n";
    std::cout << "Número de obreras 2: " << Nest2.getAntWorker() << "\n";
    std::cout << "Número de soldados 1: " << Nest1.getAntSoldier() << "\n";
    std::cout << "Número de soldados 2: " << Nest2.getAntSoldier() << "\n";
    std::cout << "Total de hormigas 1: " << Nest1.getAntTotal() << "\n";
    std::cout << "Total de hormigas 2: " << Nest2.getAntTotal() << "\n";
    return 0;
}

