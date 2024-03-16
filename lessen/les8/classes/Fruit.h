//
// Created by rikpe on 15/03/2024.
//

#ifndef BEGINNER_FRUIT_H
#define BEGINNER_FRUIT_H


#include <string>
#include <iostream>

// "Fruit" is een klasse, een soort blauwdruk, die ons vertelt wat we moeten weten over fruit in het algemeen.
class Fruit {
private:
    // "private" betekent dat deze dingen geheim zijn binnen de "Fruit" klasse. Alleen "Fruit" zelf kan deze gegevens zien of veranderen.
    std::string naam; // De naam van het fruit, zoals "Appel".
    std::string kleur; // De kleur van het fruit, zoals "Rood".
    bool isRijp; // Dit vertelt ons of het fruit rijp is of niet. "true" betekent rijp, "false" betekent niet rijp.
    int dagenTotRijp; // Dit vertelt ons hoeveel dagen het fruit nog nodig heeft om rijp te worden.
    bool isZoet = false; // Dit vertelt ons of het fruit zoet is of niet. "true" betekent zoet, "false" betekent niet zoet.

public:
    // Dit is een constructor. Het wordt gebruikt om een nieuw stuk fruit te maken.
    // We moeten het vertellen wat de naam en kleur is, en of het rijp is.
    Fruit(
            const std::string &fruitNaam,
            const std::string &fruitKleur,
            bool fruitIsRijp,
            int fruitDagenTotRijp = 0,
            bool fruitIsZoet = false
        ):
        naam(fruitNaam),
        kleur(fruitKleur),
        isRijp(fruitIsRijp),
        dagenTotRijp(fruitDagenTotRijp),
        isZoet(fruitIsZoet) {}
    // Hier zeggen we eigenlijk: "Maak een nieuw stuk fruit met deze naam, kleur, en vertel ons of het rijp is."

    // Het & Teken Uitleggen
    // Wanneer we een parameter in een functie (of constructor) in C++ zien met een & ernaast, zoals bij const std::string &fruitName,
    // betekent dit dat we een referentie naar een object doorgeven, in plaats van het hele object te kopiëren.
    // Dit heeft twee belangrijke voordelen:
    // - Efficiëntie: Het doorgeven van een referentie is sneller omdat het niet nodig is om een hele nieuwe kopie van het object (in dit geval een string) te maken.
    //   Dit bespaart tijd en geheugen, vooral bij grote objecten.
    // - Veiligheid: Door const te gebruiken voor de referentie (zoals in const std::string &),
    //   zeggen we dat de functie de inhoud van het object niet mag veranderen.
    //   Dit helpt ons om per ongeluk wijzigingen in onze gegevens te voorkomen.

    // Deze functie laat ons de details van het fruit zien. We kunnen dit gebruiken om te leren over ons fruit.
    void toonDetails() {
        std::cout << "Fruit Details:" << std::endl;
        std::cout << "Naam: " << naam << std::endl; // Dit toont de naam van het fruit.
        std::cout << "Kleur: " << kleur << std::endl; // Dit toont de kleur van het fruit.
        std::cout << "Rijp: " << (isRijp ? "Ja" : "Nee") << std::endl; // Dit vertelt ons of het fruit rijp is of niet.

        if (!isRijp) {
            std::cout << "Dagen tot rijp: " << dagenTotRijp << std::endl;
        }

        std::cout << "Zoet: " << (isZoet ? "Ja" : "Nee") << std::endl; // Dit vertelt ons of het fruit zoet is of niet.
    }

    // Controleer of het fruit rijp is
    void checkOfRijp() {
        if (isRijp) {
            std::cout << "Het " << naam << " is rijp en klaar om te eten!" << std::endl;
        } else {
            std::cout << "Het " << naam << " is nog niet rijp. Je moet nog even wachten." << std::endl;
        }
    }

    void veranderKleur(const std::string &nieuweKleur) {
        kleur = nieuweKleur;
        std::cout << "De kleur van " << naam << " is veranderd naar " << nieuweKleur << "." << std::endl;
    }


    // Nieuwe functie om een dag te simuleren. Dit vermindert het aantal dagen tot het fruit rijp is.
    // Als het aantal dagen nul bereikt, markeren we het fruit als rijp.
    void simuleerDagen() {
        if (dagenTotRijp > 0) {
            dagenTotRijp--;
            if (dagenTotRijp == 0) {
                isRijp = true;
                std::cout << "Het " << naam << " is nu rijp!" << std::endl;
            } else {
                std::cout << "Nog " << dagenTotRijp << " dagen tot " << naam << " rijp is." << std::endl;
            }
        }
    }

    void checkIsZoet() {
        if (isZoet) {
            std::cout << "Het " << naam << " is lekker zoet!" << std::endl;
        } else {
            std::cout << "Het " << naam << " is niet zo zoet." << std::endl;
        }
    }

    // Simuleert het eten van het fruit, wat het fruit zou kunnen 'verwijderen'.
    void eetFruit() {
        std::cout << "Je eet de " << naam << ". Lekker!" << std::endl;
        // Nu het fruit opgegeten is, kunnen we het niet meer zien of gebruiken.
        // In werkelijkheid zouden we hier het object verwijderen of onzichtbaar maken.
    }
};



#endif //BEGINNER_FRUIT_H
