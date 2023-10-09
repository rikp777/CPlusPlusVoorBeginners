//
// Created by rikpe on 09/10/2023.
//
#include <iostream>

#ifndef BEGINNER_OLES2_H
#define BEGINNER_OLES2_H


class OLes2 {
public:
    void runMijnCode(){
        // Deel 1: Operator Oefening
        int snoepjesInZak1 = 15;  // Jij hebt 15 snoepjes in zak 1
        int snoepjesInZak2 = 10;  // Je vriend heeft 10 snoepjes in zak 2

        // Bereken het totaal aantal snoepjes:
        int totaalSnoepjes = snoepjesInZak1 + snoepjesInZak2;
        std::cout << "Totaal snoepjes: " << totaalSnoepjes << std::endl;

        // Bereken het verschil in snoepjes:
        int verschilSnoepjes = snoepjesInZak1 - snoepjesInZak2;
        std::cout << "Verschil snoepjes: " << verschilSnoepjes << std::endl;

        // Verander de waarde van snoepjesInZak1 en snoepjesInZak2 naar elke waarde die je wilt en print de nieuwe totalen en verschillen

        // Deel 2: Vergelijkings Oefening
        int jouwLeeftijd = 12;  // Vul je leeftijd in
        int vriendLeeftijd = 14;  // Vul de leeftijd van je vriend in

        // Vergelijk de leeftijden:
        bool benJijOuder = jouwLeeftijd > vriendLeeftijd;  // Ben je ouder dan je vriend?
        bool zijnJullieEvenOud = jouwLeeftijd == vriendLeeftijd;  // Zijn jullie even oud?
        std::cout << "Ben jij ouder: " << std::boolalpha << benJijOuder << std::endl;
        std::cout << "Zijn jullie even oud: " << zijnJullieEvenOud << std::endl;

        // Verander de leeftijden en bekijk hoe de resultaten veranderen
    }
};


#endif //BEGINNER_OLES2_H
