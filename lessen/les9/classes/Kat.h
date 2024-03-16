//
// Created by rikpe on 16/03/2024.
//

#ifndef BEGINNER_KAT_H
#define BEGINNER_KAT_H


#include <iostream>
#include "basis/Dier.h"

// Kat is ook een afgeleide class van Dier en implementeert de spreek methode voor een kat.
class Kat : public Dier {
public:
    void spreek() const override {
        std::cout << "Miauw!" << std::endl;
    }
};



#endif //BEGINNER_KAT_H
