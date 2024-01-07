//
// Created by rikpe on 09/10/2023.
//

#include <iostream>  // Dit is een bibliotheek waarmee we dingen op het scherm kunnen schrijven

#ifndef BEGINNER_OLES4_H  // We controleren of BEGINNER_OLES4_H nog niet is gedefinieerd
#define BEGINNER_OLES4_H  // We definiëren BEGINNER_OLES4_H

class OLes4 {  // We beginnen een nieuwe klasse genaamd OLes4
public:  // Dit betekent dat iedereen deze dingen kan gebruiken
    void runMijnCode() {  // Dit is waar onze code begint

        // Roep hier je functies aan
        // Vul de functies hieronder in en test ze hier

    }

    // Vul deze functies in
    int verdubbelen(int a) {
        // Deze functie moet het getal a verdubbelen en teruggeven
        // TODO: schrijf je code hier
    }

    int kwadraat(int a) {
        // Deze functie moet het kwadraat van a berekenen en teruggeven
        // TODO: schrijf je code hier
    }

    float halveren(int a) {
        // Deze functie moet de helft van a berekenen en teruggeven
        // TODO: schrijf je code hier
    }

    bool isNul(int a) {
        // Deze functie moet controleren of a gelijk is aan 0 en een boolean teruggeven
        // TODO: schrijf je code hier
    }

    int verhoogMetDrie(int a) {
        // Deze functie moet 3 optellen bij a en het resultaat teruggeven
        // TODO: schrijf je code hier
    }

    float berekenGemiddelde(int a, int b) {
        // Deze functie moet het gemiddelde van a en b berekenen en teruggeven
        // TODO: schrijf je code hier
    }


    void stoplicht(){
        enum kleur {ROOD, GROEN, ORANJE}; // Dit is een enum, een lijst met opties

        kleur huidigeKleur = ROOD;
        bool politieOvername = true;

        if(politieOvername){
            std::cout << "Politie neemt het over! Noodgeval politie krijgt voorang" << std::endl;
        }

        switch (huidigeKleur) {
            case ROOD:
                std::cout << "Stoppen!" << std::endl;
                break;
            case GROEN:
                std::cout << "Doorrijden!" << std::endl;
                break;
            case ORANJE:
                std::cout << "Stoppen! Het licht wordt zo rood" << std::endl;
                break;
            default:
                std::cout << "Ongeldig nummer!" << std::endl;  // dit gebeurt als geen enkele 'case' overeenkomt
        }
    }
};



#endif //BEGINNER_OLES4_H
