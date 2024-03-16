//
// Created by rikpe on 16/03/2024.
//

#ifndef BEGINNER_HOND_H
#define BEGINNER_HOND_H


#include <iostream>
#include "basis/Dier.h"

// Hond is een afgeleide class van Dier. Het implementeert de spreek methode specifiek voor een hond.
class Hond : public Dier {
public:
    // Override geeft aan dat deze methode de virtuele functie spreek in de basisclass overschrijft.
    void spreek() const override {
        std::cout << "Woef!" << std::endl;
    }
};



#endif //BEGINNER_HOND_H
