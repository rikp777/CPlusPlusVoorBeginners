//
// Created by rikpe on 09/10/2023.
//

#include <iostream>

#ifndef BEGINNER_OLES3_H
#define BEGINNER_OLES3_H


class OLes3 {
public:
    void runMijnCode() {
        // Deel 1: Controleer je eigen leeftijd
        int jouwLeeftijd = 16;  // Verander dit naar je eigen leeftijd
        magIkStemmen(jouwLeeftijd);  // Roep de functie aan met jouw leeftijd

        // Deel 2: Wat is vandaag?
        int vandaag = 5;  // Verander dit naar het nummer van vandaag (1 = Maandag, 2 = Dinsdag, enz.)
        welkeDag(vandaag);  // Roep de functie aan met het nummer van vandaag

        // Deel 3: Speel met lussen
        lussen();  // Roep de lussen functie aan
    }

    void magIkStemmen(int leeftijd) {
        if (leeftijd >= 18) {  // controleert of 'leeftijd' 18 of ouder is
            std::cout << "Je mag stemmen!" << std::endl;
        } else {
            std::cout << "Je mag nog niet stemmen." << std::endl;
        }
    }

    void welkeDag(int dagNummer) {
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
            case 4:
                std::cout << "Het is Donderdag!" << std::endl;
                break;
            case 5:
                std::cout << "Het is Vrijdag!" << std::endl;
                break;
            case 6:
                std::cout << "Het is Zaterdag!" << std::endl;
                break;
            case 7:
                std::cout << "Het is Zondag!" << std::endl;
                break;
            default:
                std::cout << "Ongeldig nummer!" << std::endl;  // dit gebeurt als geen enkele 'case' overeenkomt
        }

        // Nu mag jij een switch schrijven die weergeeft of een dag een school of weekend dag is
        // Tip: Maandag t/m Vrijdag zijn school dagen, Zaterdag en Zondag zijn weekend dagen

        switch (dagNummer) {
            case 1:
            case 2:
            case 3:
            case 4:
            case 5:
            case 6:
            case 7:

            default:
                std::cout << "Ongeldig nummer!" << std::endl;  // dit gebeurt als geen enkele 'case' overeenkomt
        }
    }

    void lussen() {
        // for lus
        int herhalingen = 5;  // Verander dit naar het aantal herhalingen dat je wilt
        for (int i = 0; i <
                        herhalingen; i++) {  // herhaalt 'herhalingen' keer, i begint op 0 en gaat omhoog tot het 'herhalingen - 1' bereikt
            std::cout << i << " ";
        }
        std::cout << std::endl;

        // while lus
        int j = 0;
        while (j < herhalingen) {  // herhaalt zolang j kleiner is dan 'herhalingen'
            std::cout << j << " ";
            j++;
        }
        std::cout << std::endl;

        // do-while lus
        int k = 0;
        do {
            std::cout << k << " ";
            k++;
        } while (k <
                 herhalingen);  // controleert de voorwaarde nadat de lus is uitgevoerd, dus het gebeurt minstens één keer
        std::cout << std::endl;
    }
};


#endif //BEGINNER_OLES3_H
