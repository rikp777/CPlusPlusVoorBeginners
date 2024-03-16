//
// Created by rikpe on 15/03/2024.
//

#ifndef BEGINNER_VEHICLE_H
#define BEGINNER_VEHICLE_H


#include <string>
#include <iostream>

// "Vehicle" is een algemene term voor dingen waarmee je kunt reizen, zoals auto's, fietsen, etc.
// Deze klasse beschrijft wat elke 'Vehicle' (voertuig) minimaal moet hebben en kunnen doen.
class Vehicle {
protected:
    // "protected" betekent dat alleen deze klasse en de klassen die ervan erven (dus die 'Vehicle' als basis gebruiken),
    // deze informatie kunnen zien en gebruiken.

    // Dit zijn de basisdingen die we van elk voertuig moeten weten:
    std::string make; // Het merk van het voertuig, zoals 'Ford'.
    std::string model; // Het model van het voertuig, zoals 'Mustang'.
    int year; // Het bouwjaar van het voertuig, zoals 2020.

public:

    // Dit is een speciale functie, de constructor, die wordt aangeroepen wanneer we een nieuw 'Vehicle' maken.
    // Het zet de basisinformatie van het voertuig op basis van wat we het vertellen.
    Vehicle(
            const std::string& make,
            const std::string& model,
            int year
            ) : make(make), model(model), year(year) {}
    // Hier zeggen we: "Oké, maak een nieuw voertuig met dit merk, model en bouwjaar."

    // Dit is een functie die de details van het voertuig laat zien.
    // "virtual" betekent dat als een andere klasse deze klasse uitbreidt, ze deze functie kunnen aanpassen
    // om misschien meer (of andere) details te tonen.
    virtual void displayDetails() const {
        std::cout << "=-=-=-=-=-=-=-=-=-=" << std::endl;
        std::cout << "Vehicle Details:" << std::endl;
        std::cout << "Make: " << make << std::endl; // Laat het merk zien
        std::cout << "Model: " << model << std::endl; // Laat het model zien
        std::cout << "Year: " << year << std::endl; // Laat het bouwjaar zien
    }

    // Dit is een speciale functie, de destructor, die wordt aangeroepen wanneer een 'Vehicle' wordt opgeruimd of verwijderd.
    // "virtual" zorgt ervoor dat als we een voertuig opruimen dat eigenlijk een uitgebreidere versie van 'Vehicle' is,
    // het op de juiste manier wordt opgeruimd, met al zijn extra's.
    virtual ~Vehicle() {}
};



#endif //BEGINNER_VEHICLE_H
