//
// Created by rikpe on 09/10/2023.
//
#include <iostream>

#ifndef BEGINNER_OLESSON6_H
#define BEGINNER_OLESSON6_H


class OLes6 {
public:
    void runMijnCode(){
        int getal1 = 10;
        int getal2 = 20;
        int* pointer1 = &getal1;  // Pointer naar getal1
        int* pointer2 = &getal2;  // Pointer naar getal2

        // Oefening 1: Ruil de waarden van getal1 en getal2 met behulp van de pointers.
        ruilWaarden(pointer1, pointer2);
        std::cout << "Getal1: " << getal1 << ", Getal2: " << getal2 << std::endl;  // Output: Getal1: 20, Getal2: 10

        // Oefening 2: Tel 10 op bij getal1 met behulp van een functie en een pointer.
        verhoogMetTien(pointer1);
        std::cout << "Getal1 na verhoging: " << getal1 << std::endl;  // Output: Getal1 na verhoging: 30

        // Oefening 3: Maak een dynamische array met 5 elementen en vul deze met de getallen 1 tot en met 5.
        int* mijnArray = maakEnVulArray(5);
        for (int i = 0; i < 5; i++) {
            std::cout << mijnArray[i] << " ";  // Output: 1 2 3 4 5
        }
        std::cout << std::endl;
        delete[] mijnArray;  // Vergeet niet om het geheugen vrij te geven!
    }

    void ruilWaarden(int* ptr1, int* ptr2) {
        int temp = *ptr1;
        *ptr1 = *ptr2;
        *ptr2 = temp;
    }

    void verhoogMetTien(int* ptr) {
        *ptr += 10;
    }

    int* maakEnVulArray(int grootte) {
        int* newArr = new int[grootte];
        for (int i = 0; i < grootte; i++) {
            newArr[i] = i + 1;
        }
        return newArr;
    }

};

// Begin van de speurtocht:
// In het begin hebben we twee dozen, doos getal1 heeft een schat van 10 gouden munten en doos getal2 heeft 20 zilveren munten.
// Nu willen we een manier vinden om te onthouden waar deze dozen zijn, dus we maken twee schatkaarten, pointer1 en pointer2, die ons vertellen waar getal1 en getal2 zijn.

// Oefening 1 - Ruil de Schatten:
// Nu willen we de inhoud van de dozen ruilen, zodat getal1 de zilveren munten heeft en getal2 de gouden munten.
// We hebben een magische spreuk, ruilWaarden, die dit voor ons doet als we de schatkaarten aan de spreuk geven!

// Oefening 2 - Verhoog de Schat:
// Nu willen we meer goud in getal1. Dus we gebruiken een toverstokje, verhoogMetTien, om 10 extra gouden munten toe te voegen aan de schat in getal1 door naar getal1 te wijzen met onze schatkaart pointer1.

// Oefening 3 - Maak een Schatkist:
// We willen nu een schatkist maken met 5 vakjes, en in elk vakje willen we een aantal juwelen plaatsen, beginnend met 1 juweel en dan één extra in elk volgend vakje (dus 1, 2, 3, 4, 5 juwelen).
// We hebben een magische spreuk, maakEnVulArray, die een nieuwe schatkist voor ons maakt en deze vult met juwelen.

// Het Einde van het Avontuur:
// Aan het einde van ons avontuur, moeten we de magie ongedaan maken en de schatkist teruggeven aan de tovenaar, dus gebruiken we delete[] mijnArray;
// om de magie ongedaan te maken en de schatkist terug te geven.


#endif //BEGINNER_OLESSON6_H
