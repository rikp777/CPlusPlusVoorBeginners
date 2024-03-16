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
    void runMijnCode() { // Dit is het startpunt van onze code.
        zegHallo(); // We roepen de functie 'zegHallo' aan om "Hallo Wereld!" af te drukken.
        stoplicht(); // We roepen de functie 'stoplicht' aan om te bepalen of we moeten doorrijden of stoppen.

        // We roepen de functie 'doeIets' aan met twee getallen en slaan het resultaat op in 'resultaat'.
        int resultaat = doeIets(10, 3);
        std::cout << "Het resultaat van doeIets is: " << resultaat << std::endl;

        // Hier roepen we andere rekenkundige functies aan.
        int som = optellen(10, 20);  // We tellen 10 en 20 op en slaan het op in som
        int verschil = aftrekken(20, 10);  // We trekken 10 af van 20 en slaan het op in verschil
        int product = vermenigvuldigen(5, 4);  // We vermenigvuldigen 5 met 4 en slaan het op in product
        float quotient = delen(20, 5);  // We delen 20 door 5 en slaan het op in quotient

        // We drukken de resultaten van deze berekeningen af.
        std::cout << "Som: " << som << std::endl;  // We laten de som zien
        std::cout << "Verschil: " << verschil << std::endl;  // We laten het verschil zien
        std::cout << "Product: " << product << std::endl;  // We laten het product zien
        std::cout << "Quotient: " << quotient << std::endl;  // We laten het quotient zien

        plussen(); // We demonstreren de increment- en decrementoperatoren.
        operatorsHerhaling(); // We herhalen de verschillende operatoren en hun gebruik.
        leeftijdsCategorie(17);
        priemgetallenTussen(12, 150);
    }

    // Deze functie zegt "Hallo Wereld!".
    void zegHallo() {
        std::cout << "Hallo Wereld!" << std::endl;  // We zeggen "Hallo Wereld!"
    }

    // Deze functie controleert of we moeten stoppen of doorrijden op basis van de kleur van het stoplicht.
    void stoplicht() {
        bool rood_licht = false;
        bool groen_licht = false;

        // We gebruiken 'if' om te beslissen wat we moeten doen:
        if (rood_licht == true) {
            std::cout << "Stoppen!" << std::endl;
        } else {
            std::cout << "Doorrijden!" << std::endl;
        }

        // 'if' kijkt of iets waar is of niet:
        if (groen_licht) { // dit is hetzelfde als groen_licht == true
            std::cout << "Doorrijden! het licht is groen" << std::endl;
        } else {
            std::cout << "Stoppen! het licht is niet groen" << std::endl;
        }
    }

    // Deze functie bepaalt het verschil tussen twee getallen.
    int verschil(int a, int b) {  // We noemen de twee getallen die we gaan vergelijken 'a' en 'b'.
        // Hier berekenen we het verschil tussen 'a' en 'b'.
        // Als 'a' groter is dan 'b', is het resultaat positief.
        // Als 'b' groter is dan 'a', is het resultaat negatief.
        return a - b; // Het berekende verschil wordt teruggestuurd naar wie de functie heeft aangeroepen.

        // Bijvoorbeeld: als 'a' 10 is en 'b' 3, dan zal het resultaat 7 zijn (want 10 - 3 = 7).
        // Als 'a' 3 is en 'b' 10, dan zal het resultaat -7 zijn (want 3 - 10 = -7).

        // De 'return' instructie hier doet twee dingen:
        // 1. Het stopt de uitvoering van de functie.
        // 2. Het stuurt de waarde van 'a - b' terug naar de plek in de code waar de functie 'verschil' werd aangeroepen.
        // Deze teruggegeven waarde kan dan worden gebruikt in de rest van het programma, bijvoorbeeld om het te printen of in verdere berekeningen.
    }

    // Functiebeschrijving: 'doeIets' neemt twee getallen 'x' en 'y', berekent het verschil tussen deze twee getallen, en verdubbelt vervolgens het resultaat.
    int doeIets(int x, int y) { // 'x' en 'y' zijn de twee getallen waarmee we gaan werken.
        // 'x' en 'y' zijn de parameters van de functie, wat betekent dat dit de waarden zijn waarmee de functie zal werken.

        // Stap 1: Bereken het verschil tussen 'x' en 'y'.
        // Eerst roepen we de functie 'verschil' aan om het verschil tussen 'x' en 'y' te berekenen.
        int uitkomst = verschil(x, y);  // 'uitkomst' slaat het berekende verschil op.
        // De waarde die terugkomt van 'verschil(x, y)' wordt opgeslagen in de variabele 'uitkomst'.

        // Stap 2: Verdubbel het berekende verschil.
        // Dit betekent dat we het verschil nemen en met 2 vermenigvuldigen.
        return uitkomst * 2; // We sturen het dubbele van het verschil terug.
        // Met 'return' sturen we het resultaat van 'uitkomst * 2' terug naar de plek waar de functie 'doeIets' werd aangeroepen.

        // Bijvoorbeeld: als 'x' 6 is en 'y' 4, dan is het verschil 2 (want 6 - 4 = 2).
        // Het dubbele van dit verschil is 4 (want 2 * 2 = 4), en dat is wat we terugsturen.
    }

    // De functie 'optellen' neemt twee getallen en telt ze bij elkaar op.
    int optellen(int a, int b) { // 'a' en 'b' zijn de getallen die we gaan optellen.
        // Hier voeren we de optelling uit. We nemen 'a' en voegen 'b' toe.
        return a + b; // Het resultaat van 'a' plus 'b' sturen we terug.
        // Met 'return' sturen we het resultaat van 'a + b' terug naar de plek in het programma waar 'optellen' werd aangeroepen.

        // Voorbeeld:
        // Stel dat 'a' de waarde 4 heeft en 'b' de waarde 5. Wanneer deze functie wordt aangeroepen met deze waarden,
        // zal 'a + b' gelijk zijn aan 9 want (4 + 5 = 9). Dus, de 'return' instructie geeft 9 terug als het resultaat van de functie 'optellen'.
        // Dit resultaat kan vervolgens gebruikt worden voor verdere berekeningen of om af te drukken voor de gebruiker.
    }

    // De functie 'aftrekken' neemt twee getallen, 'a' en 'b', en berekent het verschil.
    int aftrekken(int a, int b) { // 'a' is het getal waarvan we 'b' gaan aftrekken.
        // 'a' en 'b' zijn de parameters van de functie. Deze representatieve waarden worden gebruikt om de aftrekking uit te voeren.
        // In deze regel voeren we de aftrekking uit. We nemen 'a' en trekken 'b' ervan af.
        return a - b; // Het resultaat van 'a' min 'b' sturen we terug.

        // Met de 'return' instructie geven we het resultaat van de bewerking 'a - b' terug aan de rest van het programma.
        // Dit maakt het resultaat beschikbaar voor verdere verwerking of voor weergave aan de gebruiker.

        // Voorbeeldscenario:
        // Stel, 'a' is 10 en 'b' is 3. Wanneer 'aftrekken(10, 3)' wordt uitgevoerd,
        // voert de functie intern de bewerking 10 - 3 uit, wat resulteert in 7.
        // De functie stuurt dan 7 terug als het resultaat van deze bewerking.
        // Dit resultaat, 7, kan vervolgens gebruikt worden voor andere doeleinden binnen het programma, zoals verdere berekeningen of om te tonen aan de gebruiker.

        // Het gebruik van deze functie demonstreert een essentieel programmeringsprincipe: modulariteit.
        // Door functies te creëren voor specifieke taken (in dit geval het aftrekken van twee getallen),
        // kan code op een schone, georganiseerde manier worden gestructureerd, wat zorgt voor betere leesbaarheid, onderhoudbaarheid, en herbruikbaarheid.
    }

    // De functie 'vermenigvuldigen' neemt twee getallen, 'a' en 'b', en vermenigvuldigt ze.
    int vermenigvuldigen(int a, int b) { // 'a' en 'b' zijn de getallen die we gaan vermenigvuldigen.
        // 'a' en 'b' zijn parameters van deze functie. Dit betekent dat wanneer je de functie aanroept, je specifieke waarden voor 'a' en 'b' moet opgeven.
        // Hier wordt de vermenigvuldiging uitgevoerd. We nemen 'a' en vermenigvuldigen het met 'b'.
        return a * b; // Het resultaat van 'a' keer 'b' sturen we terug.
        // Met de 'return' instructie geven we het product van 'a' en 'b' terug aan het deel van het programma dat de functie 'vermenigvuldigen' aanroept.

        // Bijvoorbeeld: als 'a' 4 is en 'b' 5, dan zal het resultaat 20 zijn (want 4 * 5 = 20).
        // Dit is handig voor het berekenen van bijvoorbeeld oppervlaktes, waar je lengte keer breedte doet.

        // Stel je voor dat we later besluiten dat we altijd een bepaalde controle willen uitvoeren voordat we vermenigvuldigen,
        // bijvoorbeeld controleren of een van de getallen niet nul is, of een logboek willen bijhouden van alle vermenigvuldigingsacties,
        // dan kunnen we die logica hier toevoegen. Dit betekent dat de aanpassing slechts eenmaal hoeft te gebeuren,
        // in plaats van overal in de code waar we vermenigvuldigen.
    }

    // De functie 'delen' deelt getal 'a' door getal 'b'.
    float delen(int a, int b) { // 'a' en 'b' zijn de getallen waar we mee werken.
        // Het eerste wat we doen is een veiligheidscontrole implementeren om te voorkomen dat het programma probeert te delen door nul.
        // Delen door nul is wiskundig ongedefinieerd en zou in de context van een programma tot fouten of onvoorspelbaar gedrag kunnen leiden.
        if (b == 0) { // Als 'b' nul is, kunnen we niet delen.
            std::cout << "Delen door nul is niet toegestaan!" << std::endl;
            return 0; // In het geval dat 'b' gelijk is aan nul, beëindigen we de functie vroegtijdig en geven we een veilige waarde terug, in dit geval 0.
        }

        // Als 'b' niet gelijk is aan nul, voeren we de deling veilig uit.
        // We zetten zowel 'a' als 'b' om naar 'float' om ervoor te zorgen dat we een zwevendekommagetalle (float) als resultaat krijgen.
        // Dit is belangrijk voor situaties waarin het resultaat een decimaalgetal zou zijn, wat vaak het geval is bij delingen.
        return float(a) / float(b);  // Het resultaat van 'a' gedeeld door 'b' sturen we terug.
    }

    // De functie 'plussen' demonstreert het gebruik van increment (++) en decrement (--) operatoren.
    void plussen() {
        int nummer = 10; // We starten met een variabele 'nummer' met de waarde 10.

        // Eerst gebruiken we de increment operator (++). Deze verhoogt de waarde van 'nummer' met één.
        // Let op: de operator staat na de variabele ('nummer++'), dus de verhoging gebeurt na het printen.
        std::cout << "Het nummer is: (en gaat daarna optellen)" << nummer++ << std::endl;
        // Nu is 'nummer' 11 omdat we het net verhoogd hebben.
        std::cout << "Het nummer is: " << nummer << std::endl;

        // Vervolgens gebruiken we de decrement operator (--). Deze verlaagt de waarde van 'nummer' met één.
        // Ook hier staat de operator na de variabele ('nummer--'), dus de verlaging gebeurt na het printen.
        std::cout << "Het nummer is: (en gaat daarna aftellen)" << nummer-- << std::endl;
        // Nu is 'nummer' weer 10, omdat we het net verlaagd hebben.
        std::cout << "Het nummer is: " << nummer << std::endl;

        // Deze voorbeelden laten zien hoe 'nummer++' en 'nummer--' werken in een programma.
        // Het is belangrijk om te weten dat de verandering in waarde gebeurt na de huidige regel code als de operator na de variabele staat.

        // Deze voorbeelden laten de werking van de post-increment en post-decrement operatoren zien. Het is cruciaal om te begrijpen dat bij 'post' operaties,
        // de originele waarde van de variabele wordt gebruikt in de uitdrukking waaraan het deelneemt, en de incrementatie of decrementatie vindt plaats na deze uitdrukking.
        // Dit gedrag is fundamenteel verschillend van de 'pre-increment' of 'pre-decrement' operatoren, waar de operatie eerst wordt uitgevoerd voordat de variabele wordt gebruikt.
    }


    void operatorsHerhaling() {
        int nummer1 = 10;
        int nummer2 = 20;

        // Hier gebruiken we verschillende vergelijkingsoperatoren om twee getallen te vergelijken.
        // De uitkomst van elke vergelijking is een boolean waarde: true (waar) of false (niet waar).
        std::cout << "nummer1 < nummer2: " << (nummer1 < nummer2) << std::endl; // Is nummer1 kleiner dan nummer2?
        std::cout << "nummer1 <= nummer2: " << (nummer1 <= nummer2) << std::endl; // Is nummer1 kleiner dan of gelijk aan nummer2?
        std::cout << "nummer1 > nummer2: " << (nummer1 > nummer2) << std::endl; // Is nummer1 groter dan nummer2?
        std::cout << "nummer1 >= nummer2: " << (nummer1 >= nummer2) << std::endl; // Is nummer1 groter dan of gelijk aan nummer2?
        std::cout << "nummer1 == nummer2: " << (nummer1 == nummer2) << std::endl; // Zijn nummer1 en nummer2 gelijk?
        std::cout << "nummer1 != nummer2: " << (nummer1 != nummer2) << std::endl; // Zijn nummer1 en nummer2 niet gelijk?

        // Hier slaan we het resultaat van een vergelijking op in een variabele 'isGroter'.
        bool isGroter = nummer1 > nummer2; // hier stoppen we de conditie in een bakje / variable

        std::cout << "isGroter: " << isGroter << std::endl;

        // Logische operatoren: && (en), || (of), ! (niet)
        bool a = true;
        bool b = false;
        bool c = true;

        // Demonstratie van logische operatoren.
        std::cout << "a && b: " << (a && b) << std::endl; // Zijn a en b beide waar?
        std::cout << "a || c: " << (a || c) << std::endl; // Is ofwel a of c waar?
        std::cout << "a && b && c: " << (a && b && c) << std::endl; // Zijn a, b, en c allemaal waar?

        //iets ingewikkelder
        // Gebruik van '!' om een waarde te negaten en gecombineerde logische operatoren.
        std::cout << "!(a && b) || c: " << (!(a && b) || c) << std::endl; // Is het niet waar dat zowel a en b waar zijn, of is c waar?

        // Vergelijkingen met meerdere getallen
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
        std::cout << "(! a) && (d == e): " << ((!a) && (d == e)) << std::endl;


        // Voorbeeld van een if-else structuur met logische en vergelijkingsoperatoren.
        bool stopLichtGroen = true;
        bool politieStop = false;

        if (stopLichtGroen && !politieStop) {
            std::cout << "Doorrijden!" << std::endl;
        } else {
            std::cout << "Stoppen!" << std::endl;
        }

        // Een complexere if-else structuur om het grootste getal te bepalen.
        if (d >= e && d >= f) {
            std::cout << "Het grootste getal is: " << a << std::endl;
        } else if (b >= a && b >= c) {
            std::cout << "Het grootste getal is: " << b << std::endl;
        } else {
            std::cout << "Het grootste getal is: " << c << std::endl;
        }
    }

    // De functie 'leeftijdsCategorie' bepaalt de categorie van een persoon op basis van hun leeftijd.
    void leeftijdsCategorie(int leeftijd) {
        // Eerst controleren we of de leeftijd minder is dan 13.
        if (leeftijd < 13) {
            // Als dat zo is, wordt de persoon gecategoriseerd als een 'Kind'.
            std::cout << "Kind" << std::endl;


            // Als de leeftijd niet minder dan 13 is, controleren we of het tussen 13 en 19 ligt.
        } else if (leeftijd >= 13 && leeftijd < 20) {
            // Binnen deze groep maken we een verdere onderverdeling.
            // We controleren of de leeftijd minder dan 16 is.
            if (leeftijd < 16) {
                // Als dat zo is, wordt de persoon gecategoriseerd als een 'Jonge tiener'.
                std::cout << "Jonge tiener" << std::endl;
            } else {
                // Als de leeftijd 16 of ouder, maar minder dan 20 is, wordt de persoon een 'Oudere tiener' genoemd.
                std::cout << "Oudere tiener" << std::endl;
            }


            // Als de leeftijd 20 of ouder is, wordt de persoon gecategoriseerd als 'Volwassene'.
        } else {
            std::cout << "Volwassene" << std::endl;
        }
    }

    // Met wat je tot nu toe hebt geleerd kun je al zeer complexe programma's schrijven.
    // Hieronder staat een voorbeeld van een programma dat alle priemgetallen tussen twee getallen vindt.
    // Deze functie zoekt naar alle priemgetallen tussen twee opgegeven getallen 'start' en 'eind'.
    void priemgetallenTussen(int start, int eind) {
        // We beginnen met een lus die elk getal tussen 'start' en 'eind' doorloopt.
        for (int num = start; num <= eind; num++) {
            bool isPriem = true; // We gaan ervan uit dat 'num' een priemgetal is, totdat we het tegendeel bewijzen.

            // Eerst controleren we of 'num' kleiner is dan 2. Getallen kleiner dan 2 zijn geen priemgetallen.
            if (num < 2) {
                isPriem = false;
            } else {
                // Voor elk getal 'num' controleren we of het deelbaar is door enig getal tussen 2 en 'num / 2'.
                // Als 'num' deelbaar is door een ander getal dan zichzelf en 1, is het geen priemgetal.
                for (int i = 2; i <= num / 2; i++) {
                    if (num % i == 0) { // Als 'num' zonder rest deelbaar is door 'i', is het geen priemgetal.
                        isPriem = false;
                        break; // We stoppen de lus, omdat we al hebben bewezen dat 'num' geen priemgetal is.
                    }
                }
            }

            // Als 'isPriem' nog steeds 'true' is, betekent dit dat 'num' een priemgetal is.
            if (isPriem) {
                std::cout << num << " is een priemgetal" << std::endl;
            }
        }
    }
    // Een priemgetal is een natuurlijk getal groter dan 1 dat alleen deelbaar is door 1 en zichzelf.
    // Met andere woorden, het heeft geen andere delers dan 1 en het getal zelf.
    // Voorbeelden van priemgetallen zijn 2, 3, 5, 7, 11, enzovoort.
    // Merk op dat 2 het enige even priemgetal is, omdat alle andere even getallen deelbaar zijn door 2.
};


#endif //BEGINNER_LESSON4_H
