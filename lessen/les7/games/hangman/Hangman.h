// Created by rikpe on 05/05/2024.
//

#ifndef BEGINNER_HANGMAN_H
#define BEGINNER_HANGMAN_H

#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Hangman {
    // Deze functie kiest willekeurig een woord uit een lijst van woorden.
    string kiesWoord() {
        vector<string> woorden = {"programmeren", "computer", "spel", "hangman", "nederland"};
        int willekeurigIndex = rand() % woorden.size();
        return woorden[willekeurigIndex];
    }

    // Toon de huidige status van het spel
    void toonStatus(const string &teRadenWoord, const string &geradenWoord, int pogingenOver) {
        cout << "Geraden woord: " << geradenWoord << endl;
        cout << "Pogingen over: " << pogingenOver << endl;
    }

    // Update het geraden woord gebaseerd op de speler zijn input
    string updateGeradenWoord(char gok, const string &origineleWoord, string geradenWoord) {
        for (int i = 0; i < origineleWoord.length(); i++) {
            if (origineleWoord[i] == gok) {
                geradenWoord[i] = gok;
            }
        }
        return geradenWoord;
    }


public:
    // Deze functie voert het hangman spel uit.
    int speelHangman() {
        string teRadenWoord = kiesWoord();
        string geradenWoord(teRadenWoord.length(), '_');
        int pogingen = 8;

        cout << "Welkom bij Galgje! Probeer het woord te raden." << endl;

        while (pogingen > 0 && geradenWoord != teRadenWoord) {
            toonStatus(teRadenWoord, geradenWoord, pogingen);
            cout << "Voer een letter in: ";
            char gok;
            cin >> gok;

            if (teRadenWoord.find(gok) != string::npos) {
                geradenWoord = updateGeradenWoord(gok, teRadenWoord, geradenWoord);
            } else {
                pogingen--;
                cout << "Fout! De letter '" << gok << "' zit niet in het woord." << endl;
            }
        }

        toonStatus(teRadenWoord, geradenWoord, pogingen);

        if (geradenWoord == teRadenWoord) {
            cout << "Gefeliciteerd! Je hebt het woord geraden: " << teRadenWoord << endl;
        } else {
            cout << "Helaas, je hebt verloren. Het woord was: " << teRadenWoord << endl;
        }

        return 0;
    }
};


#endif //BEGINNER_HANGMAN_H
