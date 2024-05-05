//
// Created by rikpe on 05/05/2024.
//

#ifndef BEGINNER_LINKEDLIST_H
#define BEGINNER_LINKEDLIST_H

#include <iostream>

// 'Knoop' is een structuur die elk element in de gelinkte lijst vertegenwoordigt.
struct Knoop {
    int waarde;        // De waarde van de knoop.
    Knoop* volgende;   // Een pointer naar de volgende knoop in de lijst.

    // Constructor die een waarde initialiseert wanneer een nieuwe knoop wordt gemaakt.
    Knoop(int val) : waarde(val), volgende(nullptr) {}
};

// 'LinkedList' is een klasse die alle knopen beheert en functies biedt om de lijst te manipuleren.
class LinkedList {
    Knoop* hoofd; // Dit is de pointer naar de eerste knoop van de lijst.

public:
    // Constructor die de lijst initialiseert als leeg.
    LinkedList() : hoofd(nullptr) {}

    // Voeg een nieuwe knoop toe aan het einde van de lijst.
    void toevoegenAanEinde(int waarde) {
        Knoop* nieuweKnoop = new Knoop(waarde);
        if (hoofd == nullptr) {
            hoofd = nieuweKnoop;
        } else {
            Knoop* temp = hoofd;
            while (temp->volgende != nullptr) {
                temp = temp->volgende;
            }
            temp->volgende = nieuweKnoop;
        }
    }

    // Verwijder een knoop met een specifieke waarde uit de lijst.
    void verwijder(int waarde) {
        Knoop* huidige = hoofd;
        Knoop* vorige = nullptr;
        while (huidige != nullptr) {
            if (huidige->waarde == waarde) {
                if (vorige == nullptr) {
                    hoofd = huidige->volgende;
                } else {
                    vorige->volgende = huidige->volgende;
                }
                delete huidige;
                return;
            }
            vorige = huidige;
            huidige = huidige->volgende;
        }
    }

    // Vervang de waarde van een knoop met een nieuwe waarde.
    void update(int oudeWaarde, int nieuweWaarde) {
        Knoop* temp = hoofd;
        while (temp != nullptr) {
            if (temp->waarde == oudeWaarde) {
                temp->waarde = nieuweWaarde;
                return;
            }
            temp = temp->volgende;
        }
    }

    // Zoek een knoop met een specifieke waarde en geef de positie (index) terug.
    int zoek(int waarde) {
        Knoop* temp = hoofd;
        int index = 0;
        while (temp != nullptr) {
            if (temp->waarde == waarde) {
                return index;
            }
            temp = temp->volgende;
            index++;
        }
        return -1; // Geef -1 terug als de waarde niet gevonden is.
    }

    // Toon alle waarden in de lijst.
    void weergeven() {
        Knoop* temp = hoofd;
        while (temp != nullptr) {
            std::cout << temp->waarde << " ";
            temp = temp->volgende;
        }
        std::cout << std::endl;
    }

    // Destructor die alle knopen verwijdert wanneer de lijst wordt vernietigd.
    ~LinkedList() {
        Knoop* huidige = hoofd;
        while (huidige != nullptr) {
            Knoop* volgende = huidige->volgende;
            delete huidige;
            huidige = volgende;
        }
    }
};


#endif //BEGINNER_LINKEDLIST_H
