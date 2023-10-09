#include <iostream> // Dit is een bibliotheek die ons helpt met dingen printen op het scherm
#include <string>

#include "Les1.h"
#include "Les2.h"
#include "Les3.h"
#include "Les4.h"
#include "Les5.h"
#include "OLes1.h"
#include "OLes2.h"
#include "OLes3.h"
#include "OLes4.h"
#include "OLes5.h"
#include "Les6.h"
#include "OLes6.h"

bool vertaalJaNee(const std::string &antwoord) {
    // Converteer het antwoord naar hoofdletters om het case-insensitive te maken
    std::string antwoordHoofdletters;
    for (char c: antwoord) {
        antwoordHoofdletters += std::toupper(c);
    }

    // Controleer of het antwoord "JA" is, zo ja, retourneer true, anders retourneer false
    if (antwoordHoofdletters == "JA") {
        return true;
    } else {
        return false;
    }
}

int main() {
    int ikBenBijLes = 6;
    bool ikGaOefenen = vertaalJaNee("JA");

    switch (ikBenBijLes) {
        case 1:
            if (!ikGaOefenen) {
                std::cout << "Les 1 wordt gerund (geen oefening): " << std::endl;
                std::cout << std::endl;  // print een lege regel

                Les1 les1;
                les1.runMijnCode();
            } else {
                std::cout << "Oefening Les 1 wordt gerund: " << std::endl;
                std::cout << std::endl;  // print een lege regel

                OLes1 oles1;
                oles1.runMijnCode();
            }

            std::cout << std::endl;  // Print een lege regel
            break;
        case 2:
            if (!ikGaOefenen) {
                std::cout << "Les 2 wordt gerund (geen oefening): " << std::endl;
                std::cout << std::endl;  // print een lege regel

                Les2 les2;
                les2.runMijnCode();
            } else {
                std::cout << "Oefening Les 2 wordt gerund: " << std::endl;
                std::cout << std::endl;  // Print een lege regel

                OLes2 oles2;
                oles2.runMijnCode();
            }

            break;
        case 3:
            if (!ikGaOefenen) {
                std::cout << "Les 3 wordt gerund (geen oefening): " << std::endl;
                std::cout << std::endl;  // Print een lege regel

                Les3 les3;
                les3.runMijnCode();
            } else {
                std::cout << "Oefening Les 3 wordt gerund: " << std::endl;
                std::cout << std::endl;  // print een lege regel

                OLes3 oles3;
                oles3.runMijnCode();
            }

            break;
        case 4:
            if (!ikGaOefenen){
                std::cout << "Les 4 wordt gerund (geen oefening): " << std::endl;
                std::cout << std::endl;  // Print een lege regel

                Les4 les4;
                les4.runMijnCode();
            } else {
                std::cout << "Oefening Les 4 wordt gerund: " << std::endl;
                std::cout << std::endl;  // print een lege regel

                OLes4 oles4;
                oles4.runMijnCode();
            }
            break;

        case 5:
            if (!ikGaOefenen){
                std::cout << "Les 5 wordt gerund (geen oefening): " << std::endl;
                std::cout << std::endl;  // Print een lege regel

                Les5 les5;
                les5.runMijnCode();
            } else {
                std::cout << "Oefening Les 5 wordt gerund: " << std::endl;
                std::cout << std::endl;  // print een lege regel

                OLes5 oles5;
                oles5.runMijnCode();
            }
            break;
        case 6 :
            if (!ikGaOefenen){
                std::cout << "Les 6 wordt gerund (geen oefening): " << std::endl;
                std::cout << std::endl;  // Print een lege regel

                Les6 les6;
                les6.runMijnCode();
            } else {
                std::cout << "Oefening Les 6 wordt gerund: " << std::endl;
                std::cout << std::endl;  // print een lege regel

                OLes6 oles6;
                oles6.runMijnCode();
            }
            break;
        default:
            std::cout << "Ongeldige lesnummer" << std::endl;  // voeg deze regel toe voor het geval ikBenBijLes geen geldige waarde heeft
            break;
    }

    return 0;  // Deze regel retourneert 0 naar het besturingssysteem, wat een succesvolle beëindiging van het programma aangeeft.
}



