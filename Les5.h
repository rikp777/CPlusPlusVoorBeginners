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
        arrayList();

        int mijnArray[5] = {1, 2, 3, 4, 5};
        std::vector<int> mijnVector = {1, 2, 3, 4, 5};

        std::cout << "Som van de array: " << somArray(mijnArray, 5) << std::endl;
        std::cout << "Som van de vector: " << somVector(mijnVector) << std::endl;

        // Print het gemiddelde van de elementen in mijnArray en mijnVector
        std::cout << "Gemiddelde van de array: " << gemiddeldeArray(mijnArray, 5) << std::endl;
        std::cout << "Gemiddelde van de vector: " << gemiddeldeVector(mijnVector) << std::endl;
    }

    void arrayList() {
        int getallen[5] = {1, 2, 3, 4, 5};  // Een array van 5 integers

        // Toegang tot elementen van de array met behulp van een index
        std::cout << "Het eerste getal is: " << getallen[0] << std::endl;  // Indexen beginnen bij 0
        std::cout << "Het derde getal is: " << getallen[2] << std::endl; // Het derde getal is op index 2
    }

    void vectorList(){
        std::vector<int> getallen = {1, 2, 3, 4, 5};  // Een vector van integers

        // Elementen toevoegen aan de vector
        getallen.push_back(6);
        getallen.push_back(7);

        // Toegang tot elementen van de vector
        std::cout << "Het eerste getal is: " << getallen[0] << std::endl;
        std::cout << "Het derde getal is: " << getallen[2] << std::endl;
    }

    int somArray(int arr[], int grootte) {
        int som = 0;
        for (int i = 0; i < grootte; i++) {
            som += arr[i];  // Optellen van elk element van de array
        }
        return som;
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
