//
// Created by rikpe on 26/02/2024.
//

#ifndef BEGINNER_TICTACTOE_H
#define BEGINNER_TICTACTOE_H


#include <iostream>
#include <limits> // Include for std::numeric_limits

class TicTacToe {
private:
    int speler = 1;
    int keuze{};

    char vakjes[9] = {'1', '2', '3', '4', '5', '6', '7', '8', '9'};
    bool gewonnen = false;
    bool gelijkspel = false;

    char spelerSymbool{};

    // Functie om te controleren of het spel in een gelijkspel is geëindigd
    bool checkGelijkspel() {
        // Doorloop elk vakje op het bord
        for (int i = 0; i < 9; i++) {
            // Controleer of het huidige vakje niet is gemarkeerd door een van de spelers
            if (vakjes[i] != 'X' && vakjes[i] != 'O') {
                // Als er een vakje is dat niet gemarkeerd is met 'X' of 'O', kan het spel niet in gelijkspel zijn
                return false; // Er is nog ruimte voor zetten, dus geen gelijkspel
            }
        }
        // Als alle vakjes zijn gecontroleerd en ze zijn allemaal gevuld zonder een winnaar,
        // dan is het spel geëindigd in een gelijkspel
        gelijkspel = true; // Markeer de status van gelijkspel als waar
        return true; // Bevestig dat het spel in een gelijkspel is geëindigd
    }

    // Functie om te controleren of er een winnende combinatie is in het tic-tac-toe spel
    bool checkGewonnen() {
        // Controleert alle horizontale lijnen voor een winnende combinatie
        for (int i = 0; i < 9; i += 3) {
            // Als drie opeenvolgende vakjes in een rij dezelfde niet-lege waarde hebben, is er een winnaar
            if (vakjes[i] == vakjes[i + 1] && vakjes[i + 1] == vakjes[i + 2]) {
                return true; // Winconditie gevonden, retourneer true
            }
        }

        // Controleert alle verticale lijnen voor een winnende combinatie
        for (int i = 0; i < 3; i++) {
            // Als drie opeenvolgende vakjes in een kolom dezelfde niet-lege waarde hebben, is er een winnaar
            if (vakjes[i] == vakjes[i + 3] && vakjes[i + 3] == vakjes[i + 6]) {
                return true; // Winconditie gevonden, retourneer true
            }
        }

        // Controleert de eerste diagonale lijn (van linksboven naar rechtsonder) voor een winnende combinatie
        if (vakjes[0] == vakjes[4] && vakjes[4] == vakjes[8]) {
            return true; // Winconditie gevonden, retourneer true
        }

        // Controleert de tweede diagonale lijn (van rechtsboven naar linksonder) voor een winnende combinatie
        if (vakjes[2] == vakjes[4] && vakjes[4] == vakjes[6]) {
            return true; // Winconditie gevonden, retourneer true
        }

        // Als geen winnende combinatie is gevonden, retourneer false
        return false;
    }

    void maakBord() {
        std::cout << "Tic Tac Toe" << std::endl;
        std::cout << "Speler 1 (X) - Speler 2 (O)" << std::endl << std::endl;

        std::cout << "     |     |     " << std::endl;
        std::cout << "  " << vakjes[0] << "  |  " << vakjes[1] << "  |  " << vakjes[2] << std::endl;
        std::cout << "_____|_____|_____" << std::endl;
        std::cout << "     |     |     " << std::endl;
        std::cout << "  " << vakjes[3] << "  |  " << vakjes[4] << "  |  " << vakjes[5] << std::endl;
        std::cout << "_____|_____|_____" << std::endl;
        std::cout << "     |     |     " << std::endl;
        std::cout << "  " << vakjes[6] << "  |  " << vakjes[7] << "  |  " << vakjes[8] << std::endl;
        std::cout << "     |     |     " << std::endl << std::endl;
    }

public:
    void play() {
        do {
            maakBord();
            speler = (speler % 2) ? 1 : 2;

            std::cout << "Speler " << speler << ", kies een vakje: ";
            while (!(std::cin >> keuze) || keuze < 1 || keuze > 9) {
                std::cout << "Ongeldige invoer! Kies een vakje tussen 1 en 9: ";
                std::cin.clear();
                std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            }

            spelerSymbool = (speler == 1) ? 'X' : 'O';
            if (vakjes[keuze - 1] == 'X' || vakjes[keuze - 1] == 'O') {
                std::cout << "Vakje is al bezet! Kies een ander vakje." << std::endl;
                speler--;
            } else {
                vakjes[keuze - 1] = spelerSymbool;
            }

            gewonnen = checkGewonnen();
            if (!gewonnen) {
                gelijkspel = checkGelijkspel();
            }
            speler++;
        } while (!gewonnen && !gelijkspel);

        maakBord();
        if (gewonnen) {
            // Eerst wordt de variabele vorigeSpeler berekend door 1 af te trekken van huidigeSpeler.
            // In dit spel wisselen spelers elkaar vermoedelijk af tussen speler 1 en speler 2.
            // huidigeSpeler zou de speler zijn die als laatste een zet heeft gedaan.
            // Door 1 af te trekken van huidigeSpeler, gaan we terug naar de speler die de winnende zet heeft gedaan.
            // Vervolgens wordt er gekeken naar vorigeSpeler % 2.
            // In programmeren geeft de % operator de rest van een deling weer.
            // Als de waarde van vorigeSpeler door 2 gedeeld wordt en de rest 0 is, betekent dit dat vorigeSpeler even is.
            // Als de rest niet 0 is (dus 1), dan is vorigeSpeler oneven.
            // In dit geval betekent een restwaarde van 1 (true) dat winnendeSpeler gelijk wordt gesteld aan 1.
            // Als de rest 0 is (false), wordt winnendeSpeler gelijk gesteld aan 2.
            // Dit patroon suggereert dat speler nummers afwisselend worden toegewezen (bijv., speler 1 is oneven nummers, speler 2 is even nummers).
            std::cout << "Speler " << ((speler - 1) % 2 ? 1 : 2) << " heeft gewonnen!" << std::endl;
        } else if (gelijkspel) {
            std::cout << "Gelijkspel!" << std::endl;
        }
    }
};


#endif //BEGINNER_TICTACTOE_H
