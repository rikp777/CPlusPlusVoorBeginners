//
// Created by rikpe on 09/10/2023.
//
#include <iostream>
#include <vector>
#include <algorithm> // Voor sort-functie
#include <unordered_set>

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

        std::cout << "Is gesorteerdeArray gesorteerd? " << (isGesorteerd(gesorteerdeArray, 5) ? "Ja" : "Nee")
                  << std::endl;
        std::cout << "Is ongesorteerdeArray gesorteerd? " << (isGesorteerd(ongesorteerdeArray, 5) ? "Ja" : "Nee")
                  << std::endl;

        sorteerDeckKaarten();
        sorteerMaterialenVoorToren();
    }

    // Vul deze functies in
    int somArray(int arr[], int grootte) {
        // Deze functie moet de som van alle elementen in arr teruggeven
        // TODO: schrijf je code hieronder
    }

    int somVector(std::vector<int> vec) {
        // Deze functie moet de som van alle elementen in vec teruggeven
        // TODO: schrijf je code hieronder
    }

    float gemiddeldeArray(int arr[], int grootte) {
        // Deze functie moet het gemiddelde van alle elementen in arr teruggeven
        // TODO: schrijf je code hieronder
    }

    float gemiddeldeVector(std::vector<int> vec) {
        // Deze functie moet het gemiddelde van alle elementen in vec teruggeven
        // TODO: schrijf je code hieronder
    }

    // Implementeer een nieuwe functie "mediaanArray" die de mediaan van een gesorteerde array teruggeeft.
    // De mediaan is de middelste waarde in een lijst van getallen. Als de lijst een even aantal getallen heeft,
    // is de mediaan het gemiddelde van de twee middelste getallen.
    // Deze functie moet een gesorteerde array en zijn grootte als parameters accepteren en de mediaan als een float teruggeven.
    // Hint: Denk na over hoe je bepaalt welk element(en) het midden vormt van de array en hoe je omgaat met even en oneven aantallen elementen.
    // Let op: Zorg ervoor dat je eerst controleert of de array niet leeg is om fouten te voorkomen.
    // Extra uitdaging: Implementeer een soortgelijke functie voor een vector, "mediaanVector", die hetzelfde doet voor een std::vector<int>.

    // Deel 5: Extra
    void printArrayElementen(int arr[], int grootte) {
        std::cout << "Elementen in de array: ";
        for (int i = 0; i < grootte; i++) {
            std::cout << arr[i] << " ";
        }
        std::cout << std::endl;

        // Voeg een extra functionaliteit toe die de elementen in de array sorteert voordat ze worden afgedrukt.
        // Implementeer een eenvoudige sorteeralgoritme, zoals bubble sort of selection sort, direct binnen deze functie.
        // Nadat de array is gesorteerd, druk dan de gesorteerde array af met een boodschap die aangeeft dat het gesorteerd is.
        // Tip: Wees voorzichtig met het sorteren van de originele array, aangezien dit de data voor andere functies kan wijzigen.
        // Overweeg een kopie van de array te maken en deze te sorteren, of bespreek met je docent of het sorteren van de originele array acceptabel is.
        // Voorbeeld van een eenvoudige bubble sort implementatie voor het sorteren van de array:
        //for (int i = 0; i < grootte - 1; i++) {
        //    for (int j = 0; j < grootte - i - 1; j++) {
        //        if (arr[j] > arr[j + 1]) {
        //            // Wissel arr[j] en arr[j + 1]
        //           int temp = arr[j];
        //            arr[j] = arr[j + 1];
        //            arr[j + 1] = temp;
        //        }
        //    }
        //}
        //std::cout << "Gesorteerde elementen in de array: ";
        //for (int i = 0; i < grootte; i++) {
        //    std::cout << arr[i] << " ";
        //}
        //std::cout << std::endl;

        // Nu is het aan jou om een sorteeralgoritme te implementeren en de array te sorteren voordat je de elementen afdrukt.
    }

    // Deel 6: Extra
    void printVectorElementen(const std::vector<int> &vec) {
        std::cout << "Elementen in de vector: ";
        for (int num: vec) {
            std::cout << num << " ";
        }
        std::cout << std::endl;

        // Voeg functionaliteit toe om de vector op unieke waarden te controleren voordat deze wordt afgedrukt.
        // Schrijf een functie die bepaalt of alle elementen in de vector uniek zijn.
        // Als alle waarden uniek zijn, druk dan een boodschap af zoals "Alle elementen zijn uniek.".
        // Als er duplicaten zijn, druk dan een boodschap af die aangeeft "Er zijn duplicaten in de vector.".
        // Overweeg het gebruik van een set uit de Standard Template Library (STL) om duplicaten te controleren.
        // Dit leert je hoe je andere STL-containers kunt gebruiken en hoe je efficiëntie in je code kunt brengen.
        // std::unordered_set<int> checker(vec.begin(), vec.end());
        // if (checker.size() == vec.size()) {
        //    std::cout << "Alle elementen zijn uniek." << std::endl;
        // } else {
        //    std::cout << "Er zijn duplicaten in de vector." << std::endl;
        // }

        // Extra uitdaging: Implementeer een andere versie van de functie die, in plaats van te controleren op unieke elementen,
        // de vector sorteert met behulp van de std::sort functie uit de <algorithm> bibliotheek.
        // Druk vervolgens de gesorteerde vector af. Dit zal helpen om het sorteren en het gebruik van algoritmen in C++ te oefenen.
    }

    // Deel 7: Extra
    void voegElementToeAanVector(std::vector<int> &vec, int element) {
        // Eerst controleren we of het element al in de vector aanwezig is.
        auto it = std::find(vec.begin(), vec.end(), element);
        if (it != vec.end()) {
            std::cout << "Element " << element << " bestaat al in de vector. Toevoegen overgeslagen." << std::endl;
        } else {
            vec.push_back(element); // Voegt een element toe aan het einde van de vector
            std::cout << "Element toegevoegd aan vector: " << element << std::endl;
        }

        // Voeg functionaliteit toe om de vector te sorteren na elk toegevoegd element, zodat de vector altijd gesorteerd blijft.
        // Nadat je hebt gecontroleerd of het element niet al in de vector staat en het hebt toegevoegd,
        // gebruik je de std::sort functie uit de <algorithm> bibliotheek om de vector te sorteren.
        // Laat vervolgens zien hoe de gesorteerde vector eruitziet na elk toegevoegd element.
        // Tip: Dit helpt je om te leren hoe je vectoren kunt manipuleren en effectief gebruik kunt maken van de STL.
        // std::sort(vec.begin(), vec.end()); // Sorteert de vector
        // std::cout << "Gesorteerde vector: ";
        // for (int num : vec) {
        //     std::cout << num << " ";
        // }
        // std::cout << std::endl;
    }


    // Deel 8: Extra functie om te controleren of een array gesorteerd is
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

        // Voeg functionaliteit toe die niet alleen controleert of de array gesorteerd is in oplopende volgorde,
        // maar ook de mogelijkheid biedt om te controleren op aflopende volgorde.
        // Dit vereist het aanpassen van de functiesignatuur om een extra parameter te accepteren die de sorteervolgorde specificeert.
        // Bijvoorbeeld, je kunt een boolean parameter 'oplopend' toevoegen waarbij true staat voor oplopende volgorde en false voor aflopende volgorde.
        // Pas de implementatie van de functie aan om deze nieuwe functionaliteit te ondersteunen.
        // Tip: Je moet de logica binnen de for-lus aanpassen om rekening te houden met de gewenste sorteervolgorde.
        // Overweeg hoe je deze functie zou kunnen gebruiken in een grotere applicatie, bijvoorbeeld voor het valideren van gebruikersinvoer of het voorbereiden van data voor verdere verwerking.
    }

    // Deel 9: Extra
    void sorteerDeckKaarten() {
        std::vector<int> deck = {5, 3, 8, 1, 2, 9, 4, 7, 6, 0}; // Een vector die een deck kaarten voorstelt
        // Voegt een parameter toe aan de functie voor sorteervolgorde, of laat de gebruiker kiezen
        char volgorde;
        std::cout << "Kies de sorteervolgorde (o = oplopend, a = aflopend): ";
        std::cin >> volgorde;

        if (volgorde == 'o') {
            std::sort(deck.begin(), deck.end()); // Sorteert het deck in oplopende volgorde
        } else if (volgorde == 'a') {
            std::sort(deck.begin(), deck.end(), std::greater<int>()); // Sorteert het deck in aflopende volgorde
        }

        std::cout << "Gesorteerde deck: ";
        for (int kaart: deck) {
            std::cout << kaart << " ";
        }
        std::cout << std::endl;

        // Breid de functionaliteit uit door het toevoegen van een custom sorteerfunctie die bepaalt hoe kaarten worden gesorteerd.
        // Bijvoorbeeld, sorteer op even en oneven kaarten, waarbij alle even kaarten voor de oneven kaarten komen.
        // Implementeer deze sorteerfunctie met behulp van een lambda uitdrukking binnen std::sort.
        // Dit introduceert je aan het concept van custom sorteer criteria en het gebruik van lambda's voor flexibele sorteerlogica.
        // Voorbeeld van een lambda voor het sorteren van even en oneven:
        // std::sort(deck.begin(), deck.end(), [](int a, int b) {
        //     // Even nummers komen voor oneven nummers
        //     if (a % 2 == 0 && b % 2 != 0) return true;
        //     if (a % 2 != 0 && b % 2 == 0) return false;
        //     // Binnen de even en oneven groepen, sorteer oplopend
        //   return a < b;
        // });
        // std::cout << "Deck gesorteerd op even en oneven: ";
        // for (int kaart : deck) {
        //     std::cout << kaart << " ";
        // }
        // std::cout << std::endl;
    }

    // Deel 10: Extra
    void sorteerMaterialenVoorToren() {
        int materialen[] = {5, 3, 8, 1, 2}; // Een array van materialen, voorgesteld door getallen
        int grootte = sizeof(materialen) / sizeof(materialen[0]); // Bereken de grootte van de array

        // Vraag de gebruiker om de sorteervolgorde
        char volgorde;
        std::cout << "Kies de sorteervolgorde (o = oplopend, a = aflopend): ";
        std::cin >> volgorde;

        if (volgorde == 'o') {
            std::sort(materialen, materialen + grootte); // Sorteert de materialen in oplopende volgorde
        } else if (volgorde == 'a') {
            std::sort(materialen, materialen + grootte,
                      std::greater<int>()); // Sorteert de materialen in aflopende volgorde
        }

        std::cout << "Gesorteerde materialen voor toren: ";
        for (int i = 0; i < grootte; i++) {
            std::cout << materialen[i] << " ";
        }
        std::cout << std::endl;

        // Voeg een zoekfunctionaliteit toe die controleert of een specifiek materiaal (voorgesteld door een getal) aanwezig is in de gesorteerde array.
        // Vraag de gebruiker om een getal en gebruik std::find uit de <algorithm> bibliotheek om te controleren of het getal in de array voorkomt.
        // Print een passende boodschap uit afhankelijk van of het materiaal gevonden is of niet.
        // Dit leert je hoe je standaardalgoritmen kunt gebruiken voor zoekoperaties binnen arrays.
        // int gezochtMateriaal;
        // std::cout << "Voer het materiaal in dat je zoekt: ";
        // std::cin >> gezochtMateriaal;
        // auto resultaat = std::find(materialen, materialen + grootte, gezochtMateriaal);
        // if (resultaat != materialen + grootte) {
        //     std::cout << "Materiaal " << gezochtMateriaal << " is beschikbaar voor de torenbouw." << std::endl;
        // } else {
        //     std::cout << "Materiaal " << gezochtMateriaal << " is niet beschikbaar." << std::endl;
        // }
    }
};

#endif //BEGINNER_OLESSON5_H
