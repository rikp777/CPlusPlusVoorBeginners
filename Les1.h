//
// Created by rikpe on 09/10/2023.
//

#include <iostream>

#ifndef BEGINNER_LESSON1_H
#define BEGINNER_LESSON1_H


// int (integer):
// Deze doos is speciaal voor hele getallen, zoals -2, -1, 0, 1, 2, enzovoort.
// Bijvoorbeeld, als je je leeftijd wilt opslaan, zou je een int-doos gebruiken, zoals int age = 12;.

// char (character):
// Deze doos is voor enkele letters of tekens, zoals 'a', 'b', 'c', enzovoort.
// Als je bijvoorbeeld de eerste letter van je naam wilt opslaan, zou je een char-doos gebruiken, zoals char initial = 'R';.

// float:
// Deze doos is voor getallen met decimalen, zoals 3.14 of 2.71.
// Dus als je je gemiddelde cijfer op school wilt opslaan, zou je een float-doos gebruiken, zoals float averageScore = 8.5;.

// bool (boolean):
// Deze doos is voor ja/nee of waar/onwaar waarden.
// Als je bijvoorbeeld wilt opslaan of je online bent of niet, zou je een bool-doos gebruiken, zoals bool isOnline = true;.

class Les1 {
public:
    void runMijnCode() {
        int age = 25; // We maken een doos met de naam 'age' en stoppen het getal 25 erin
        char initial = 'J'; // Een doos met de naam 'initial' krijgt de letter 'J'
        float averageScore = 88.6; // Een doos met de naam 'averageScore' krijgt het getal 88.6
        bool isOnline = true; // Een doos met de naam 'isOnline' krijgt de waarde waar (true)

        // Nu printen we de waarden van deze dozen op het scherm
        std::cout <<
                  "Age: " << age <<
                  ", Initial: " << initial <<
                  ", Average Score: " << averageScore <<
                  ", Is Online: "<< isOnline
                  << std::endl;
    }

    // Datatypes:
    // Datatypes vertellen de computer wat voor soort data we willen opslaan.
    // In C++ hebben we veel datatypes, maar de meest gebruikelijke zijn int voor hele getallen,
    // float voor getallen met decimalen, char voor karakters en bool voor ja/nee of waar/onwaar waarden.

    // Variabelen:
    // Een variabele is als een doos waarin we een waarde kunnen stoppen. We geven deze doos een naam zodat we later terug kunnen komen en zien wat erin zit.
    int dataTypes() {
        int number;  // We maken een doos met de naam 'number', maar stoppen er nog niets in
        float decimal;  // Een doos met de naam 'decimal', maar ook leeg voor nu
        char letter;  // Een lege doos met de naam 'letter'
        bool isActive;  // Een lege doos met de naam 'isActive'
    }


    int initDataTypes() {
        int number = 10;  // Een doos met de naam 'number' krijgt het getal 10
        char letter = 'A';  // Een doos met de naam 'letter' krijgt de letter 'A'

        float decimal;  // Een lege doos met de naam 'decimal'
        decimal = 3.14;  // Nu vullen we de doos 'decimal' met het getal 3.14
    }

    int print() {
        int number = 34;  // We maken een doos met de naam 'number' en stoppen het getal 34 erin

        // Nu sturen we de waarde van 'number' naar het scherm zodat we het kunnen zien
        std::cout << number << std::endl;
    }
};


#endif //BEGINNER_LESSON1_H
