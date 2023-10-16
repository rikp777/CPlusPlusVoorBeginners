//
// Created by rikpe on 09/10/2023.
// V1.2
//

#include <iostream>

#ifndef BEGINNER_OLES1_H
#define BEGINNER_OLES1_H


class OLes1 {
public:
    void runMijnCode(){
        // Deel 1: Maak je eigen variabelen
        int mijnLeeftijd = 25;  // Vervang 25 door je eigen leeftijd
        char mijnInitiaal = 'R';  // Vervang 'R' door de eerste letter van je naam
        float mijnGemiddelde = 8.5;  // Vervang 8.5 door je gemiddelde cijfer
        bool hebHuisdier = true;  // Vervang true door false als je geen huisdier hebt

        // Deel 2: Print je gegevens
        std::cout << "Mijn Leeftijd: " << mijnLeeftijd << std::endl;
        std::cout << "Mijn Initiaal: " << mijnInitiaal << std::endl;
        std::cout << "Mijn Gemiddelde: " << mijnGemiddelde << std::endl;
        std::cout << "Heb Huisdier: " << std::boolalpha << hebHuisdier << std::endl;  // std::boolalpha zorgt ervoor dat true/false wordt geprint in plaats van 1/0

        // Deel 3: Wijzig je gegevens
        mijnGemiddelde = 9.0;  // Vervang 9.0 door je nieuwe gemiddelde
        hebHuisdier = !hebHuisdier;  // Dit verandert de waarde van hebHuisdier naar het tegenovergestelde

        // Print de variabelen opnieuw
        std::cout << "Mijn Gemiddelde (gewijzigd): " << mijnGemiddelde << std::endl;
        std::cout << "Heb Huisdier (gewijzigd): " << std::boolalpha << hebHuisdier << std::endl;

        // Deel 4: Extra
        int dagenInJaar = 365;
        int leeftijdInDagen = mijnLeeftijd * dagenInJaar;
        std::cout << "Leeftijd in dagen: " << leeftijdInDagen << std::endl;

        // Maak nu je eigen variabelen en geef alle doosjes een naam en een waarde gebruik alle geleerde datatypes


        // Vervang de waardes in je eigen variabelen


        // Print je eigen variables op het scherm


    }
};


#endif //BEGINNER_OLES1_H
