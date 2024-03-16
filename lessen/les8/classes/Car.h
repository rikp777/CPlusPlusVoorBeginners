//
// Created by rikpe on 15/03/2024.
//

#ifndef BEGINNER_CAR_H
#define BEGINNER_CAR_H

#include <string>
#include <iostream>

// Dit zegt dat we een "Car" (auto) klasse gaan maken. Een klasse is zoals een bouwplan of recept
// voor het maken van iets, in dit geval een auto.
class Car {
     // "Private attributes" betekent dat dit de geheimpjes van de auto zijn. Alleen de auto zelf
    // kan deze gegevens zien en veranderen. Niemand anders kan direct bij deze gegevens.
private:
    std::string make; // Het merk van de auto, zoals "Ford".
    std::string model; // Het model van de auto, zoals "Mustang".
    int year; // Het bouwjaar van de auto, zoals 2020.

    // "Public methods" zijn dingen die iedereen kan vragen aan de auto om te doen. Het is zoals
    // de knoppen op een speelgoedauto; iedereen die het speelgoed heeft, kan op de knoppen drukken.
public:
    // Dit is een speciale functie, een constructor, die wordt gebruikt om een nieuwe auto te maken.
    // Deze constructor maakt een auto zonder informatie; het zet het merk en model op niks (""),
    // en het bouwjaar op 0.
    Car() {
        make = ""; // Zet het merk op niks
        model = ""; // Zet het model op niks
        year = 0; // Zet het bouwjaar op 0
    }

    // Dit is een methode om de details van de auto in te stellen. Als je een auto hebt en je
    // wilt het merk, model, en bouwjaar invullen, gebruik je deze methode.
    void setDetails(const std::string &carMake, const std::string &carModel, int carYear) {
        //In de context van de setDetails functie in de Car klasse, speelt het & teken een speciale rol. Laten we kijken naar wat het betekent:
        // Hier betekent het & teken dat we een "referentie" naar een std::string doorgeven in plaats van een kopie te maken van de std::string elke keer dat we de methode aanroepen. Dit heeft een paar belangrijke voordelen:
        // - Efficiëntie: Door referenties te gebruiken, hoeft C++ geen volledige kopie van de string te maken elke keer dat je setDetails aanroept.
        //   Strings kunnen soms groot zijn, en het kopiëren ervan kan veel geheugen en tijd kosten.
        //   Met een referentie wordt dit vermeden omdat je in plaats daarvan direct met het originele object werkt.
        // - Geheugenbesparing: Zoals hierboven vermeld, omdat er geen kopieën worden gemaakt, bespaar je geheugen.
        //   Je werkt direct met het originele object, dus er is geen noodzaak voor extra ruimte om een kopie te bewaren.
        // - Const-correctness: De const vóór de & zorgt ervoor dat de functie de strings die worden doorgegeven niet kan wijzigen.
        //   Dit is een goede praktijk omdat het helpt om "bugs" te voorkomen;
        //   je weet zeker dat deze methode je strings niet zal veranderen.
        //   Het is alsof je tegen de functie zegt: "Je mag naar mijn gegevens kijken, maar je mag ze niet veranderen."

        make = carMake; // Verandert het merk van de auto in wat jij zegt.
        model = carModel; // Verandert het model van de auto in wat jij zegt.
        year = carYear; // Verandert het bouwjaar van de auto in wat jij zegt.
    }

    // Dit is een methode om de details van de auto te laten zien. Als je wilt weten wat het
    // merk, model, of bouwjaar van de auto is, zal deze methode dat voor je uitprinten.
    void displayDetails() {
        std::cout << "=-=-=-=-=-=-=-=-=-=" << std::endl;
        std::cout << "Car Details:" << std::endl; // Begint met te zeggen dat dit de auto details zijn.
        std::cout << "Make: " << make << std::endl; // Laat het merk van de auto zien.
        std::cout << "Model: " << model << std::endl; // Laat het model van de auto zien.
        std::cout << "Year: " << year << std::endl; // Laat het bouwjaar van de auto zien.s
        std::cout << std::endl;
    }
};


#endif //BEGINNER_CAR_H
