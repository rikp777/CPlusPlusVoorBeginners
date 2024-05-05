#include <iostream> // Dit is een bibliotheek die ons helpt met dingen printen op het scherm
#include <string>

#include "lessen/Les1/Les1.h"
#include "lessen/les2/Les2.h"
#include "lessen/les3/Les3.h"
#include "lessen/les4/Les4.h"
#include "lessen/les5/Les5.h"
#include "lessen/les6/Les6.h"
#include "lessen/les7/Les7.h"
#include "lessen/les8/Les8.h"
#include "lessen/les1/oefening/OLes1.h"
#include "lessen/les2/oefening/OLes2.h"
#include "lessen/les3/oefening/OLes3.h"
#include "lessen/les4/oefening/OLes4.h"
#include "lessen/Les5/oefening/OLes5.h"
#include "lessen/les6/oefening/OLes6.h"
#include "lessen/les8/oefening/OLes8.h"

//Ga naar onder om je les te kiezen en te oefenen.
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


// Hier kies je de les en of je wilt oefenen
int main() {




    int ikBenBijLes = 7;                                // Kies de les waar je naartoe wilt gaan (1-8)
    bool ikGaOefenen = vertaalJaNee("Nee");     // Kies of je wilt oefenen of niet (Ja/Nee)






    // ============================================================
    // Welkomstbericht
    std::cout << "Welkom bij de C++ beginnerscursus!" << std::endl;
    std::cout << "Gemaakt door: Rik Peeters" << std::endl;

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
        case 7:
            if (!ikGaOefenen) {
                std::cout << "Les 7 wordt gerund (geen oefening): " << std::endl;
                std::cout << std::endl;  // Print een lege regel

                Les7 les7;
                les7.runMijnCode();
            }
            break;
        case 8:
            if (!ikGaOefenen) {
                std::cout << "Les 8 wordt gerund (geen oefening): " << std::endl;
                std::cout << std::endl;  // Print een lege regel

                Les8 les8;
                les8.runMijnCode();
            } else {
                std::cout << "Oefening Les 8 wordt gerund: " << std::endl;
                std::cout << std::endl;  // print een lege regel

                OLes8 oles8;
                oles8.runMijnCode();
            }
            break;

        default:
            std::cout << "Les niet gevonden! ga naar de main.cpp en verander ikBenBijLes naar een getal tussen (1-8)." << std::endl;
            break;
    }

    return 0;  // Deze regel retourneert 0 naar het besturingssysteem, wat een succesvolle beëindiging van het programma aangeeft.
}



