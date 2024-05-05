//
// Created by rikpe on 09/10/2023.
//
#include <iostream>
#include "../linkedList/LinkedList.h"

#ifndef BEGINNER_OLESSON6_H
#define BEGINNER_OLESSON6_H


class OLes6 {
public:

    void runMijnCode() {
        // Aan het begin van onze speurtocht hebben we twee schatten: getal1 en getal2.
        int getal1 = 10;  // Schat van 10 gouden munten.
        int getal2 = 20;  // Schat van 20 zilveren munten.

        // Om onze schatten te beheren, creëren we twee magische spiegels, pointer1 en pointer2.
        int* pointer1 = &getal1;  // Magische spiegel naar getal1.
        int* pointer2 = &getal2;  // Magische spiegel naar getal2.

        // Oefening 1: Ruil de inhoud van de schatkisten.
        ruilWaarden(pointer1, pointer2);
        std::cout << "Gouden munten (Getal1): " << getal1 << ", Zilveren munten (Getal2): " << getal2 << std::endl;

        // Oefening 2: Voeg extra goud toe aan getal1.
        verhoogMetTien(pointer1);
        std::cout << "Extra goud toegevoegd, nu Gouden munten (Getal1): " << getal1 << std::endl;

        // Oefening 3: Creëer een magische schatkist en vul deze met juwelen.
        int* mijnArray = maakEnVulArray(5);
        std::cout << "Juwelen in de schatkist: ";
        for (int i = 0; i < 5; i++) {
            std::cout << mijnArray[i] << " ";
        }
        std::cout << std::endl;

        // Het is tijd om de magische schatkist terug te geven aan de tovenaar.
        delete[] mijnArray;

        // Extra Oefening: Onderzoek het magische bos met je magische spiegels.
        verkenMagischBos(pointer1, pointer2);

        // Extra Oefening: Spiegel de array
        int array[] = {1, 2, 3, 4, 5};
        spiegelArray(array, 5);
        vergeetArray(array, 5);
        samenvoegenArrays(array, 5, array, 5);
        zoekWaarde(array, 5, 3);
        transformeerArray(array, 5);
        linkedList();
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

    // Extra Oefening: Verken het Magisch Bos
    void verkenMagischBos(int* schat1, int* schat2) {
        std::cout << "Op avontuur in het magische bos: " << std::endl;
        *schat1 -= 5;  // Verlies wat gouden munten in het bos.
        *schat2 += 10;  // Vind extra zilveren munten.
        std::cout << "Na het avontuur, Gouden munten (Getal1): " << *schat1 << ", Zilveren munten (Getal2): " << *schat2 << std::endl;
        // Reflecteer op het belang van het zorgvuldig beheren van je schatten (en pointers) in het magische bos van programmeren!
    }


    // Opdracht 4: De Magische Reflectie (makkelijk)
    // Schrijf een functie die een array en zijn grootte neemt. De functie moet alle elementen van de array spiegelen.
    // Voorbeeld: Als de array [1, 2, 3, 4, 5] is, moet deze na de operatie [5, 4, 3, 2, 1] zijn.
    // Denk na over hoe je dit kunt bereiken met behulp van pointers.
    void spiegelArray(int* array, int grote){

    }

    // Opdracht 5: De Toverdrank van Vergetelheid (makkelijk)
    // Maak een functie die een dynamisch toegewezen array 'vergeet' door alle elementen op nul te zetten.
    // Denk na over het belang van het 'nulstellen' van gegevens in bepaalde situaties.
    void vergeetArray(int* array, int grote){
    }

    // Opdracht 6: De Portaal naar het Dynamische Geheugenrijk (moeilijk)
    // Schrijf een functie die twee arrays neemt (en hun groottes), beide dynamisch toegewezen, en ze samenvoegt tot één grote array.
    // Reflecteer op de uitdagingen van dynamische geheugenallocatie en het beheren van meerdere geheugenblokken.
    // Voor deze opdracht heb je kennis nodig van les 7 en 8 over klassen en objecten.
    void linkedList(){
        // Eigen code


        // Uitwerking
        // LinkedList lijst;
        // lijst.toevoegenAanEinde(10);
        // lijst.toevoegenAanEinde(20);
        // lijst.toevoegenAanEinde(30);
        // lijst.weergeven();
    }

    // Opdracht 7: De Wachters van het Geheugenkasteel (gemiddeld)
    // Implementeer een simpele gelinkte lijst met behulp van struct en pointers. Voeg functies toe voor het toevoegen en verwijderen van elementen.
    // Onderzoek de principes van geheugenallocatie en -bevrijding in de context van een gelinkte lijststructuur.
    void samenvoegenArrays(int* array1, int grootte1, int* array2, int grootte2){
    }

    // Opdracht 8: Echo's in het Geheugendoolhof (makkelijk)
    // Ontwikkel een functie die zoekt naar een specifieke waarde in een array en de index teruggeeft met behulp van pointers.
    // Overweeg hoe pointers kunnen worden gebruikt om efficiënt door gegevens te navigeren.
    void zoekWaarde(int* array, int grootte, int waarde){
    }

    // Opdracht 9: Tovenaarsleerling bij de Array-tovenaar (gemiddeld)
    // Creëer een functie die een array (en zijn grootte) neemt en deze op een unieke manier transformeert, bijvoorbeeld door elke waarde te kwadrateren.
    // Reflecteer op het gebruik van pointers voor directe manipulatie van array-elementen.
    void transformeerArray(int* array, int grootte){
    }

    // Deze opdrachten zijn ontworpen om je kennis en vaardigheden op het gebied van pointers, geheugenbeheer, en datastructuren te vergroten.
    // Door deze magische uitdagingen aan te gaan, word je een meester in de kunst van C++ magie!
};

#endif //BEGINNER_OLESSON6_H
