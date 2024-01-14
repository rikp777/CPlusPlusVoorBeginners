//
// Created by rikpe on 09/10/2023.
//
#include <iostream>  // Dit is een bibliotheek waarmee we dingen op het scherm kunnen schrijven

#ifndef BEGINNER_LESSON4_H  // We controleren of BEGINNER_LESSON4_H nog niet is gedefinieerd
#define BEGINNER_LESSON4_H  // We definiëren BEGINNER_LESSON4_H

// Uitleg over functies

// In Les 4 richten we ons op het begrijpen van functies en het verdiepen van onze kennis over operatoren.
// Dit zal je helpen complexere taken in je programma's uit te voeren en je code efficiënter te organiseren.
// Laten we eens kijken wat er in je code gebeurt:

// Functies - zegHallo(), stoplicht(), optellen(), aftrekken(), vermenigvuldigen(), delen():
// Functies zijn als gereedschap dat je helpt om specifieke taken uit te voeren.
// We hebben verschillende functies gecreëerd voor verschillende taken,
// zoals het begroeten van de wereld, het controleren van een stoplicht, en basis rekenkundige operaties.
// Elke functie voert een specifieke actie uit en retourneert een resultaat, wat ons helpt om onze code te modulariseren en herbruikbaar te maken.

// Geavanceerde Operatoren - operatorsHerhaling():
// Deze functie herhaalt het gebruik van operatoren zoals vergelijkingsoperatoren (<, >, ==, !=, enz.) en logische operatoren (&&, ||, !).
// We gebruiken deze operatoren om complexere condities te creëren,
// zoals het vergelijken van meerdere variabelen en het combineren van verschillende condities in één statement.
// Dit is als het spelen met een set van legoblokjes, waarbij elke operator helpt om een complexer beeld te bouwen.

// Toepassingsvoorbeelden - plussen() en scenario's in operatorsHerhaling():
// De plussen() functie toont hoe je increment- en decrementoperatoren (++, --) kunt gebruiken.
// In operatorsHerhaling() verkennen we hoe je operatoren kunt combineren om complexe logische condities te evalueren,
// zoals in verkeerslichtscenario's en het vergelijken van meerdere getallen om het grootste te vinden.

// Door deze functies en operatoren te begrijpen en correct te gebruiken, kun je effectiever problemen oplossen en je vaardigheden in het programmeren met C++ aanzienlijk verbeteren.
class Les4 { // We beginnen een nieuwe klasse genaamd Les4
public: // Dit betekent dat iedereen deze dingen kan gebruiken
    void runMijnCode() { // Dit is waar onze code begint
        zegHallo(); // We roepen de functie aan en zeggen "Hallo Wereld!"
        stoplicht(); // We roepen de functie aan en zeggen "Doorrijden!" of "Stoppen!"

        int resultaat2 = doeIets(10, 3);  // We roepen de functie 'doeIets' aan en slaan het resultaat op in resultaat2
        std::cout << "Het resultaat is: " << resultaat2 << std::endl;  // We laten het resultaat zien

        // Roep hier je functies aan
        int som = optellen(10, 20);  // We tellen 10 en 20 op en slaan het op in som
        int verschil = aftrekken(20, 10);  // We trekken 10 af van 20 en slaan het op in verschil
        int product = vermenigvuldigen(5, 4);  // We vermenigvuldigen 5 met 4 en slaan het op in product
        float quotient = delen(20, 5);  // We delen 20 door 5 en slaan het op in quotient

        // Druk de resultaten af
        std::cout << "Som: " << som << std::endl;  // We laten de som zien
        std::cout << "Verschil: " << verschil << std::endl;  // We laten het verschil zien
        std::cout << "Product: " << product << std::endl;  // We laten het product zien
        std::cout << "Quotient: " << quotient << std::endl;  // We laten het quotient zien

        plussen(); // We roepen de functie aan en zeggen "Het nummer is: 10" en "Het nummer is: 11"
        operatorsHerhaling();
    }

     // Dit is de definitie van onze functie
    void zegHallo() {  // 'void' betekent dat de functie niets teruggeeft
        std::cout << "Hallo Wereld!" << std::endl;  // We zeggen "Hallo Wereld!"
    }

    void stoplicht(){
        bool rood_licht = false;
        bool groen_licht = false;

        if(rood_licht == true){
            std::cout << "Stoppen!" << std::endl;
        }else{
            std::cout << "Doorrijden!" << std::endl;
        }

        if(groen_licht){ // dit is hetzelfde als groen_licht == true
            std::cout << "Doorrijden! het licht is groen" << std::endl;
        } else {
            std::cout << "Stoppen! het licht is niet groen" << std::endl;
        }
    }

    int verschil(int a, int b) {  // Deze functie berekent het verschil tussen a en b
        return a - b;  // We sturen het verschil terug
    }

    int doeIets(int x, int y) {  // Deze functie doet iets met x en y
        int diff = verschil(x, y);  // We berekenen het verschil tussen x en y
        return diff * 2;  // We sturen het dubbele van het verschil terug
    }

    int optellen(int a, int b) {  // Deze functie telt a en b op
        return a + b;  // We sturen de som terug
    }

    int aftrekken(int a, int b) {  // Deze functie trekt b af van a
        return a - b;  // We sturen het verschil terug
    }

    int vermenigvuldigen(int a, int b) {  // Deze functie vermenigvuldigt a en b
        return a * b;  // We sturen het product terug
    }

    float delen(int a, int b) {  // Deze functie deelt a door b
        if (b != 0) {  // We controleren of b niet nul is, omdat delen door nul niet mag
            return float(a) / float(b);  // We delen a door b en sturen het resultaat terug
        } else {
            std::cout << "Delen door nul is niet toegestaan!" << std::endl;  // We laten weten dat delen door nul niet mag
            return 0;  // We sturen 0 terug als b nul is
        }
    }

    void plussen(){
        int nummer = 10;

        std::cout << "Het nummer is: (en gaat daarna optellen)" << nummer++ << std::endl;
        std::cout << "Het nummer is: " << nummer << std::endl;


        std::cout << "Het nummer is: (en gaat daarna aftellen)" << nummer-- << std::endl;
        std::cout << "Het nummer is: " << nummer << std::endl;
    }


    void operatorsHerhaling(){
        int nummer1 = 10;
        int nummer2 = 20;

        std::cout << "nummer1 < nummer2: " << (nummer1 < nummer2) << std::endl;
        std::cout << "nummer1 <= nummer2: " << (nummer1 <= nummer2) << std::endl;
        std::cout << "nummer1 > nummer2: " << (nummer1 > nummer2) << std::endl;
        std::cout << "nummer1 >= nummer2: " << (nummer1 >= nummer2) << std::endl;
        std::cout << "nummer1 == nummer2: " << (nummer1 == nummer2) << std::endl;
        std::cout << "nummer1 != nummer2: " << (nummer1 != nummer2) << std::endl;

        bool isGroter = nummer1 > nummer2; // hier stoppen we de conditie in een bakje / variable

        std::cout << "isGroter: " << isGroter << std::endl;

        bool a = true;
        bool b = false;
        bool c = true;

        std::cout << "a && b: " << (a && b) << std::endl; // && betekent en. het resultaat is alleen true als beide waardes true zijn
        std::cout << "a || c: " << (a || c) << std::endl; // || betekent of. het resultaat is alleen false als beide waardes false zijn
        std::cout << "a && b && c: " << (a && b && c) << std::endl; // && betekent en. het resultaat is alleen true als alle waardes true zijn

        //iets ingewikkelder
        std::cout << "!(a && b) || c: " << (!(a && b) || c) << std::endl; // ! betekent niet. het resultaat is alleen true als de waarde false is

        int d = 45;
        int e = 20;
        int f = 11;

        std::cout << "Alle waardes: " << std::endl;
        std::cout << "d: " << d << std::endl;
        std::cout << "e: " << e << std::endl;
        std::cout << "f: " << f << std::endl;

        std::cout << "(d > e) && (d > f): " << ((d > e) && (d > f)) << std::endl;
        std::cout << "(d == e) || (e <= f): " << ((d == e) || (e <= f)) << std::endl;
        std::cout << "(d < e) || (d > f): " << ((d < e) || (d > f)) << std::endl;
        std::cout << "(f > e) || (d < f): " << ((f > e) || (d < f)) << std::endl;
        std::cout << "(d > f) && (f <= d): " << ((d > f) && (f <= d)) << std::endl;
        std::cout << "(d > e) && (d <= f): " << ((d > e) && (d <= f)) << std::endl;
        std::cout << "(! a) && (d == e): " << ((! a) && (d == e)) << std::endl;


        bool stopLichtGroen = true;
        bool politieStop = false;

        if(stopLichtGroen && !politieStop){
            std::cout << "Doorrijden!" << std::endl;
        } else {
            std::cout << "Stoppen!" << std::endl;
        }

        if (d >= e && d >= f) {
            std::cout << "Het grootste getal is: " << a << std::endl;
        } else if (b >= a && b >= c) {
            std::cout << "Het grootste getal is: " << b << std::endl;
        } else {
            std::cout << "Het grootste getal is: " << c << std::endl;
        }
    }
};


#endif //BEGINNER_LESSON4_H
