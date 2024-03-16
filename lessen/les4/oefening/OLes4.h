//
// Created by rikpe on 09/10/2023.
//

#include <iostream>  // Dit is een bibliotheek waarmee we dingen op het scherm kunnen schrijven

#ifndef BEGINNER_OLES4_H  // We controleren of BEGINNER_OLES4_H nog niet is gedefinieerd
#define BEGINNER_OLES4_H  // We definiëren BEGINNER_OLES4_H

class OLes4 {  // We beginnen een nieuwe klasse genaamd OLes4
public:  // Dit betekent dat iedereen deze dingen kan gebruiken
    void runMijnCode() {  // Dit is waar onze code begint

        // Roep hier je functies aan
        // Vul de functies hieronder in en test ze hier

    }

    // Vul deze functies in
    int verdubbelen(int a) {
        // Deze functie moet het getal a verdubbelen en teruggeven
        // TODO: schrijf je code hieronder

    }

    int kwadraat(int a) {
        // Deze functie moet het kwadraat van a berekenen en teruggeven
        // TODO: schrijf je code hieronder

    }

    float halveren(int a) {
        // Deze functie moet de helft van a berekenen en teruggeven
        // TODO: schrijf je code hieronder

    }

    bool isNul(int a) {
        // Deze functie moet controleren of a gelijk is aan 0 en een boolean teruggeven
        // TODO: schrijf je code hieronder

    }

    int verhoogMetDrie(int a) {
        // Deze functie moet 3 optellen bij a en het resultaat teruggeven
        // TODO: schrijf je code hieronder

    }

    float berekenGemiddelde(int a, int b) {
        // Deze functie moet het gemiddelde van a en b berekenen en teruggeven
        // TODO: schrijf je code hieronder

    }


    // Implementeer een nieuwe functie `modulo` die de rest van de deling van twee getallen a en b teruggeeft.
    // Deze functie accepteert twee integers als parameters en retourneert de rest (het resultaat van a % b).
    // Vergeet niet om te controleren of b niet gelijk is aan 0, omdat delen door 0 niet is toegestaan.
    // Als b gelijk is aan 0, geef dan een passende foutmelding weer en retourneer een standaardwaarde (bijv. -1) of gooi een uitzondering, afhankelijk van je voorkeur.
    // Daag jezelf uit door na te denken over hoe je de functie zou kunnen gebruiken in een grotere toepassing of programma.


    // Stoplicht simulatie
    void stoplicht() {
        enum kleur {
            ROOD, GROEN, ORANJE
        }; // Dit is een enum, een lijst met opties

        kleur huidigeKleur = ROOD;
        bool politieOvername = false; // Verander deze waarde om te testen

        if (politieOvername) {
            std::cout << "Politie neemt het over! Noodgeval, politie krijgt voorrang" << std::endl;
        } else {
            // Voeg een cyclische verandering van de lichten toe wanneer er geen politieovername is
            for (int i = 0; i < 3; i++) { // Simuleer de cyclus van stoplicht kleuren
                switch (i) {
                    case ROOD:
                        std::cout << "Stoppen!" << std::endl;
                        break;
                    case GROEN:
                        std::cout << "Doorrijden!" << std::endl;
                        break;
                    case ORANJE:
                        std::cout << "Stoppen! Het licht wordt zo rood" << std::endl;
                        break;
                    default:
                        std::cout << "Ongeldige kleur!" << std::endl;
                }
                // Simuleer een wachttijd tussen de kleuren (in echte applicaties zou je hier timing code gebruiken)
                std::cout << "Wachten..." << std::endl;
            }
        }

        // Voeg logica toe voor een voetgangersknop die het stoplicht op groen kan zetten, ongeacht de huidige kleur,
        // tenzij er een politieovername is. Wanneer de voetgangersknop wordt ingedrukt, moet het licht naar groen veranderen
        // en een boodschap weergeven zoals "Voetganger heeft gedrukt. Het licht gaat naar groen!".
        // Implementeer deze functionaliteit door een boolean variabele 'voetgangersKnop' en bijbehorende logica toe te voegen.
        // Overweeg hoe de invoer van de gebruiker (voetgangersknop indrukken) gesimuleerd kan worden in jouw code.
    }

    // Converteert temperatuur tussen Celsius en Fahrenheit
    void converteerTemperatuur(float temperatuur, char eenheid) {
        if (eenheid == 'C' || eenheid == 'c') {
            float fahrenheit = (temperatuur * 9 / 5) + 32;
            std::cout << temperatuur << "°C is " << fahrenheit << "°F" << std::endl;
        } else if (eenheid == 'F' || eenheid == 'f') {
            float celsius = (temperatuur - 32) * 5 / 9;
            std::cout << temperatuur << "°F is " << celsius << "°C" << std::endl;
        } else {
            std::cout << "Ongeldige eenheid ingevoerd." << std::endl;
        }
        // Voeg ondersteuning toe voor de omzetting van Kelvin naar Celsius en Fahrenheit, en vice versa.
        // Denk na over hoe je de functie-signatuur zou moeten aanpassen om deze extra functionaliteit te ondersteunen.
    }

    // Telt het aantal voorkomens van een specifiek karakter in een string
    int telKarakters(std::string tekst, char teTellenKarakter) {
        int teller = 0;
        for (char karakter: tekst) {
            if (karakter == teTellenKarakter) {
                teller++;
            }
        }
        return teller;

        // Breid de functie uit zodat het onderscheid maakt tussen hoofdletters en kleine letters.
        // Voeg een parameter toe aan de functie die bepaalt of de zoekfunctie hoofdlettergevoelig moet zijn of niet.
    }

    // Controleert of een wachtwoord voldoet aan bepaalde veiligheidscriteria
    bool isWachtwoordVeilig(std::string wachtwoord) {
        bool heeftMinLengte = wachtwoord.length() >= 8;
        bool heeftCijfer = false;
        bool heeftHoofdletter = false;
        for (char c : wachtwoord) {
            if (isdigit(c)) heeftCijfer = true;
            if (isupper(c)) heeftHoofdletter = true;
        }
        return heeftMinLengte && heeftCijfer && heeftHoofdletter;

        // Breid de wachtwoord validator uit met extra criteria, zoals het vereisen van minstens één speciaal teken
        // (bijv. !, @, #, etc.). Overweeg hoe je deze controle op een efficiënte manier kunt implementeren.
        // Voeg feedback toe die specifiek aangeeft welke criteria het wachtwoord niet voldoet.
    }


    // Geeft de dag van de week terug voor een gegeven datum
    std::string berekenDagVanDeWeek(int dag, int maand, int jaar) {
        // Zeller's congruentie algoritme (vereenvoudigd en aangepast voor begrip)
        if (maand < 3) {
            maand += 12;
            jaar -= 1;
        }
        int k = jaar % 100;
        int j = jaar / 100;
        int h = (dag + 13 * (maand + 1) / 5 + k + k / 4 + j / 4 + 5 * j) % 7;
        std::string dagen[] = {"Zaterdag", "Zondag", "Maandag", "Dinsdag", "Woensdag", "Donderdag", "Vrijdag"};
        return dagen[h];

        // Schrijf een functie die de gebruiker vraagt om een datum in te voeren en gebruik vervolgens de functie 'berekenDagVanDeWeek'
        // om de dag van de week te bepalen en weer te geven. Zorg ervoor dat de invoer van de gebruiker wordt gevalideerd op geldigheid.
        // Overweeg hoe je omgaat met schrikkeljaren en ongeldige datums.


        // Wat is een algorithme?
        // Een algoritme is een reeks geordende stappen die systematisch worden uitgevoerd om een bepaald probleem op te lossen of een specifieke taak te voltooien.
        // Het is in essentie een recept of een blauwdruk voor het uitvoeren van een reeks instructies.
        // Algoritmen zijn overal om ons heen en vormen de basis van alle computerprogramma's en softwaretoepassingen.
        // Ze kunnen zo eenvoudig zijn als een basisrecept voor het bakken van een cake,
        // of zo complex als de algoritmen die zoekmachines gebruiken om informatie op het internet te organiseren en te zoeken.

        // Zeller's Congruentie Algoritme
        // Zeller's Congruentie is een algoritme ontwikkeld door de Duitse wiskundige Christian Zeller om de dag van de week te bepalen voor een bepaalde datum.
        // Dit algoritme kan worden gebruikt voor elke datum in de Gregoriaanse kalender (die in 1582 werd ingevoerd en tegenwoordig het meest gebruikt wordt).
        // De output van Zeller's Congruentie is een getal dat overeenkomt met een dag van de week, waarbij zaterdag = 0, zondag = 1, maandag = 2, enzovoort, tot vrijdag = 6.
    }
};


#endif //BEGINNER_OLES4_H
