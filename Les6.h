//
// Created by rikpe on 09/10/2023.
//

#include <iostream>

#ifndef BEGINNER_LESSON6_H
#define BEGINNER_LESSON6_H

// Een pointer is als een schatkaart in de wereld van het programmeren! Stel je voor, je hebt een doos en in die doos stop je een speelgoedauto.
// Nu wil je een vriend vertellen waar je speelgoedauto is, maar in plaats van hem de doos te geven, geef je hem een schatkaart die hem naar de doos leidt. Die schatkaart is als een pointer.

// Opslaan van een adres:
// Een pointer is een speciaal type variabele dat het adres van een andere variabele opslaat in plaats van een gewone waarde.
// Het adres is de locatie in het geheugen van de computer waar die andere variabele is opgeslagen.

// Waarde op het adres bekijken (dereferencing):
// Met de pointer kun je ook kijken wat er op dat adres staat. Dit heet "dereferencing".
// Het is als het volgen van de schatkaart om te zien wat er in de doos zit.

// Veranderen van de waarde op het adres:
// Als je de waarde van de variabele wilt veranderen via de pointer, kan dat ook!
// Het is alsof je de schatkaart volgt naar de doos, het speelgoedautootje eruit haalt en er een knuffeldier in stopt.
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
