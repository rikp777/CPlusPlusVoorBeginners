//
// Created by rikpe on 16/03/2024.
//

#ifndef BEGINNER_DIER_H
#define BEGINNER_DIER_H


// De abstracte basisclass Dier definieert de interface voor alle afgeleide klassen.
// Dit betekent dat elke class die van Dier erft, de spreek functie moet implementeren.

class Dier {
public:
    // Een puur virtuele functie maakt Dier een abstracte class. Dit betekent dat je geen instantie van Dier kunt maken,
    // maar wel pointers of referenties naar Dier kunt hebben. Hiermee definiëren we een gemeenschappelijke interface.
    virtual void spreek() const = 0;  // Een puur virtuele functie maakt Dier een abstracte class.

    // Een virtuele destructor zorgt ervoor dat de destructor van afgeleide klassen correct wordt aangeroepen,
    // waardoor resources netjes worden opgeruimd en geheugenlekken worden voorkomen.
    virtual ~Dier() {}  // Virtuele destructor voor correcte opruiming van afgeleide klassen.
};



#endif //BEGINNER_DIER_H
