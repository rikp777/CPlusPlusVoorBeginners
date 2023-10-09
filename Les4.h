//
// Created by rikpe on 09/10/2023.
//
#include <iostream>  // Dit is een bibliotheek waarmee we dingen op het scherm kunnen schrijven

#ifndef BEGINNER_LESSON4_H  // We controleren of BEGINNER_LESSON4_H nog niet is gedefinieerd
#define BEGINNER_LESSON4_H  // We definiëren BEGINNER_LESSON4_H


class Les4 { // We beginnen een nieuwe klasse genaamd Les4
public: // Dit betekent dat iedereen deze dingen kan gebruiken
    void runMijnCode() { // Dit is waar onze code begint
        zegHallo(); // We roepen de functie aan en zeggen "Hallo Wereld!"

        int resultaat2 = doeIets(10, 3);  // We roepen de functie 'doeIets' aan en slaan het resultaat op in resultaat2
        std::cout << "Het resultaat is: " << resultaat2 << std::endl;  // We laten het resultaat zien

        // Roep hier je functies aan
        int som = optellen(10, 20);  // We tellen 10 en 20 op en slaan het op in som
        int verschil = aftrekken(20, 10);  // We trekken 10 af van 20 en slaan het op in verschil
        int product = vermenigvuldigen(5, 4);  // We vermenigvuldigen 5 met 4 en slaan het op in product
        float quotient = delen(20, 5);  // We delen 20 door 5 en slaan het op in quotient

        // Druk de resultaten af
        std::cout << "Som: " << som << std::endl;  // We laten de som zien
        std::cout << "Verschil: " << verschil << std::endl;  // We laten het verschil zien
        std::cout << "Product: " << product << std::endl;  // We laten het product zien
        std::cout << "Quotient: " << quotient << std::endl;  // We laten het quotient zien

    }

     // Dit is de definitie van onze functie
    void zegHallo() {  // 'void' betekent dat de functie niets teruggeeft
        std::cout << "Hallo Wereld!" << std::endl;  // We zeggen "Hallo Wereld!"
    }

    int verschil(int a, int b) {  // Deze functie berekent het verschil tussen a en b
        return a - b;  // We sturen het verschil terug
    }

    int doeIets(int x, int y) {  // Deze functie doet iets met x en y
        int diff = verschil(x, y);  // We berekenen het verschil tussen x en y
        return diff * 2;  // We sturen het dubbele van het verschil terug
    }

    int optellen(int a, int b) {  // Deze functie telt a en b op
        return a + b;  // We sturen de som terug
    }

    int aftrekken(int a, int b) {  // Deze functie trekt b af van a
        return a - b;  // We sturen het verschil terug
    }

    int vermenigvuldigen(int a, int b) {  // Deze functie vermenigvuldigt a en b
        return a * b;  // We sturen het product terug
    }

    float delen(int a, int b) {  // Deze functie deelt a door b
        if (b != 0) {  // We controleren of b niet nul is, omdat delen door nul niet mag
            return float(a) / float(b);  // We delen a door b en sturen het resultaat terug
        } else {
            std::cout << "Delen door nul is niet toegestaan!" << std::endl;  // We laten weten dat delen door nul niet mag
            return 0;  // We sturen 0 terug als b nul is
        }
    }
};


#endif //BEGINNER_LESSON4_H
