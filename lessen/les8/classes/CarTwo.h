//
// Created by rikpe on 15/03/2024.
//

#ifndef BEGINNER_CARTWO_H
#define BEGINNER_CARTWO_H


#include "Vehicle.h"
#include "Inspectable.h"

// "CarTwo" is een speciale versie van "Vehicle" en moet ook geïnspecteerd kunnen worden, net als een echte auto.
class CarTwo : public Vehicle, public Inspectable {
private:
    // "isInspected" is een geheimpje van de auto die zegt of de auto al geïnspecteerd is of niet.
    bool isInspected;

public:
    // Dit is de constructor van "CarTwo". Het is een speciaal soort functie die wordt gebruikt om een nieuwe "CarTwo" te maken.
    // Het krijgt informatie zoals het merk, model, jaar, en of het al geïnspecteerd is.
    CarTwo(
            const std::string& make,
            const std::string& model,
            int year,
            bool isInspected = false
        ): Vehicle(make, model, year), isInspected(isInspected) {}

    // Hier zeggen we: Maak een nieuwe "Vehicle" met de gegeven informatie en onthoud of de auto geïnspecteerd is.

    // "inspect" is een functie die je laat weten of de auto veilig is om in te rijden.
    void inspect() const override {
        if(isInspected) {
            // Als de auto al geïnspecteerd is, vertelt het je dat het veilig is.
            std::cout << "This car has been inspected and is safe to drive." << std::endl;
        } else {
            // Anders zegt het dat de auto nog geïnspecteerd moet worden.
            std::cout << "Inspection required." << std::endl;
        }
    }

    // "displayDetails" laat alle belangrijke informatie over de auto zien, en ook of het geïnspecteerd is.
    void displayDetails() const override {
        // Eerst laten we de basisinformatie zien die "Vehicle" al kan laten zien.
        Vehicle::displayDetails();
        // Daarna voegen we toe of de auto geïnspecteerd is.
        std::cout << "Car Details:" << std::endl;
        std::cout << "Inspected: " << (isInspected ? "Yes" : "No") << std::endl;
        std::cout << std::endl;
    }
};



#endif //BEGINNER_CARTWO_H
