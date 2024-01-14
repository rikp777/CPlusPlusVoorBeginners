//
// Created by rikpe on 09/10/2023.
//

#include <iostream>

#ifndef BEGINNER_LESSON6_H
#define BEGINNER_LESSON6_H

// In Les 6 verkennen we de wereld van pointers en referenties.
// Deze concepten zijn essentieel in C++ en bieden krachtige mogelijkheden om met geheugen en variabelen om te gaan.
// Laten we eens kijken wat er in je code gebeurt:

// Pointers - Het Begrijpen van Adressen en Dereferencing:
// Denk aan een pointer als een schatkaart die je de locatie (het adres) van een schat (de variabele) in het geheugen laat zien.
// De pointerUitleg() functie demonstreert het opslaan van een adres in een pointer en hoe je de waarde op dat adres kunt bekijken (dereferencing).
// Het is alsof je de schatkaart volgt om te zien wat er in de doos (de variabele) zit.

// Referenties - Werken met Originele Variabelen:
// Wanneer je een referentie gebruikt, zoals in de verdubbel() functie, werk je direct met de originele variabele, niet met een kopie.
// Wijzigingen die je aanbrengt via de referentie, beïnvloeden de originele variabele.
// Dit is te vergelijken met het geven van instructies aan iemand om een object in een doos te veranderen.
// Je verandert het originele object, niet een kopie ervan.

// Dynamisch Geheugenbeheer - Het Gebruik van Pointers voor Arrays:
// De maakArray() functie illustreert hoe je dynamisch geheugen kunt toewijzen voor een array met behulp van pointers.
// Dit geeft je de flexibiliteit om de grootte van de array tijdens runtime te bepalen.
// Het is belangrijk om na gebruik van dynamisch toegewezen geheugen dit weer vrij te geven met delete[].
// Dit voorkomt geheugenlekken, wat gebeurt als geheugen dat niet meer nodig is, niet wordt teruggegeven aan het systeem.

// Door deze concepten te begrijpen en correct toe te passen, kun je efficiënter omgaan met geheugen en complexere datastructuren en algoritmen in C++ hanteren.
class Les6 {
    public:
    void runMijnCode(){

        pointerUitleg();

        int waarde = 5;  // We maken een nieuwe variabele aan met waarde 5
        int resultaat = verdubbel(waarde);  // We roepen de functie 'verdubbel' aan en geven 'waarde' door als een referentie

        std::cout << "Verdubbeld: " << resultaat << std::endl;  // We laten het verdubbelde resultaat zien
        std::cout << "Waarde: " << waarde << std::endl;  // De oorspronkelijke waarde is nu ook verdubbeld omdat we een referentie hebben gebruikt

        int* array = maakArray(5);  // We roepen de functie 'maakArray' aan om een nieuwe array te maken
        for (int i = 0; i < 5; i++) {  // We lopen door de array en laten elke waarde zien
            std::cout << array[i] << " ";  // We laten de waarde van elke positie in de array zien
        }
        delete[] array;  // We geven het geheugen terug dat we hebben gebruikt voor de array, dit is heel belangrijk!
    }

    void pointerUitleg(){
        int getal = 10;  // We maken een gewone integer variabele aan met waarde 10
        int* pointer = &getal;  // We maken een pointer aan die het adres van 'getal' opslaat

        std::cout << "Waarde van getal: " << getal << std::endl;  // We laten de waarde van 'getal' zien
        std::cout << "Adres van getal: " << pointer << std::endl;  // We laten het adres van 'getal' zien
        std::cout << "Waarde op het adres: " << *pointer << std::endl;  // We laten de waarde zien die op het adres van 'getal' staat, dit heet dereferencing

    }

    int verdubbel(int& ref) {  // Deze functie neemt een referentie als parameter, dus wijzigingen in 'ref' veranderen de oorspronkelijke variabele
        ref *= 2;  // We verdubbelen de waarde van 'ref'
        return ref;  // We sturen de verdubbelde waarde terug
    }

    int* maakArray(int grootte) {  // Deze functie maakt een nieuwe array van de opgegeven grootte
        int* newArr = new int[grootte];  // We wijzen geheugen toe voor een nieuwe array
        for (int i = 0; i < grootte; i++) {  // We lopen door de nieuwe array en vullen deze met waarden
            newArr[i] = i + 1;  // We zetten het getal i + 1 op elke positie in de array
        }
        return newArr;  // We sturen de pointer naar de nieuwe array terug
    }
};


#endif //BEGINNER_LESSON6_H
