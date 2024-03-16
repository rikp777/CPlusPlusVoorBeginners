//
// Created by rikpe on 09/10/2023.
//

#include <iostream>

#ifndef BEGINNER_LESSON1_H
#define BEGINNER_LESSON1_H

// Welkom bij onze C++ les! C++ is een programmeertaal waarmee we de computer kunnen vertellen wat hij moet doen.
// Vandaag gaan we het hebben over enkele basisbouwstenen in C++: variabelen en datatypes.

// === Datatypes ===
// In C++, net als in de echte wereld, hebben verschillende dingen verschillende 'types' of eigenschappen.
// Bijvoorbeeld, een getal zonder decimalen is anders dan een getal met decimalen, en een letter is anders dan een ja/nee antwoord.
// C++ gebruikt 'datatypes' om het type van informatie dat we willen opslaan te beschrijven.

// int (integer):
// Stel je voor dat je een doos hebt speciaal gemaakt voor hele getallen zoals -1, 0, 1, 2.
// Je zou deze doos gebruiken als je iets wilt opslaan als je leeftijd in jaren, omdat je niet echt een half jaar oud kunt zijn.
// Voorbeeld: int age = 15; betekent dat we een doos 'age' hebben met het getal 15 erin.

// char (character):
// Deze doos is voor enkele letters of tekens, zoals 'A', '?', of '!'.
// Als je de eerste letter van je naam wilt opslaan, zou je deze doos gebruiken.
// Voorbeeld: char initial = 'J'; Hier hebben we een doos 'initial' met de letter 'J' erin.

// float:
// Deze doos is voor getallen die decimalen kunnen bevatten, zoals je gewicht of lengte.
// Als je iets met meer precisie dan een heel getal nodig hebt, zoals je gemiddelde cijfer, gebruik je een float-doos.
// Voorbeeld: float averageScore = 8.5; betekent dat we een doos 'averageScore' hebben met het getal 8.5 erin.

// bool (boolean):
// Een heel eenvoudige doos voor ja/nee, aan/uit, waar/onwaar waarden.
// Handig voor dingen als het bijhouden of je aan het chatten bent of niet.
// Voorbeeld: bool isOnline = true; vertelt ons dat 'isOnline' een doos is met de waarheidswaarde 'waar' erin.

class Les1 {
public:
    void runMijnCode() {
        // Hier gaan we voorbeelden laten zien van hoe we de bovengenoemde dozen kunnen gebruiken in onze code.

        int leeftijd = 25; // Een 'int' doos genaamd 'leeftijd' met het getal 25 erin.
        char eersteLetter = 'J'; // Een 'char' doos genaamd 'eersteLetter' met de letter 'J'.
        float gemiddeldCijfer = 88.6; // Een 'float' doos genaamd 'gemiddeldCijfer' met 88.6 erin.
        bool isOnline = true; // Een 'bool' doos genaamd 'isOnline' met de waarde waar (true) aka (waar).

        // Nu gaan we de waarden die in onze dozen zitten op het scherm tonen.
        std::cout <<
                  "Leeftijd: " << leeftijd <<
                  ", Eerste Letter: " << eersteLetter <<
                  ", Gemiddelde Cijfer: " << gemiddeldCijfer <<
                  ", Is Online: "<< isOnline
                  << std::endl;

        // 'std::cout' gebruiken we om tekst en waarden op het scherm te printen, gevolgd door een nieuwe regel met 'std::endl'.
    }

    // Hieronder tonen we nog meer voorbeelden (datatypes) en (variabelen) die we kunnen gebruiken.
    void dataTypes() {
        // Eerst maken we enkele lege dozen om later in te vullen.
        int nummer;  // We maken een doos met de naam 'nummer', maar stoppen er nog niets in
        float decimaal;  // Een doos met de naam 'decimaal', maar ook leeg voor nu
        char letter;  // Een lege doos met de naam 'letter'
        bool isActief;  // Een lege doos met de naam 'isActief' voor een ja/nee waarde (true/false)
    }


    void initDataTypes() {
        // Nu gaan we sommige van onze lege dozen vullen met waarden.
        int nummer = 10;  // Nu stoppen we het getal 10 in onze 'nummer' doos.
        char letter = 'A';  // De letter 'A' gaat in de 'letter' doos.

        float decimaal;  // Een lege doos met de naam 'decimaal'
        decimaal = 3.14;  // Nu vullen we de doos 'decimaal' met het getal 3.14 aka (pi).
    }

    void print() {
        // 'int nummer = 34;' maakt een doosje genaamd 'nummer' dat getallen kan bewaren.
        // We stoppen het getal 34 in dit doosje.
        int nummer = 34;

        // 'std::cout' is om dingen op het scherm te printen.
        // 'std' is als een toverboek vol basis toverspreuken in C++.
        // 'cout' is een spreuk in het toverboek en betekent 'karakter uitvoeren', gebruikt om tekst op het scherm te toveren.
        // '<<' is een speciale toverbeweging die de getallen uit het doosje naar het toverstokje stuurt.
        // We printen dus de waarde van 'nummer' op het scherm zodat we het kunnen zien.
        std::cout << nummer << std::endl;

        // 'std::endl' is een speciale toverspreuk in C++ die een nieuwe regel op het scherm tovert.
        // Het is ook uit het toverboek 'std'. Dit zorgt ervoor dat onze volgende printjes op een nieuwe regel verschijnen.
        // Het is alsof je op de 'Enter'-toets drukt na het schrijven van een zin.
        std::cout << std::endl;
    }
};

// Dat was het voor vandaag! Je hebt nu een goede basis in de wondere wereld van C++ en je begint al te begrijpen
// hoe computers denken en werken. Vandaag hebben we het gehad over variabelen en datatypes, wat essentieel is
// voor het opslaan en bewerken van informatie in je programma's.

// Je hebt geleerd dat:
// - Een 'int' is voor hele getallen, net als hoeveel stappen je zet op een dag.
// - Een 'char' is voor enkele karakters, zoals de eerste letter van je beste vriend.
// - Een 'float' is voor getallen met decimalen, zoals je gemiddelde op een toets.
// - En een 'bool' is voor ja/nee beslissingen, zoals of je vandaag al hebt ontbeten.

// Met deze kennis ben je nu in staat om basisinformatie op te slaan en te gebruiken in je C++ programma's.
// Dit is slechts het begin van je programmeeravontuur. Net zoals leren fietsen, wordt programmeren makkelijker en leuker
// hoe meer je oefent. Dus blijf experimenteren met wat je vandaag hebt geleerd en wees niet bang om fouten te maken.
// Fouten zijn gewoon kansen om te leren!

// In onze volgende les zullen we dieper ingaan op hoe we deze informatie kunnen manipuleren en laten samenwerken,
// waardoor we nog interessantere en nuttigere programma's kunnen maken. Tot dan, blijf nieuwsgierig, blijf oefenen,
// en vooral, blijf plezier hebben met coderen!

// Bedankt voor je aandacht vandaag, en tot de volgende keer in de spannende wereld van C++ programmeren!

#endif //BEGINNER_LESSON1_H
