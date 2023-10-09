//
// Created by rikpe on 09/10/2023.
//
#include <iostream>

#ifndef BEGINNER_LESSON3_H
#define BEGINNER_LESSON3_H


class Les3 {
public:
    void runMijnCode() {
        magIkStemmen();
        welkeDag();
        lussen();
    }

    void magIkStemmen() {
        int leeftijd = 16;

        if (leeftijd >= 18) {  // controleert of 'leeftijd' 18 of ouder is
            std::cout << "Je mag stemmen!" << std::endl;
        } else {
            std::cout << "Je mag nog niet stemmen." << std::endl;
        }
    }

    void welkeDag() {
        int dagNummer = 3;  // stel je voor dat 1 = Maandag, 2 = Dinsdag, enzovoort

        switch (dagNummer) {
            case 1:
                std::cout << "Het is Maandag!" << std::endl;
                break;
            case 2:
                std::cout << "Het is Dinsdag!" << std::endl;
                break;
            case 3:
                std::cout << "Het is Woensdag!" << std::endl;
                break;
                // ... en zo verder voor de rest van de week
            default:
                std::cout << "Ongeldig nummer!" << std::endl;  // dit gebeurt als geen enkele 'case' overeenkomt
        }
    }

    void lussen(){
        // for lus
        for (int i = 0; i < 10; i++) {  // herhaalt 10 keer, i begint op 0 en gaat omhoog tot het 9 bereikt
            std::cout << i << " ";
        }
        std::cout << std::endl;

        // while lus
        int j = 0;
        while (j < 10) {  // herhaalt zolang j kleiner is dan 10
            std::cout << j << " ";
            j++;
        }
        std::cout << std::endl;

        // do-while lus
        int k = 0;
        do {
            std::cout << k << " ";
            k++;
        } while (k < 10);  // controleert de voorwaarde nadat de lus is uitgevoerd, dus het gebeurt minstens één keer
        std::cout << std::endl;
    }
};


#endif //BEGINNER_LESSON3_H
