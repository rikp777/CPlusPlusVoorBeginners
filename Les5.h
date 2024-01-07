//
// Created by rikpe on 09/10/2023.
//

#include <iostream>
#include <vector>

#ifndef BEGINNER_LESSON5_H
#define BEGINNER_LESSON5_H


class Les5 { // We beginnen een nieuwe klasse genaamd Les5
public: // Dit betekent dat iedereen deze dingen kan gebruiken
    void runMijnCode() { // Dit is waar onze code begint
        arrayList(); // Roep de functie arrayList aan om te laten zien hoe arrays werken

        // Array vs Vector:
        // Een array, zoals mijnArray, heeft een vaste grootte. Dit betekent dat je niet zomaar meer elementen kunt toevoegen nadat het is gemaakt.
        // Een vector, zoals mijnVector, kan van grootte veranderen. Je kunt elementen toevoegen of verwijderen, en de vector past zich automatisch aan.

        // Stel je een toren voor die je bouwt met een vooraf bepaald aantal blokken. Dit aantal blokken staat vast en kan niet worden veranderd nadat je met de bouw bent begonnen.
        // Deze toren staat symbool voor een array in C++. Een array heeft een vaste grootte die je moet bepalen wanneer je de array creëert.
        // Zodra de array is gemaakt, kan je het aantal elementen (of blokken) in deze array niet meer veranderen.
        // Als je een array van 5 elementen maakt, kun je daar niet zomaar een zesde element aan toevoegen of een element verwijderen om de grootte te verkleinen.
        // De toren blijft altijd uit precies hetzelfde aantal blokken bestaan.

        // Nu, stel je een andere toren voor waarbij je tijdens de bouw blokken kunt toevoegen of verwijderen.
        // Je begint misschien met een paar blokken, maar je kunt er meer toevoegen als je wilt, of blokken weghalen als dat nodig is.
        // Deze flexibele toren is vergelijkbaar met een vector in C++. Een vector kan dynamisch van grootte veranderen.
        // Je kunt elementen toevoegen aan het einde van de vector (een nieuw blok bovenop de toren plaatsen), of elementen verwijderen (blokken van de toren afhalen).
        // Dit geeft je veel meer flexibiliteit in vergelijking met een array, omdat je niet beperkt bent tot een vooraf bepaalde grootte.
        int mijnArray[5] = {1, 2, 3, 4, 5}; // Dit maakt een array van 5 gehele getallen
        std::vector<int> mijnVector = {1, 2, 3, 4, 5}; // Dit maakt een vector van gehele getallen

        // Print de som van de waarden in mijnArray en mijnVector
        std::cout << "Som van de array: " << somArray(mijnArray, 5) << std::endl; // Toont de som van mijnArray
        std::cout << "Som van de vector: " << somVector(mijnVector) << std::endl; // Toont de som van mijnVector

        // Print het gemiddelde van de elementen in mijnArray en mijnVector
        std::cout << "Gemiddelde van de array: " << gemiddeldeArray(mijnArray, 5) << std::endl; // Toont het gemiddelde van mijnArray
        std::cout << "Gemiddelde van de vector: " << gemiddeldeVector(mijnVector) << std::endl; // Toont het gemiddelde van mijnVector
    }

    void arrayList() {
        int getallen[5] = {1, 2, 3, 4, 5}; // Een array van 5 integers

        // Toegang tot elementen van de array met behulp van een index
        std::cout << "Het eerste getal is: " << getallen[0] << std::endl;  // Indexen beginnen bij 0
        std::cout << "Het derde getal is: " << getallen[2] << std::endl; // Het derde getal is op index 2
    }

    void vectorList(){
        std::vector<int> getallen = {1, 2, 3, 4, 5};  // Een vector van integers

        // Elementen toevoegen aan de vector
        getallen.push_back(6); // Voegt het getal 6 toe aan de vector
        getallen.push_back(7); // Voegt het getal 7 toe aan de vector

        // Toegang tot elementen van de vector
        std::cout << "Het eerste getal is: " << getallen[0] << std::endl; // Toont het eerste getal in de vector
        std::cout << "Het derde getal is: " << getallen[2] << std::endl; // Toont het derde getal in de vector
    }

    int somArray(int arr[], int grootte) {
        int som = 0;
        for (int i = 0; i < grootte; i++) {
            som += arr[i];  // Optellen van elk element van de array
        }
        return som; // Geef de totale som terug
    }

    int somVector(std::vector<int> vec) {
        int som = 0;
        for (int i = 0; i < vec.size(); i++) {
            som += vec[i];  // Optellen van elk element van de vector
        }
        return som;
    }

    // static_cast<float>(som):
    // Stel je voor dat je twee soorten doosjes hebt: kleine doosjes waarin je alleen hele getallen (zoals 1, 2, 3, enz.)
    // kunt stoppen, en grote doosjes waarin je getallen met decimalen (zoals 1.5, 2.75, enz.)
    // kunt stoppen. In programmeren, noemen we de kleine doosjes int (voor hele getallen) en de grote doosjes float (voor getallen met decimalen).
    // Nu, stel dat je een klein doosje hebt met het getal 10 erin, maar je wilt dit getal in een groot doosje stoppen zodat het eruit ziet als 10.0 (met een decimaal).
    // Dit proces van het veranderen van het soort doosje wordt "casting" genoemd.
    // static_cast<float>(som) is als zeggen: "Ik wil het getal in het kleine doosje som in een groot doosje stoppen, zodat ik er een decimaal aan kan toevoegen."

    // std::cerr:
    // In de wereld van programmeren, hebben we verschillende manieren om berichten te laten zien.
    // Een manier is door ze te printen op het scherm, wat we doen met std::cout.
    // Maar soms willen we een foutbericht laten zien omdat er iets mis is gegaan, en daarvoor gebruiken we std::cerr.

    // Dus, std::cerr << "Fout: De grootte van de array moet groter zijn dan 0." << std::endl;
    // is als zeggen: "Oh nee, er is iets mis gegaan! De grootte van het doosje moet groter zijn dan 0, en ik ga dit foutbericht laten zien zodat iemand het kan zien en het kan repareren."

    float gemiddeldeArray(int arr[], int grootte) {
        if (grootte == 0) {  // Controleer of de grootte niet 0 is om deling door nul te voorkomen
            std::cerr << "Fout: De grootte van de array moet groter zijn dan 0." << std::endl;
            return 0;  // Geef 0 terug als de grootte 0 is
        }
        int som = somArray(arr, grootte);  // Gebruik de somArray functie om de som te berekenen
        return static_cast<float>(som) / grootte;  // Bereken en geef het gemiddelde terug
    }

    float gemiddeldeVector(std::vector<int> vec) {
        if (vec.size() == 0) {  // Controleer of de vector niet leeg is om deling door nul te voorkomen
            std::cerr << "Fout: De grootte van de vector moet groter zijn dan 0." << std::endl;
            return 0;  // Geef 0 terug als de vector leeg is
        }
        int som = somVector(vec);  // Gebruik de somVector functie om de som te berekenen
        return static_cast<float>(som) / vec.size();  // Bereken en geef het gemiddelde terug
    }
};


#endif //BEGINNER_LESSON5_H
