//
// Created by rikpe on 26/02/2024.
//

#ifndef BEGINNER_VIEROPEENRIJ_H
#define BEGINNER_VIEROPEENRIJ_H


#include <iostream>
#include <vector>

class VierOpEenRij {
private:
    std::vector<std::vector<char>> bord;
    int rijen = 6;
    int kolommen = 7;
    char spelers[2] = {'X', 'O'};
    int huidigeSpeler = 0;

    void setup() {
        bord.clear(); // Clear the board if already initialized
        bord.resize(rijen, std::vector<char>(kolommen, '.'));
    }

    bool isBordVol() {
        for (int i = 0; i < kolommen; ++i) {
            if (bord[0][i] == '.') {
                return false;
            }
        }
        return true;
    }

    bool plaatsSchijf(int kol, char schijf) {
        for (int i = rijen - 1; i >= 0; --i) {
            if (bord[i][kol] == '.') {
                bord[i][kol] = schijf;
                return true;
            }
        }
        return false;
    }

    bool controleerWinst(char schijf) {
        for (int rij = 0; rij < rijen; rij++) {
            for (int kol = 0; kol < kolommen; kol++) {
                if (kol + 3 < kolommen &&
                    schijf == bord[rij][kol] &&
                    schijf == bord[rij][kol + 1] &&
                    schijf == bord[rij][kol + 2] &&
                    schijf == bord[rij][kol + 3]) {
                    return true;
                }
                if (rij + 3 < rijen) {
                    if (schijf == bord[rij][kol] &&
                        schijf == bord[rij + 1][kol] &&
                        schijf == bord[rij + 2][kol] &&
                        schijf == bord[rij + 3][kol]) {
                        return true;
                    }
                    if (kol + 3 < kolommen &&
                        schijf == bord[rij][kol] &&
                        schijf == bord[rij + 1][kol + 1] &&
                        schijf == bord[rij + 2][kol + 2] &&
                        schijf == bord[rij + 3][kol + 3]) {
                        return true;
                    }
                    if (kol - 3 >= 0 &&
                        schijf == bord[rij][kol] &&
                        schijf == bord[rij + 1][kol - 1] &&
                        schijf == bord[rij + 2][kol - 2] &&
                        schijf == bord[rij + 3][kol - 3]) {
                        return true;
                    }
                }
            }
        }
        return false;
    }

    void printBord() {
        for (int i = 0; i < rijen; ++i) {
            for (int j = 0; j < kolommen; ++j) {
                std::cout << bord[i][j] << " ";
            }
            std::cout << std::endl;
        }
    }

public:

    VierOpEenRij(){
        setup();
    }
    void speel() {
        int beurt = 0;
        bool winst = false;
        std::cout << "Welkom bij Vier op een Rij!" << std::endl;

        while (!winst && !isBordVol()) {
            int kol;
            printBord();
            std::cout << "Speler " << spelers[huidigeSpeler] << ", voer een kolom in (0-6) om mee te spelen: ";
            std::cin >> kol;

            if (kol < 0 || kol >= kolommen || !plaatsSchijf(kol, spelers[huidigeSpeler])) {
                std::cout << "Dat kan helaas niet, probeer opnieuw." << std::endl;
                continue;
            }

            winst = controleerWinst(spelers[huidigeSpeler]);
            if (winst) {
                printBord();
                std::cout << "Speler " << spelers[huidigeSpeler] << " wint!" << std::endl;
            }

            huidigeSpeler = (huidigeSpeler + 1) % 2;
            beurt++;
        }

        if (!winst) {
            std::cout << "Het spel is gelijkspel!" << std::endl;
        }
    }
};



#endif //BEGINNER_VIEROPEENRIJ_H
