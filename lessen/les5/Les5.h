//
// Created by rikpe on 09/10/2023.
//

#include <iostream>
#include <vector>

#ifndef BEGINNER_LESSON5_H
#define BEGINNER_LESSON5_H

//In Les 5 leren we over het gebruik van arrays en vectoren.
// Dit zijn essentiële hulpmiddelen in programmering die ons helpen om collecties van gegevens te beheren en te manipuleren.
// Laten we eens kijken wat er in je code gebeurt:

// Arrays en hun Eigenschappen:
// Denk aan een array als een rij parkeerplaatsen.
// Elk heeft een nummer (index) en kan een waarde (auto) bevatten.
// Eens gemaakt, blijft de grootte van de array onveranderd - je kunt niet zomaar extra parkeerplaatsen toevoegen of verwijderen.
// De arrayList() functie illustreert hoe je toegang krijgt tot verschillende elementen in een array met behulp van hun index.

// Vectoren en hun Flexibiliteit:
// Een vector lijkt op een trein waar je wagons (elementen) aan kunt toevoegen of verwijderen.
// Dit maakt vectoren veelzijdiger dan arrays omdat ze kunnen groeien en krimpen tijdens het draaien van je programma.
// In de vectorList() functie zie je hoe je elementen toevoegt aan een vector en toegang krijgt tot zijn elementen.

// Werken met Arrays en Vectoren:
// We gebruiken functies zoals somArray() en gemiddeldeArray() om operaties op arrays uit te voeren,
// zoals het berekenen van de som en het gemiddelde van de elementen.
// Vergelijkbare functies, somVector() en gemiddeldeVector(), worden gebruikt voor vectoren.
// Deze demonstreren hoe je door de elementen van een vector itereert en berekeningen uitvoert.

// Typecasting en Foutafhandeling:
// In het berekenen van gemiddelden gebruiken we static_cast<float>() om een integer naar een float te converteren.
// Dit is vergelijkbaar met het veranderen van het type doos waarin je een getal bewaart.
// We gebruiken std::cerr voor foutafhandeling.
// Dit is als een alarmsysteem dat afgaat wanneer er iets mis is in je programma, bijvoorbeeld als je probeert te delen door nul.

// Door het begrijpen en gebruiken van arrays en vectoren, leer je hoe je efficiënt gegevens in je programma's kunt opslaan en manipuleren.
// Deze vaardigheden zijn cruciaal voor het oplossen van complexe problemen in C++.
class Les5 { // We beginnen een nieuwe klasse genaamd Les5
public: // Dit betekent dat iedereen deze dingen kan gebruiken
    void runMijnCode() { // Dit is waar onze code begint
        arrayList(); // Roep de functie arrayList aan om te laten zien hoe arrays werken

        // Array vs Vector:
        // Een array, zoals mijnArray, heeft een vaste grootte. Dit betekent dat je niet zomaar meer elementen kunt toevoegen nadat het is gemaakt.
        // Een vector, zoals mijnVector, kan van grootte veranderen. Je kunt elementen toevoegen of verwijderen, en de vector past zich automatisch aan.

        // Stel je een toren voor die je bouwt met een vooraf bepaald aantal blokken. Dit aantal blokken staat vast en kan niet worden veranderd nadat je met de bouw bent begonnen.
        // Deze toren staat symbool voor een array in C++. Een array heeft een vaste grootte die je moet bepalen wanneer je de array creëert.
        // Zodra de array is gemaakt, kan je het aantal elementen (of blokken) in deze array niet meer veranderen.
        // Als je een array van 5 elementen maakt, kun je daar niet zomaar een zesde element aan toevoegen of een element verwijderen om de grootte te verkleinen.
        // De toren blijft altijd uit precies hetzelfde aantal blokken bestaan.

        // Nu, stel je een andere toren voor waarbij je tijdens de bouw blokken kunt toevoegen of verwijderen.
        // Je begint misschien met een paar blokken, maar je kunt er meer toevoegen als je wilt, of blokken weghalen als dat nodig is.
        // Deze flexibele toren is vergelijkbaar met een vector in C++. Een vector kan dynamisch van grootte veranderen.
        // Je kunt elementen toevoegen aan het einde van de vector (een nieuw blok bovenop de toren plaatsen), of elementen verwijderen (blokken van de toren afhalen).
        // Dit geeft je veel meer flexibiliteit in vergelijking met een array, omdat je niet beperkt bent tot een vooraf bepaalde grootte.
        int mijnArray[5] = {1, 2, 3, 4, 5}; // Dit maakt een array van 5 gehele getallen
        std::vector<int> mijnVector = {1, 2, 3, 4, 5}; // Dit maakt een vector van gehele getallen

        // Print de som van de waarden in mijnArray en mijnVector
        std::cout << "Som van de array: " << somArray(mijnArray, 5) << std::endl; // Toont de som van mijnArray
        std::cout << "Som van de vector: " << somVector(mijnVector) << std::endl; // Toont de som van mijnVector

        // Print het gemiddelde van de elementen in mijnArray en mijnVector
        std::cout << "Gemiddelde van de array: " << gemiddeldeArray(mijnArray, 5)
                  << std::endl; // Toont het gemiddelde van mijnArray
        std::cout << "Gemiddelde van de vector: " << gemiddeldeVector(mijnVector)
                  << std::endl; // Toont het gemiddelde van mijnVector

        keerArrayOm(mijnArray, 5); // Keert de elementen in mijnArray om
        bevatVector(mijnVector, 3); // Controleert of mijnVector het getal 3 bevat
    }

    void arrayList() {
        int getallen[5] = {1, 2, 3, 4, 5}; // Een array van 5 integers

        // Toegang tot elementen van de array met behulp van een index
        std::cout << "Het eerste getal is: " << getallen[0] << std::endl;  // Indexen beginnen bij 0
        std::cout << "Het derde getal is: " << getallen[2] << std::endl; // Het derde getal is op index 2
    }

    void vectorList() {
        std::vector<int> getallen = {1, 2, 3, 4, 5};  // Een vector van integers

        // Elementen toevoegen aan de vector
        getallen.push_back(6); // Voegt het getal 6 toe aan de vector
        getallen.push_back(7); // Voegt het getal 7 toe aan de vector

        // Toegang tot elementen van de vector
        std::cout << "Het eerste getal is: " << getallen[0] << std::endl; // Toont het eerste getal in de vector
        std::cout << "Het derde getal is: " << getallen[2] << std::endl; // Toont het derde getal in de vector
    }

    int somArray(int arr[], int grootte) {
        int som = 0;
        for (int i = 0; i < grootte; i++) {
            som += arr[i];  // Optellen van elk element van de array
        }
        return som; // Geef de totale som terug
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

    // De functie 'keerArrayOm' draait de volgorde van de elementen in een array om.
    void keerArrayOm(int arr[], int grootte) {
        int start = 0;  // Dit is de startindex van de array.
        int einde = grootte - 1;  // Dit is de eindindex van de array.

        // We gebruiken een 'while' lus om door de array heen te lopen.
        // De lus gaat door zolang 'start' kleiner is dan 'einde'.
        while (start < einde) {
            // We slaan het element op de startindex op in een tijdelijke variabele 'temp'.
            int temp = arr[start];
            // Vervolgens vervangen we het element op de startindex door het element op de eindindex.
            arr[start] = arr[einde];
            // Daarna vervangen we het element op de eindindex door het oorspronkelijke element van de startindex.
            arr[einde] = temp;

            // We verhogen 'start' om naar het volgende element te gaan.
            start++;
            // We verlagen 'einde' om naar het vorige element te gaan.
            einde--;
        }
        // Deze stappen worden herhaald totdat 'start' en 'einde' elkaar ontmoeten of kruisen,
        // wat betekent dat alle elementen van de array zijn omgekeerd.
    }

    // De functie 'bevatVector' controleert of een gegeven waarde in een vector aanwezig is.
    bool bevatVector(std::vector<int> &vec, int waarde) {
        // We gebruiken een 'for'-lus om door elke waarde ('nummer') in de vector ('vec') te lopen.
        for (int nummer: vec) {
            // In de lus controleren we of het huidige nummer gelijk is aan de waarde die we zoeken.
            if (nummer == waarde) {
                // Als we de waarde vinden, geven we 'true' terug. Dit betekent "ja, de waarde is in de vector".
                return true;
            }
        }
        // Als we aan het einde van de lus komen zonder de waarde te vinden, geven we 'false' terug.
        // Dit betekent "nee, de waarde is niet in de vector".
        return false;
    }
    // Bijvoorbeeld, als we een vector hebben met de getallen [1, 2, 3] en we controleren op de waarde 2,
    // dan zal de functie 'true' teruggeven omdat 2 in de vector zit.
    // Als we controleren op 4, geeft de functie 'false' terug, omdat 4 niet in de vector voorkomt.

};
// We hebben een diepgaande kijk genomen op hoe we arrays en vectoren kunnen gebruiken in C++.
// Arrays, met hun vaste grootte, bieden een gestructureerde manier om een verzameling van elementen op te slaan,
// vergelijkbaar met een reeks gereserveerde parkeerplaatsen. Hoewel hun onveranderlijke grootte beperkingen met zich meebrengt,
// bieden arrays een snelle en efficiënte manier om toegang te krijgen tot en te werken met grote hoeveelheden data.

// Aan de andere kant hebben we vectoren verkend, die veel flexibeler zijn dan arrays.
// Met de mogelijkheid om dynamisch van grootte te veranderen, fungeren vectoren als treinen waarbij je wagons kunt toevoegen of verwijderen naar behoefte.
// Deze flexibiliteit maakt vectoren bijzonder waardevol voor situaties waar de hoeveelheid data kan variëren of vooraf niet bekend is.

// Door de verschillende operaties op arrays en vectoren uit te voeren, zoals het berekenen van de som en het gemiddelde,
// hebben we gezien hoe loops en conditionele logica kunnen worden toegepast om complexe taken met deze datastructuren uit te voeren.
// Bovendien hebben we geleerd over het belang van typecasting en foutafhandeling, essentiële technieken voor het schrijven van robuuste en veilige C++ programma's.

// In het proces van het leren over deze concepten, hebben we waardevolle vaardigheden opgedaan die fundamenteel zijn voor elk programmeringsproject.
// Het beheersen van arrays en vectoren, samen met een goed begrip van operaties die erop kunnen worden uitgevoerd,
// stelt ons in staat om effectief gegevens in onze programma's op te slaan, te doorzoeken, en te manipuleren.

// Terwijl we onze reis in de wereld van C++ programmering voortzetten, zullen de kennis en vaardigheden die we in deze les hebben opgedaan,
// dienen als een solide basis voor het oplossen van meer complexe problemen en het bouwen van efficiënte en effectieve softwareoplossingen.

// Blijf oefenen en experimenteer met arrays en vectoren in je eigen C++ projecten om je begrip te verdiepen en je programmeervaardigheden verder te ontwikkelen.


#endif //BEGINNER_LESSON5_H
