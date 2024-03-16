//
// Created by rikpe on 15/03/2024.
//

#ifndef BEGINNER_LES8_H
#define BEGINNER_LES8_H


#include "classes/Car.h"
#include "classes/CarTwo.h"
#include "classes/Fruit.h"

class Les8 {
public:
    // "public" betekent dat iedereen die deze klasse gebruikt, ook deze functie kan zien en gebruiken.

    // "runMijnCode" is een functie binnen Les8. Deze naam suggereert dat we hier bepaalde code gaan uitvoeren
    // of een voorbeeld gaan laten zien.
    void runMijnCode() {
        // We maken een appel aan, die groen is en nog niet rijp.
        Fruit* mijnAppel = new Fruit("Appel", "Groen", false, 5, true);

        // Nu maken we een banaan die geel is en wel rijp.
        Fruit mijnBanaan("Banaan", "Geel", true, 0, true);

        // Laten we de details van onze appel en banaan zien.
        mijnAppel->toonDetails();
        std::cout << std::endl;

        mijnBanaan.toonDetails();
        std::cout << std::endl;

        mijnAppel->checkOfRijp();
        mijnAppel->veranderKleur("Rood");
        mijnAppel->toonDetails();
        mijnAppel->simuleerDagen();
        mijnAppel->checkIsZoet();
        mijnAppel->eetFruit();
        delete mijnAppel;

        std::cout << std::endl;
        std::cout << std::endl;

        //Het Verschil tussen MijnAppel en MijnBanaan
        // - Hoe Ze Zijn Gemaakt:
        //   mijnAppel wordt gemaakt met new. Dit is alsof je een appel plant en wacht tot hij groeit.
        //   Je plant hem in de grond (het geheugen van de computer), en hij blijft daar tot je besluit om hem op te graven (met delete).
        //   We noemen dit een dynamisch gemaakte appel omdat je zelf moet besluiten wanneer je de appel weghaalt.
        //   mijnBanaan wordt direct gemaakt, niet met new.
        //   Dit is alsof je een banaan koopt bij de winkel en hem meteen in je keuken legt.
        //   Hij is er gewoon, en als je klaar bent met koken (het einde van je programma), wordt de banaan automatisch opgeruimd.
        //   We noemen dit een statische banaan omdat je niet hoeft na te denken over het opruimen.
        // - Levensduur:
        //   Omdat mijnAppel dynamisch is, blijft hij bestaan totdat je delete gebruikt om hem te verwijderen.
        //   Je hebt de controle over wanneer dat gebeurt.
        //   mijnBanaan bestaat alleen tijdens de runMijnCode functie.
        //   Zodra de functie is afgelopen, verdwijnt de banaan automatisch. Hij ruimt zichzelf op.
        // - Toegang:
        //   Om mijnAppel te gebruiken, gebruik je een pijltje (->), omdat mijnAppel een pointer is.
        //   Een pointer is als een adres naar waar de appel in de grond (geheugen) ligt. Het pijltje zegt: "Ga naar dit adres om met de appel te werken."
        //   Bij mijnBanaan gebruik je een punt (.), omdat mijnBanaan geen pointer is.
        //   Je werkt direct met de banaan, niet via een adres.

        // Waarom Ze Anders Worden Aangemaakt
        // - mijnAppel (Dynamisch): Soms wil je controle over hoe lang iets blijft bestaan.
        //   Misschien wil je dat de appel blijft bestaan, zelfs als je klaar bent met de functie waarin je hem hebt gemaakt.
        //   Dat kan handig zijn voor dingen die veel veranderen of die je in verschillende delen van je programma nodig hebt.
        // - mijnBanaan (Statisch): Dit is handiger voor dingen die je maar even nodig hebt en die je niet overal in je programma gebruikt.
        //   Zo hoef je niet zelf te onthouden dat je het moet opruimen; het gaat vanzelf weg als je het niet meer nodig hebt.


        // Eerst maken we een nieuwe auto aan, genaamd "myCar". Dit gebruikt de "Car" klasse die we eerder hebben gezien.
        // Omdat we de standaard constructor gebruiken (die zonder parameters), begint deze auto met lege waarden voor
        // merk, model, en bouwjaar.
        Car myCar;

        // Nu vullen we de details van "myCar" in. We zeggen dat het een "Ford Mustang" uit 2019 is.
        // Dit gebruikt de "setDetails" functie van de "Car" klasse.
        myCar.setDetails("Ford", "Mustang", 2019);

        // Daarna laten we de details van "myCar" zien op het scherm. Dit toont het merk, model, en bouwjaar dat we net hebben ingesteld.
        myCar.displayDetails();

        // Nu maken we een andere auto, "myCarTwo", maar deze keer gebruiken we de "CarTwo" klasse, die meer mogelijkheden heeft.
        // We geven meteen alle details mee, inclusief dat deze auto al geïnspecteerd is (dat is het "true" deel).
        CarTwo ford("Ford", "Mustang", 2020, true);

        // "vehiclePtr" is een pointer, een soort adres, naar een "Vehicle". In dit geval zeggen we dat het wijst naar "myCarTwo".
        // Dit laat ons toe om sommige dingen die "Vehicle" kan, te gebruiken met "myCarTwo". Maar let op, omdat het een pointer naar
        // een "Vehicle" is, kunnen we alleen de dingen doen die elke "Vehicle" zou kunnen, niet de speciale dingen die alleen "CarTwo" kan.
        Vehicle* vehiclePtr = &ford;

        // Hier gebruiken we de pointer om de details van "myCarTwo" te tonen. Omdat "myCarTwo" een "CarTwo" is, en "CarTwo" een soort "Vehicle",
        // kunnen we dit doen.
        vehiclePtr->displayDetails();

        // Tot slot roepen we "inspect" aan op "myCarTwo". Dit kan niet met de "vehiclePtr" omdat "inspect" speciaal is voor "CarTwo" en niet iets is dat
        // elke "Vehicle" kan doen. Dit laat zien of "myCarTwo" veilig is om in te rijden.
        ford.inspect();
    }
};


#endif //BEGINNER_LES8_H
