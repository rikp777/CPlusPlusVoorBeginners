//
// Created by rikpe on 09/10/2023.
// V1.2
//
#include <iostream>

#ifndef BEGINNER_OLES2_H
#define BEGINNER_OLES2_H


class OLes2 {
public:
    void runMijnCode() {
        // Deel 1: Operator Oefening
        int snoepjesInZak1 = 15;  // Jij hebt 15 snoepjes in zak 1
        int snoepjesInZak2 = 10;  // Je vriend heeft 10 snoepjes in zak 2

        // Bereken het totaal aantal snoepjes:
        int totaalSnoepjes = snoepjesInZak1 +
                             snoepjesInZak2; // + is de optel operator. De uitkomst van de som wordt opgeslagen in totaalSnoepjes bakje (variabele)
        std::cout << "Totaal snoepjes: " << totaalSnoepjes << std::endl;

        // Bereken het verschil in snoepjes:
        int verschilSnoepjes = snoepjesInZak1 -
                               snoepjesInZak2; // - is de aftrek operator. De uitkomst van de som wordt opgeslagen in verschilSnoepjes bakje (variabele)
        std::cout << "Verschil snoepjes: " << verschilSnoepjes << std::endl;

        // Verander de waarde van snoepjesInZak1 en snoepjesInZak2 naar elke waarde die je wilt en print de nieuwe totalen en verschillen

        // Deel 2: Vergelijkings Oefening
        int jouwLeeftijd = 12;  // Vul je leeftijd in
        int vriendLeeftijd = 14;  // Vul de leeftijd van je vriend in

        // Vergelijk de leeftijden:
        bool benJijOuder = jouwLeeftijd >
                           vriendLeeftijd;  // Ben je ouder dan je vriend? (Groter dan) (true/false) (1/0) de uitkomt wordt opgeslagen in benJijOuder bakje (variabele)
        bool zijnJullieEvenOud = jouwLeeftijd ==
                                 vriendLeeftijd;  // Zijn jullie even oud? (Gelijk aan) (true/false) (1/0) de uitkomt wordt opgeslagen in zijnJullieEvenOud bakje (variabele)
        std::cout << "Ben jij ouder: " << std::boolalpha << benJijOuder << std::endl;
        std::cout << "Zijn jullie even oud: " << zijnJullieEvenOud << std::endl;

        // Verander de leeftijden en bekijk hoe de resultaten veranderen.
        // Gebruik de variable benJijOuder en zijnJullieEvenOud om te zien of je ouder bent dan je vriend en of jullie even oud zijn.


        operatorOefening();
        vergelijkingsOefening();
        rekenmachine();
        temperatuurConverter();
    }

    // In dit deel gaan we een stap verder en maken we gebruik van de kennis die we hebben opgedaan in de vorige delen.

    // Deel 1: Operator Oefening
    void operatorOefening() {
        std::cout << "--- Operator Oefening ---" << std::endl;

        int snoepjesInZak1 = 15;
        int snoepjesInZak2 = 10;

        int totaalSnoepjes = snoepjesInZak1 + snoepjesInZak2;
        std::cout << "Totaal snoepjes: " << totaalSnoepjes << std::endl;

        int verschilSnoepjes = snoepjesInZak1 - snoepjesInZak2;
        std::cout << "Verschil snoepjes: " << verschilSnoepjes << std::endl;

        // You can continue to change the values and see the results here...
    }

    // Deel 2: Vergelijkings Oefening
    void vergelijkingsOefening() {
        std::cout << "--- Vergelijkings Oefening ---" << std::endl;

        int jouwLeeftijd = 12;
        int vriendLeeftijd = 14;

        bool benJijOuder = jouwLeeftijd > vriendLeeftijd;
        std::cout << "Ben jij ouder: " << std::boolalpha << benJijOuder << std::endl;

        bool zijnJullieEvenOud = jouwLeeftijd == vriendLeeftijd;
        std::cout << "Zijn jullie even oud: " << zijnJullieEvenOud << std::endl;

        // You can continue to change the values and see the results here...
    }

    // Deel 3: Extra
    void rekenmachine() {
        std::cout << "--- Rekenmachine ---" << std::endl;

        int getal1, getal2;
        char operatie;

        std::cout << "Voer het eerste getal in: ";
        std::cin >> getal1;

        std::cout << "Voer de operatie in (+, -, *, /): ";
        std::cin >> operatie;

        std::cout << "Voer het tweede getal in: ";
        std::cin >> getal2;

        switch (operatie) {
            case '+':
                std::cout << "Resultaat: " << getal1 + getal2 << std::endl;
                break;
            case '-':
                std::cout << "Resultaat: " << getal1 - getal2 << std::endl;
                break;
            case '*':
                std::cout << "Resultaat: " << getal1 * getal2 << std::endl;
                break;
            case '/':
                if (getal2 != 0) {
                    std::cout << "Resultaat: " << getal1 / getal2 << std::endl;
                } else {
                    std::cout << "Fout: Delen door nul is niet toegestaan!" << std::endl;
                }
                break;
            default:
                std::cout << "Fout: Ongeldige operator!" << std::endl;
        }
    }

    void temperatuurConverter() {
        std::cout << "--- Temperatuur Converter ---" << std::endl;

        double temperatuur;
        char eenheid;

        std::cout << "Voer de temperatuur in: ";
        std::cin >> temperatuur;

        std::cout << "Voer de eenheid in waar naar je wilt converteren (C/F): ";
        std::cin >> eenheid;

        if (eenheid == 'C' || eenheid == 'c') {
            // Convert to Celsius and print result
            double resultaat = (temperatuur - 32) * 5/9;
            std::cout << "Resultaat: " << resultaat << "°C" << std::endl;
        } else if (eenheid == 'F' || eenheid == 'f') {
            // Convert to Fahrenheit and print result
            double resultaat = (temperatuur * 9/5) + 32;
            std::cout << "Resultaat: " << resultaat << "°F" << std::endl;
        } else {
            std::cout << "Fout: Ongeldige eenheid!" << std::endl;
        }
    }
};


#endif //BEGINNER_OLES2_H
