//
// Created by rikpe on 09/10/2023.
//
#include <iostream>

#ifndef BEGINNER_LESSON3_H
#define BEGINNER_LESSON3_H

// Begrijpen van Basis Programmeerconcepten in C++

// In deze les bouwen we voort op de basisbegrippen van C++ door drie fundamentele programmeerstructuren te onderzoeken:
// beslissingsstructuren, switch-case structuren, en lusstructuren.
// Dit zal je helpen om complexere taken in je code te beheren en uit te voeren. Laten we eens kijken wat er in je code gebeurt:

// Beslissingsstructuren - magIkStemmen() functie:
// Stel je voor, je wilt weten of je mag stemmen in een verkiezing.
// In deze functie gebruik je een if-else-structuur om te bepalen of iemand, op basis van hun leeftijd, stemrecht heeft.
// Als leeftijd 18 of ouder is, geef je aan dat de persoon mag stemmen.
// Zo niet, dan geef je aan dat hij/zij nog niet mag stemmen.
// Dit is vergelijkbaar met het nemen van een beslissing op basis van een voorwaarde.

// Switch-case structuur - welkeDag() functie:
// Deze functie gebruikt een switch-case-structuur om de dag van de week te bepalen.
// Het is alsof je een kalender hebt waar je een nummer kiest en het vertelt je welke dag het is.
// Elke case komt overeen met een dag van de week.
// Als er geen overeenkomst is, geeft de default-case aan dat het een ongeldig nummer is.
// Dit is handig voor situaties waar meerdere opties gecontroleerd moeten worden.

// Lusstructuren - lussen() functie:
// In deze functie onderzoeken we drie soorten lussen: for, while, en do-while.
// De for-lus is alsof je een stappenteller hebt die een vast aantal stappen telt.
// De while-lus lijkt op het wachten tot je telefoonbatterij leeg is - het gaat door tot een bepaalde voorwaarde niet meer waar is.
// De do-while-lus is alsof je minstens één keer een activiteit doet voordat je besluit of je doorgaat, gebaseerd op een bepaalde voorwaarde.

// Deze structuren stellen je in staat om dynamische en interactieve programma's te schrijven waarbij de flow van het programma afhankelijk is van bepaalde voorwaarden en herhalingen.
// Door deze te beheersen, kun je je vaardigheden in C++ verder ontwikkelen en complexere problemen oplossen.
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
