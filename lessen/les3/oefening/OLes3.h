//
// Created by rikpe on 09/10/2023.
// Updated by rikpe on 16/03/2024.
//

#include <iostream>
#include <cstdlib> // for std::rand
#include <ctime>  // for std::time
#include <chrono>
#include <thread>

#ifndef BEGINNER_OLES3_H
#define BEGINNER_OLES3_H


class OLes3 {
public:
    void runMijnCode() {
        // Deel 1: Controleer je eigen leeftijd
        int jouwLeeftijd = 16;  // Verander dit naar je eigen leeftijd
        magIkStemmen(jouwLeeftijd);  // Roep de functie aan met jouw leeftijd

        // Deel 2: Wat is vandaag?
        int vandaag = 5;  // Verander dit naar het nummer van vandaag (1 = Maandag, 2 = Dinsdag, enz.)
        welkeDag(vandaag);  // Roep de functie aan met het nummer van vandaag

        // Deel 3: Speel met lussen
        lussen();  // Roep de lussen functie aan
        ageGroupClassification();
        countdown();
        raadHetNummer();
    }

    void magIkStemmen(int leeftijd) {
        std::cout << "--- Mag ik stemmen? ---" << std::endl;
        std::cout << "Jouw leeftijd is: " << leeftijd << std::endl;
        if (leeftijd >= 18) {  // controleert of 'leeftijd' 18 of ouder is
            std::cout << "Je mag stemmen!" << std::endl;
        } else {
            std::cout << "Je mag nog niet stemmen." << std::endl;
        }

        // Voeg een extra controle toe die bepaalt of iemand zich al heeft geregistreerd om te stemmen.
        // Je kunt voor deze controle een nieuwe boolean parameter toevoegen aan de functie, bijvoorbeeld 'isGeregistreerd'.
        // Als een persoon oud genoeg is om te stemmen maar zich nog niet heeft geregistreerd, geef dan een bericht weer zoals:
        // "Je bent oud genoeg om te stemmen, maar je moet je nog registreren om te stemmen."
        // Pas de functiesignatuur en de logica binnen de functie aan om deze nieuwe controle op te nemen.
        // Tip: Denk na over hoe je de logica structureert. Je kunt geneste if-statements of een combinatie van if-else statements gebruiken.
        // Uitdaging: Overweeg wat er gebeurt als iemand jonger is dan 18 maar zich al heeft geregistreerd, en geef een passend bericht weer.
    }

    void welkeDag(int dagNummer) {
        std::cout << "--- Welke dag is het? ---" << std::endl;
        switch (dagNummer) {
            case 1:
                std::cout << "Het is Maandag!" << std::endl;
                break;
            case 2:
                std::cout << "Het is Dinsdag!" << std::endl;
                break;
            case 3:
                std::cout << "Het is Woensdag!" << std::endl;
                break;
            case 4:
                std::cout << "Het is Donderdag!" << std::endl;
                break;
            case 5:
                std::cout << "Het is Vrijdag!" << std::endl;
                break;
            case 6:
                std::cout << "Het is Zaterdag!" << std::endl;
                break;
            case 7:
                std::cout << "Het is Zondag!" << std::endl;
                break;
            default:
                std::cout << "Ongeldig nummer!" << std::endl;
                return; // Voeg een return toe om verdere uitvoering te voorkomen als het nummer ongeldig is
        }

        // Vervang de if-statement door een switch-statement
        switch (dagNummer) {
            case 1: // Maandag
            case 2: // Dinsdag
            case 3: // Woensdag
            case 4: // Donderdag
            case 5: // Vrijdag
                std::cout << "Het is een weekdag. Tijd voor school of werk!" << std::endl;
                break;
            case 6: // Zaterdag
            case 7: // Zondag
                std::cout << "Hoera! Het is weekend! Tijd om te ontspannen!" << std::endl;
                break;
                // De default case is al afgehandeld voor het bepalen van de dag van de week
        }

        // Breid de functie uit door een switch-case te gebruiken om te bepalen of de dag een feestdag is.
        // Je kunt zelf kiezen welke dagen je als feestdagen wilt markeren en een passende boodschap weergeven.
        // Bijvoorbeeld, stel dat dag 1 (Maandag) ook een speciale feestdag is, dan zou je een extra boodschap kunnen toevoegen.
        // Tip: Je kunt een extra switch-case blok na de bestaande logica toevoegen, specifiek voor het controleren van feestdagen.
        // Let op: Deze uitbreiding vereist dat je creatief denkt over hoe je de structuur van je code organiseert!
    }

    void lussen() {
        std::cout << "--- Lussen ---" << std::endl;
        // for lus
        int herhalingen = 5;  // Verander dit naar het aantal herhalingen dat je wilt
        for (int i = 0; i <
                        herhalingen; i++) {  // herhaalt 'herhalingen' keer, i begint op 0 en gaat omhoog tot het 'herhalingen - 1' bereikt
            std::cout << i << " ";
        }
        std::cout << std::endl;

        // while lus
        int j = 0;
        while (j < herhalingen) {  // herhaalt zolang j kleiner is dan 'herhalingen'
            std::cout << j << " ";
            j++;
        }
        std::cout << std::endl;

        // do-while lus
        int k = 0;
        do {
            std::cout << k << " ";
            k++;
        } while (k <
                 herhalingen);  // controleert de voorwaarde nadat de lus is uitgevoerd, dus het gebeurt minstens één keer
        std::cout << std::endl;

        // Implementeer een nieuwe functie die de Fibonacci-reeks berekent en afdrukt voor een gegeven aantal termen.
        // De Fibonacci-reeks is een reeks getallen waar elk getal de som is van de twee voorgaande getallen, beginnend met 0 en 1.
        // Deze functie moet gebruikmaken van een for-lus om door de termen te itereren en elke term van de reeks af te drukken.
        // Voorbeeld van de uitvoer voor de eerste 5 termen van de Fibonacci-reeks: 0, 1, 1, 2, 3
        // Tip: Je hebt twee variabelen nodig om de laatste twee termen van de reeks bij te houden terwijl je itereert.
        // Extra uitdaging: Probeer dezelfde functionaliteit te implementeren met behulp van een while-lus en een do-while-lus.
    }

    void ageGroupClassification() {
        std::cout << "--- Leeftijdsgroep Classificatie ---" << std::endl;
        int leeftijd;
        std::cout << "Voer je leeftijd in: ";
        std::cin >> leeftijd;

        if (leeftijd >= 0 && leeftijd <= 12) {
            std::cout << "Je bent een kind." << std::endl;
        } else if (leeftijd >= 13 && leeftijd <= 19) {
            std::cout << "Je bent een tiener." << std::endl;
        } else if (leeftijd >= 20 && leeftijd <= 59) {
            std::cout << "Je bent een volwassene." << std::endl;
        } else if (leeftijd >= 60) {
            std::cout << "Je bent een senior." << std::endl;
        } else {
            std::cout << "Ongeldige leeftijd." << std::endl;
        }

        // Voeg een extra categorie toe voor "peuters" (leeftijd 0-2) aan het begin van de leeftijdsclassificatie.
        // Daarnaast, implementeer functionaliteit die een gepersonaliseerde boodschap weergeeft op basis van de ingevoerde leeftijd.
        // Deze boodschap kan een interessant feit of een motiverende quote zijn die relevant is voor de leeftijdsgroep van de gebruiker.
        // Voorbeeld: Als de gebruiker een tiener is, kun je een quote weergeven die te maken heeft met het navigeren door tienerjaren of het belang van onderwijs.
        // Tip: Je kunt een reeks if-else statements gebruiken of switch-case met enumeraties voor de leeftijdscategorieën.
        // Vergeet niet om creatief te zijn met de boodschappen! Je kunt verschillende boodschappen bedenken voor elke leeftijdscategorie.
    }

    // Deel 5: Extra
    void countdown() {
        std::cout << "--- Countdown ---" << std::endl;
        int nummer;
        std::cout << "Voer een startnummer voor de countdown in: ";
        std::cin >> nummer;

        // Voeg een controle toe om te verifiëren dat het ingevoerde nummer positief is.
        if (nummer < 0) {
            std::cout << "Fout: Voer een positief nummer in." << std::endl;
            return; // Beëindig de functie als het nummer negatief is.
        }

        for (int i = nummer; i >= 0; i--) {
            std::cout << i << " ";
            // Voeg na elke seconde een vertraging toe om de countdown realistischer te maken.
            std::this_thread::sleep_for(std::chrono::seconds(1));
        }
        std::cout << "Start!" << std::endl; // Geef een bericht weer aan het einde van de countdown.

        // Voeg een functie toe die een specifieke actie uitvoert aan het einde van de countdown.
        // Bijvoorbeeld, de functie kan een bericht weergeven dat zegt "De countdown is voltooid!" of een eenvoudige animatie starten.
        // Experimenteer met het personaliseren van de countdown door verschillende acties toe te voegen,
        // zoals het afspelen van een geluid, het veranderen van de kleur van de tekst, of het tonen van een speciaal bericht voor bepaalde getallen.
        // Vergeet niet de noodzakelijke bibliotheken te includeren als je functies gebruikt die niet standaard zijn in C++.
        // Tip: Je kunt de `<chrono>` en `<thread>` bibliotheken gebruiken voor timing en de `<iostream>` bibliotheek voor input/output operaties.
    }

    // Deel 6: Extra
    void raadHetNummer() {
        std::cout << "--- Raad het Getal ---" << std::endl;

        std::srand(std::time(0)); // Gebruik de huidige tijd als een seed voor de willekeurige getalgenerator.
        int willekeurigNummer = std::rand() % 50 + 1; // Genereert een willekeurig getal tussen 1 en 50.
        int gok;
        int pogingen = 0;
        int verschil; // Voegt een nieuwe variabele toe om het verschil tussen gok en willekeurigNummer bij te houden.

        std::cout << "Raad het getal tussen 1 en 50. Je hebt 5 pogingen: ";

        while (pogingen < 5) {
            std::cin >> gok;
            pogingen++; // Verhoogt het aantal pogingen na elke gok.
            verschil = abs(gok - willekeurigNummer); // Bereken het absolute verschil.

            if (gok == willekeurigNummer) {
                std::cout << "Gefeliciteerd! Je hebt het juiste getal geraden in " << pogingen << " pogingen."
                          << std::endl;
                break; // Verlaat de lus als het juiste getal is geraden.
            } else if (gok < willekeurigNummer) {
                std::cout << "Te laag! ";
            } else {
                std::cout << "Te hoog! ";
            }

            // Geeft een hint over hoe dichtbij de speler is na elke poging.
            if (verschil <= 5) {
                std::cout << "Maar je bent heel dichtbij! Probeer het nog eens: ";
            } else if (verschil <= 10) {
                std::cout << "Je bent dichtbij! Probeer het nog eens: ";
            } else {
                std::cout << "Je bent nog ver weg. Probeer het nog eens: ";
            }
        }

        // Geeft feedback als de speler niet het juiste getal heeft geraden na 5 pogingen.
        if (pogingen >= 5 && gok != willekeurigNummer) {
            std::cout << "Helaas! Je hebt al je pogingen gebruikt. Het juiste getal was " << willekeurigNummer << "."
                      << std::endl;
        }

        // Voeg een functie toe die het spel herstart zodra het is afgelopen,
        // met de optie voor de speler om te kiezen of ze opnieuw willen spelen of niet.
        // Deze functie moet vragen "Wil je nog een keer spelen? (ja/nee): " en de input van de speler lezen.
        // Als de speler 'ja' antwoordt, moet het spel opnieuw beginnen zonder dat het programma opnieuw gestart hoeft te worden.
        // Als de speler 'nee' antwoordt, moet het programma vriendelijk afscheid nemen en afsluiten.
        // Tip: Overweeg het gebruik van een do-while lus om de logica van het spel te herhalen totdat de speler besluit te stoppen.
        // Vergeet niet de variabelen 'pogingen' en 'willekeurigNummer' opnieuw te initialiseren bij elk nieuw spel.
    }

};


#endif //BEGINNER_OLES3_H
