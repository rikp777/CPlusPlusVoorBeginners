//
// Created by rikpe on 09/10/2023.
//
#include <iostream>
#include <vector>
#include <algorithm> // Voor sort-functie

#ifndef BEGINNER_OLESSON5_H
#define BEGINNER_OLESSON5_H


class OLes5 {
public:
    void runMijnCode() {
        // Roep hier je functies aan
        int mijnArray[5] = {5, 4, 3, 2, 1};  // Een array met 5 elementen
        std::vector<int> mijnVector = {5, 4, 3, 2, 1};  // Een vector met 5 elementen

        // Print de som van de elementen in mijnArray en mijnVector
        std::cout << "Som van de array: " << somArray(mijnArray, 5) << std::endl;
        std::cout << "Som van de vector: " << somVector(mijnVector) << std::endl;

        // Print het gemiddelde van de elementen in mijnArray en mijnVector
        std::cout << "Gemiddelde van de array: " << gemiddeldeArray(mijnArray, 5) << std::endl;
        std::cout << "Gemiddelde van de vector: " << gemiddeldeVector(mijnVector) << std::endl;

        // Voorbeeld van het gebruik van isGesorteerd
        int gesorteerdeArray[5] = {1, 2, 3, 4, 5};
        int ongesorteerdeArray[5] = {5, 1, 3, 4, 2};

        std::cout << "Is gesorteerdeArray gesorteerd? " << (isGesorteerd(gesorteerdeArray, 5) ? "Ja" : "Nee") << std::endl;
        std::cout << "Is ongesorteerdeArray gesorteerd? " << (isGesorteerd(ongesorteerdeArray, 5) ? "Ja" : "Nee") << std::endl;

        sorteerDeckKaarten();
        sorteerMaterialenVoorToren();
    }

    // Vul deze functies in
    int somArray(int arr[], int grootte) {
        // Deze functie moet de som van alle elementen in arr teruggeven
        // TODO: schrijf je code hier
    }

    int somVector(std::vector<int> vec) {
        // Deze functie moet de som van alle elementen in vec teruggeven
        // TODO: schrijf je code hier
    }

    float gemiddeldeArray(int arr[], int grootte) {
        // Deze functie moet het gemiddelde van alle elementen in arr teruggeven
        // TODO: schrijf je code hier
    }

    float gemiddeldeVector(std::vector<int> vec) {
        // Deze functie moet het gemiddelde van alle elementen in vec teruggeven
        // TODO: schrijf je code hier
    }

    // Extra Voorbeelden:
    void printArrayElementen(int arr[], int grootte) {
        std::cout << "Elementen in de array: ";
        for (int i = 0; i < grootte; i++) {
            std::cout << arr[i] << " ";
        }
        std::cout << std::endl;
    }

    void printVectorElementen(const std::vector<int>& vec) {
        std::cout << "Elementen in de vector: ";
        for (int num : vec) {
            std::cout << num << " ";
        }
        std::cout << std::endl;
    }

    void voegElementToeAanVector(std::vector<int>& vec, int element) {
        vec.push_back(element); // Voegt een element toe aan het einde van de vector
        std::cout << "Element toegevoegd aan vector: " << element << std::endl;
    }


    // Extra functie om te controleren of een array gesorteerd is
    bool isGesorteerd(int arr[], int grootte) {
        if (grootte == 0 || grootte == 1) {
            return true; // Een lege array of met één element is altijd gesorteerd
        }

        for (int i = 1; i < grootte; i++) {
            if (arr[i - 1] > arr[i]) {
                return false; // Als een element kleiner is dan het vorige, is de array niet gesorteerd
            }
        }
        return true; // Als we hier komen, is de array gesorteerd
    }

    void sorteerDeckKaarten() {
        std::vector<int> deck = {5, 3, 8, 1, 2, 9, 4, 7, 6, 0}; // Een vector die een deck kaarten voorstelt
        std::sort(deck.begin(), deck.end()); // Sorteert het deck in oplopende volgorde

        std::cout << "Gesorteerde deck: ";
        for (int kaart : deck) {
            std::cout << kaart << " ";
        }
        std::cout << std::endl;
    }


    void sorteerMaterialenVoorToren() {
        int materialen[] = {5, 3, 8, 1, 2}; // Een array van materialen, voorgesteld door getallen
        int grootte = sizeof(materialen) / sizeof(materialen[0]); // Bereken de grootte van de array
        std::sort(materialen, materialen + grootte); // Sorteert de materialen in oplopende volgorde

        std::cout << "Gesorteerde materialen voor toren: ";
        for (int i = 0; i < grootte; i++) {
            std::cout << materialen[i] << " ";
        }
        std::cout << std::endl;
    }
};

#endif //BEGINNER_OLESSON5_H
