//
// Created by rikpe on 09/10/2023.
//
#include <iostream>
#include <vector>

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
};

#endif //BEGINNER_OLESSON5_H
