//
// Created by rikpe on 09/10/2023.
// V1.2
//

#include <iostream>
#include <cstdlib> // for std::rand
#include <ctime>  // for std::time

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
        ageGroupClassification();
        countdown();
        raadHetNummer();
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

        if (dagNummer >= 1 && dagNummer <= 5) {
            std::cout << "Het is een weekdag." << std::endl;
        } else if (dagNummer >= 6 && dagNummer <= 7) {
            std::cout << "Het is weekend!" << std::endl;
        } else {
            std::cout << "Ongeldig nummer!" << std::endl;
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

    void ageGroupClassification() {
        int leeftijd;
        std::cout << "Voer je leeftijd in: ";
        std::cin >> leeftijd;

        if (leeftijd >= 0 && leeftijd <= 12) {
            std::cout << "Je bent een kind." << std::endl;
        } else if (leeftijd >= 13 && leeftijd <= 19) {
            std::cout << "Je bent een tiener." << std::endl;
        } else if (leeftijd >= 20 && leeftijd <= 59) {
            std::cout << "Je bent een volwassene." << std::endl;
        } else if (leeftijd >= 60) {
            std::cout << "Je bent een senior." << std::endl;
        } else {
            std::cout << "Ongeldige leeftijd." << std::endl;
        }
    }

    void countdown() {
        int nummer;
        std::cout << "Voer een startnummer voor de countdown in: ";
        std::cin >> nummer;

        for (int i = nummer; i >= 0; i--) {
            std::cout << i << " ";
        }
        std::cout << std::endl;
    }

    void raadHetNummer() {
        std::srand(std::time(0)); // seed willekeurige getalgenerator
        int willekeurigNummer = std::rand() % 51; // random number between 0 and 50
        int gok;
        int pogingen = 0;

        std::cout << "Raad het getal tussen 1 en 50: ";

        while (pogingen < 5) {
            std::cin >> gok;

            // Jouw if-else logica hier om te controleren of de gok te hoog, te laag of correct is
            pogingen++;

            if (gok == willekeurigNummer) {
                std::cout << "Gefeliciteerd! Je hebt het juiste getal geraden!" << std::endl;
                break;  // exit the loop if the correct number is guessed
            } else if (gok < willekeurigNummer) {
                std::cout << "Te laag! Probeer het opnieuw: ";
            } else {
                std::cout << "Te hoog! Probeer het opnieuw: ";
            }

        }

        if (pogingen >= 5 && gok != willekeurigNummer) {
            std::cout << "Helaas! Je hebt al je pogingen gebruikt. Het juiste getal was " << willekeurigNummer << "." << std::endl;
        }
    }

};


#endif //BEGINNER_OLES3_H
