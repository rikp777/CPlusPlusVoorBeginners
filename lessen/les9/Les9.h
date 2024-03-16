//
// Created by rikpe on 16/03/2024.
//

#ifndef BEGINNER_LES9_H
#define BEGINNER_LES9_H


#include <vector>
#include "classes/Hond.h"
#include "classes/Kat.h"

class Les9 {

    void runMijnCode() {
        // Demonstratie van polymorfisme en dynamische binding.

        // We gebruiken een vector van Dier pointers om verschillende soorten dieren op te slaan.
        // Dit toont aan hoe polymorfisme ons in staat stelt om met verschillende objecttypen te werken via een gemeenschappelijke interface.
        std::vector<Dier*> dieren;
        dieren.push_back(new Hond());
        dieren.push_back(new Kat());

        // Itereren over de vector en de spreek methode aanroepen op elk dier.
        // Polymorfisme zorgt ervoor dat de juiste implementatie van spreek wordt aangeroepen afhankelijk van het type object.
        for (auto dier : dieren) {
            dier->spreek();  // Polymorfisme in actie: spreek methode gedraagt zich anders afhankelijk van het dier.
        }

        // Belangrijk: Ruim de dynamisch toegewezen dieren op.
        // Dit voorkomt geheugenlekken door elke toegewezen hond of kat correct te verwijderen.
        for (auto dier : dieren) {
            delete dier;
        }
    }

};


#endif //BEGINNER_LES9_H
