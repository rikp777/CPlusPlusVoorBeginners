//
// Created by rikpe on 09/10/2023.
//

#include <iostream>

#ifndef BEGINNER_LESSON2_H
#define BEGINNER_LESSON2_H

// In deze code leer je over operatoren en vergelijkingen in C++.
// Dit zijn als gereedschappen die je helpen om wiskundige problemen op te lossen en dingen te vergelijken. Laten we eens kijken wat er in je code gebeurt:

//Operatoren:

// Stel je voor, je hebt twee stapels snoepjes, één met 10 snoepjes en de andere met 20 snoepjes.
// De operatoren helpen je om te berekenen hoeveel snoepjes je hebt als je ze samenlegt, van elkaar afhaalt, met elkaar vermenigvuldigt, enzovoort.
// Dus in de functie operators:
// + helpt je om de snoepjes samen te voegen: a + b is 10 + 20 = 30 snoepjes.
// - helpt je om de snoepjes van elkaar af te trekken: a - b is 10 - 20 = -10 (je hebt een tekort van 10 snoepjes).
// * helpt je om de snoepjes met elkaar te vermenigvuldigen: a * b is 10 * 20 = 200 snoepjes (als je 10 groepen van 20 snoepjes hebt).
// / helpt je om de snoepjes te delen: b / a is 20 / 10 = 2 (elke groep krijgt 2 snoepjes).
// % helpt je om de resterende snoepjes te vinden na het delen: b % a is 20 % 10 = 0 (er zijn geen overgebleven snoepjes).

//Vergelijkingen:

// Nu stel je voor dat je twee dozen hebt, één met 5 knikkers en de andere met 10 knikkers. Je wilt weten welke doos meer knikkers heeft, of ze hetzelfde aantal knikkers hebben, enzovoort. In de functie vergelijk:
// == helpt je om te zien of de dozen hetzelfde aantal knikkers hebben: x == y controleert of 5 gelijk is aan 10 (dit is niet waar).
// != helpt je om te zien of de dozen een verschillend aantal knikkers hebben: x != y controleert of 5 verschillend is van 10 (dit is waar).
// < helpt je om te zien of de ene doos minder knikkers heeft dan de andere: x < y controleert of 5 kleiner is dan 10 (dit is waar).
// > helpt je om te zien of de ene doos meer knikkers heeft dan de andere: x > y controleert of 5 groter is dan 10 (dit is niet waar).
// Je gebruikt ook && (EN) en || (OF) om twee vergelijkingen tegelijk te controleren. Dus als je wilt weten of één doos minder knikkers heeft EN de knikkers verschillend zijn, zou je (x < y) && (x != y) gebruiken.
class Les2 {
public:
    void runMijnCode() {
        operators();
        vergelijk();
    }


    // Operators:
    // Operators zijn symbolen die we gebruiken om dingen te doen met variabelen.
    // De meest voorkomende zijn + voor optellen, - voor aftrekken, * voor vermenigvuldigen, / voor delen en % voor de rest.
    void operators() {
        int a = 10;
        int b = 20;

        int som = a + b;  // We tellen a en b op en stoppen het resultaat in de doos 'som'
        int verschil = a - b;  // We trekken b van a af en stoppen het resultaat in de doos 'verschil'
        int product = a * b;  // We vermenigvuldigen a en b en stoppen het resultaat in de doos 'product'
        int quotient = b / a;  // We delen b door a en stoppen het resultaat in de doos 'quotient'
        int rest = b % a;  // We vinden de rest van b gedeeld door a en stoppen het in de doos 'rest'

        // Nu printen we de resultaten op het scherm
        std::cout <<
        "Som: " << som <<
        ", Verschil: " << verschil <<
        ", Product: " << product<<
        ", Quotient: " << quotient <<
        ", Rest: " << rest << std::endl;
    }

    // Vergelijkingen:
    // Vergelijkingen zijn operatoren die we gebruiken om te controleren of twee waarden gelijk zijn, of de ene groter of kleiner is dan de andere.
    void vergelijk() {
        int x = 5;
        int y = 10;

        bool isGelijk = (x == y);  // We controleren of x gelijk is aan y
        bool isNietGelijk = (x != y);  // We controleren of x niet gelijk is aan y
        bool isKleiner = (x < y);  // We controleren of x kleiner is dan y
        bool isGroter = (x > y);  // We controleren of x groter is dan y

        // Nu gaan we twee voorwaarden tegelijk controleren met logische operatoren
        bool beideWaar = (x < y) && (x != y);  // We controleren of x kleiner is dan y EN x niet gelijk is aan y
        bool eenWaar = (x < y) || (x > y);  // We controleren of x kleiner is dan y OF x groter is dan y

        // Print de resultaten
        std::cout << std::boolalpha;  // Dit zorgt ervoor dat 'true' en 'false' worden afgedrukt in plaats van '1' en '0'
        std::cout <<
        "Is Gelijk: " << isGelijk <<
        ", Is Niet Gelijk: " << isNietGelijk <<
        ", Is Kleiner: " << isKleiner<<
        ", Is Groter: " << isGroter <<
        ", Beide Waar: " << beideWaar <<
        ", Een Waar: " << eenWaar
        << std::endl;
    }
};


#endif //BEGINNER_LESSON2_H
