/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   AntNest.cpp
 * Author: administrador
 * 
 * Created on 20 de abril de 2017, 14:31
 */

#include "AntNest.h"
#include <iostream>
#include <cstdlib> // Para rand.
#include <ctime>

// Generador de IDs

int AntNest::s_idGenerator = 1;

// Setters and getters

int AntNest::getAntWorker() { return a_worker; }

int AntNest::getAntSoldier() { return a_soldier; }

int AntNest::getAntTotal() { a_total = a_worker + a_soldier; return a_total; }

int AntNest::getID() { return a_ID; }

int AntNest::getFood() { return a_food; }

void AntNest::getQueenStatus() {
    if (a_queen = true) { std::cout << "La reina está viva.\n"; }
    else { std::cout << "La reina está muerta.\n"; }
}

void AntNest::harvestFood() { a_food = 5 * a_worker; }

/* La siguiente función es un generador de hormigas: suponiendo que la
* comida disponible sea más que la cantidad de hormigas (tienen que comer),
* la reina gasta comida para poner huevos. El corte se hace cuando hay comida
* justa para alimentarlas a todas.
*/
void AntNest::getAnts() {
    srand(time(NULL)); // Inicio del generador aleatorio.
    while (a_food > a_total) {
        int randAnt = std::rand() % 10 + 1;
        if (randAnt <= 6) { // 60% de probabilidad de generar obrera
            a_worker += 1;
            a_food -= 1;
        } else if (randAnt > 7 && randAnt < 10){
            a_soldier += 1;
            a_food -= 2;
        } else if (randAnt = 10) {
            if (a_princess) {
                a_soldier += 1;
                a_food -= 2;
            } else {
                a_princess = true;
                a_food -= 5;
            }
        }
        a_total = a_worker + a_soldier;
    }
}




