//
// Created by rikpe on 09/10/2023.
// Updated by rikpe on 16/03/2024.
//
#include <iostream>
#include <valarray>

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

        // Maak nu je eigen variabelen en bereken het totaal en verschil van de snoepjes
        // Stop de uitkomsten in een bakje (variabele) en print de resultaten op het scherm


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

        // Maak nu je eigen variabelen en vergelijk ze met elkaar
        // Gebruik de resultaten om te zien of je ouder bent dan je vriend en of jullie even oud zijn


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
                    std::cout << "Resultaat: " << static_cast<float>(getal1 / getal2) << std::endl;
                } else {
                    std::cout << "Fout: Delen door nul is niet toegestaan!" << std::endl;
                }
                break;
            case '^':
                std::cout << "Resultaat: " << pow(getal1, getal2) << std::endl; // Vereist #include <cmath>
                break;
            case '%':
                if (getal2 != 0) {
                    std::cout << "Resultaat: " << getal1 % getal2 << std::endl;
                } else {
                    std::cout << "Fout: Modulo door nul is niet toegestaan!" << std::endl;
                }
                break;
            default:
                std::cout << "Fout: Ongeldige operator!" << std::endl;
        }

        // Tip: Overweeg om deze rekenmachine verder uit te breiden met meer complexe functies
        // zoals het werken met vierkantswortels, logaritmes, of trigonometrische functies voor een wetenschappelijke rekenmachine.
        // Of voeg extra functionaliteit toe zoals het converteren van valuta of eenheden.
    }

    // Deel 4: Extra
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
            double resultaat = (temperatuur - 32) * 5 / 9;
            std::cout << "Resultaat: " << resultaat << "°C" << std::endl;
        } else if (eenheid == 'F' || eenheid == 'f') {
            // Convert to Fahrenheit and print result
            double resultaat = (temperatuur * 9 / 5) + 32;
            std::cout << "Resultaat: " << resultaat << "°F" << std::endl;
        } else {
            std::cout << "Fout: Ongeldige eenheid!" << std::endl;
        }

        // Tip: Overweeg om deze temperatuur converter verder uit te breiden met extra eenheden zoals Kelvin of Rankine.
    }

    // Deel 5: Extra
    void avontuur() {
        std::cout << "Je wordt wakker in een mysterieus bos. Drie paden liggen voor je.\n";
        std::cout << "1: Het linkerpad leidt naar een donker bos.\n";
        std::cout << "2: Het middelste pad leidt naar een zonnige weide.\n";
        std::cout << "3: Het rechterpad leidt naar een bergpas.\n\n";

        int choice;
        std::cout << "Welk pad kies je? (1/2/3): ";
        std::cin >> choice;

        if (choice == 1) {
            std::cout << "Je loopt door het donkere bos en ziet twee paden.\n";
            std::cout << "A: Volg het pad dat naar beneden leidt naar een vallei.\n";
            std::cout << "B: Volg het pad dat omhoog leidt naar een heuvel.\n";

            char subChoice;
            std::cout << "Welk pad kies je? (A/B): ";
            std::cin >> subChoice;

            if (subChoice == 'A') {
                std::cout << "Je daalt af naar de vallei en ziet een oude brug en een rivier.\n";
                std::cout << "1: Steek de brug over.\n";
                std::cout << "2: Zwem door de rivier.\n";

                int finalChoice;
                std::cout << "Wat doe je? (1/2): ";
                std::cin >> finalChoice;

                if (finalChoice == 1) {
                    std::cout << "De brug was een val! Je valt in een net en wordt gevangen.\n";
                } else if (finalChoice == 2) {
                    std::cout << "Je zwemt veilig naar de overkant en vindt de schat!\n";
                    std::cout << "  ____\n";
                    std::cout << " /    \\\n";
                    std::cout << "|      |\n";
                    std::cout << " \\____/\n";
                    std::cout << "Gefeliciteerd, je hebt de schat gevonden!\n";
                } else {
                    std::cout << "Je twijfelt te lang en wordt opgegeten door een monster.\n";
                }
            } else if (subChoice == 'B') {
                std::cout << "Op de heuvel vind je niets dan een mooi uitzicht. Het avontuur eindigt hier.\n";
            } else {
                std::cout << "Je kunt niet beslissen en wordt door het bos verdwaald.\n";
            }
        } else if (choice == 2) {
            std::cout
                    << "Je loopt over de zonnige weide en rust uit bij een heldere vijver. Het is vredig, maar er is geen schat te vinden.\n";
        } else if (choice == 3) {
            std::cout << "De bergpas is te steil en gevaarlijk. Je besluit terug te keren naar het startpunt.\n";
        } else {
            std::cout
                    << "Verward blijf je staan. Soms is niet kiezen ook een keuze, maar het leidt niet tot avontuur of schatten.\n";
        }

        // Deze structuur introduceert een scenario met meerdere lagen van keuzes, die de speler door verschillende paden leidt.
        // Slechts één pad leidt naar de uiteindelijke schat, wat het belang van zorgvuldige beslissingen in dit avontuur benadrukt.

        // Tip: Overweeg om dit avontuur verder uit te breiden met meer keuzes, uitdagingen en beloningen.
    }
};


#endif //BEGINNER_OLES2_H
