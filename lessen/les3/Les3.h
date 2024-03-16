//
// Created by rikpe on 09/10/2023.
//
#include <iostream>

#ifndef BEGINNER_LESSON3_H
#define BEGINNER_LESSON3_H

// Welkom bij een nieuwe les in C++ programmeren!
// Vandaag gaan we drie nieuwe technieken van programmeren verkennen: het maken van keuzes, het kiezen van paden, en het herhalen van acties.
// Met deze technieken kunnen we onze code slimme beslissingen laten nemen, verschillende wegen inslaan, en dingen over en over doen.
// Dit noemen we: beslissingsstructuren, switch-case structuren, en lusstructuren.
// Dit zal je helpen om complexere taken in je code te beheren en uit te voeren. Laten we eens kijken wat er in je code gebeurt:

// Beslissingsstructuren - magIkStemmen() functie:
// Stel je voor, je wilt weten of je mag stemmen in een verkiezing.
// In deze functie gebruik je een if-else-structuur om te bepalen of iemand, op basis van hun leeftijd, stemrecht heeft.
// Als leeftijd 18 of ouder is, geef je aan dat de persoon mag stemmen.
// Zo niet, dan geef je aan dat hij/zij nog niet mag stemmen.
// Dit is vergelijkbaar met het nemen van een beslissing op basis van een voorwaarde.

// Switch-case structuur - welkeDag() functie:
// Deze functie gebruikt een switch-case-structuur om de dag van de week te bepalen.
// Het is alsof je een kalender hebt waar je een nummer kiest en het vertelt je welke dag het is.
// Elke case komt overeen met een dag van de week.
// Als er geen overeenkomst is, geeft de default-case aan dat het een ongeldig nummer is.
// Dit is handig voor situaties waar meerdere opties gecontroleerd moeten worden.

// Lusstructuren - lussen() functie:
// In deze functie onderzoeken we drie soorten lussen: for, while, en do-while.
// De for-lus is alsof je een stappenteller hebt die een vast aantal stappen telt.
// De while-lus lijkt op het wachten tot je telefoonbatterij leeg is - het gaat door tot een bepaalde voorwaarde niet meer waar is.
// De do-while-lus is alsof je minstens één keer een activiteit doet voordat je besluit of je doorgaat, gebaseerd op een bepaalde voorwaarde.

// Deze structuren stellen je in staat om dynamische en interactieve programma's te schrijven waarbij de flow van het programma afhankelijk is van bepaalde voorwaarden en herhalingen.
// Door deze te beheersen, kun je je vaardigheden in C++ verder ontwikkelen en complexere problemen oplossen.
class Les3 {
public:
    void runMijnCode() {
        // We gaan drie voorbeelden doorlopen: stemmen, dagen van de week, en een marathon van activiteiten!
        magIkStemmen();
        welkeDag();
        lussen();
    }

    // Mag ik stemmen?
    // Stel je voor dat je wilt stemmen in de nieuwste talentenjacht op TV. Maar er zijn regels wie mag stemmen.
    // Deze functie controleert of iemand oud genoeg is om te stemmen.
    void magIkStemmen() {
        // Je bent 16 jaar oud. Ben je oud genoeg om te stemmen?
        int leeftijd = 16; // We maken een 'doosje' voor leeftijd en zetten het getal 16 erin.

        // De 'if' controleert of aan een bepaalde voorwaarde wordt voldaan.
        if (leeftijd >= 18) {  // Hier vragen we: Is de leeftijd 18 of meer?
            // Accolades openen { : Hier begint het territorium van onze 'if'.
            // Als het antwoord 'ja' is (de leeftijd is 18 of ouder), dan voeren we de code in deze blok uit.
            std::cout << "Je mag stemmen!" << std::endl;
            // Accolades sluiten }: En hier eindigt ons 'if'-territorium.
        } else {
            // Nieuwe set accolades voor de 'else': Dit is een nieuw territorium voor het geval de 'if' niet waar is.
            // De 'else' wordt uitgevoerd als de 'if' voorwaarde niet waar is.
            // In dit geval, als de leeftijd minder dan 18 is.
            std::cout << "Je mag nog niet stemmen." << std::endl;
            // En we sluiten weer af met een accolade.
        }
        // Buiten deze accolades bevinden we ons weer in het algemene gebied buiten onze leeftijd check.

        // Als je de leeftijd verandert naar 20, zal de 'if' waar zijn en zal de boodschap "Je mag stemmen!" worden getoond.

        // Het is essentieel om te begrijpen dat zonder deze accolades, onze 'if' en 'else' instructies slechts de eerstvolgende regel zouden controleren.
        // Dus, als we meerdere regels code willen uitvoeren voor een enkele voorwaarde, moeten we die in accolades zetten.

        // Laten we een situatie zonder accolades illustreren:
        // if (leeftijd >= 18)
        //     std::cout << "Je mag stemmen!" << std::endl; // Alleen deze regel hoort bij de 'if' zonder accolades.
        // std::cout << "Dit bericht verschijnt altijd, ongeacht je leeftijd, omdat het buiten de 'if' controle staat." << std::endl;

        // Samengevat, accolades {} zijn cruciaal om duidelijke, foutvrije code te schrijven die precies doet wat je verwacht voor je conditie.
        // Ze organiseren onze code in blokken, zodat we complexe logica en meerdere acties kunnen uitvoeren onder specifieke voorwaarden.

        // Dit klink misschien als veel werk en lastig, maar het is eigenlijk heel logisch en intuïtief.
        // Hoe vaker je dit soort structuren gebruikt, hoe natuurlijker het zal aanvoelen.
    }

    // We beginnen onze verkenning met de functie `welkeDag`.
    // Deze functie vertelt ons welke dag van de week het is, gebaseerd op een nummer.
    void welkeDag() {
        // Eerst definiëren we een variabele 'dagNummer' met het getal 3.
        // Je kunt dit getal zien als een directe verwijzing naar een dag van de week.
        int dagNummer = 3; // We maken een 'doosje' voor de dag van de week, en zetten het nummer 3 erin. Dit staat voor Woensdag.

        // 'switch' is als een magisch boek dat opent op de pagina die overeenkomt met het nummer in 'dagNummer'.
        switch (dagNummer) {
            // Binnen de 'switch' hebben we verschillende 'cases'. Elke 'case' komt overeen met een dag van de week.
            // Elke 'case' is als een pagina in het boek.
            case 1: // Als 'dagNummer' 1 is, dan is het Maandag.
                std::cout << "Het is Maandag!" << std::endl;
                break; // De 'break' instructie sluit ons magische boek. Zonder 'break' zouden we doorlezen naar de volgende pagina's.
            case 2: // Als 'dagNummer' 2 is, dan is het Dinsdag.
                std::cout << "Het is Dinsdag!" << std::endl;
                break;
            case 3: // Als 'dagNummer' 3 is, dan is het Woensdag.
                std::cout << "Het is Woensdag!" << std::endl;
                break;
            case 4:
                std::cout << "Het is Donderdag!" << std::endl;
                break;
            case 5:
                std::cout << "Het is Vrijdag!" << std::endl;
                break;
            case 6:
                std::cout << "Het is Zaterdag!" << std::endl;
                break;
            case 7:
                std::cout << "Het is Zondag!" << std::endl;
                break;

            // De 'default' case is wat we uitvoeren als geen van de bovenstaande 'cases' overeenkomt met 'dagNummer'.
            default: // 'default' is dus wat we doen als geen enkele andere 'case' waar is.
                // Dit is als wanneer we een nummer hebben dat niet 1 t/m 7 is, en het boek ons vertelt dat dit een ongeldig nummer is.
                std::cout << "Ongeldig nummer!" << std::endl; // Dit gebeurt als 'dagNummer' iets anders is dan 1 t/m 7.
                break;
            // Zodra de juiste 'case' is gevonden en uitgevoerd, of als de 'default' case is uitgevoerd, verlaat de 'switch' structuur.
            // Het is als het sluiten van het magische boek en terugkeren naar de werkelijkheid.
        }
    }

    // Dit stukje code is als een marathon van activiteiten. We gaan door drie soorten lussen: for, while, en do-while.
    void lussen(){
        // for lus
        // De 'for' lus is perfect voor situaties waar je precies weet hoe vaak iets moet gebeuren.
        // Stel je voor dat je een ladder beklimt met precies 10 treden. Je weet van tevoren hoeveel stappen je moet zetten.
        // We beginnen onderaan (bij trede 0) en gaan één voor één omhoog.
        for (int i = 0; i < 10; i++) {  // 'i' is de trede waar we op staan. We gaan door tot we bij de 9e trede zijn. Want 10 is niet minder dan 10.
            std::cout << i << " "; // We zeggen bij elke trede op welke trede we staan.
        }
        // in programmeertermen: We beginnen met 'i' op 0. Zolang 'i' minder is dan 10, gaan we door en voeren we de code binnen de lus uit. Na elke ronde verhogen we 'i' met 1.
        std::cout << std::endl; // Eenmaal bovenaan, eindig je met een nieuwe regel.


        // while lus
        // De 'while' lus gebruik je als je door wilt gaan zolang een bepaalde voorwaarde waar is, maar je niet precies weet hoe vaak dit zal zijn.
        // Vergelijk het met het spelen van een videogame waar je punten verzamelt, maar je weet niet hoe snel je deze zult verdienen.
        // Denk aan een videogame waar je blijft spelen zolang je minder dan 10 punten hebt.
        int j = 0; // Je begint met een score van 0.
        while (j < 10) { // Zolang je score onder de 10 is, blijf je spelen.
            std::cout << j << " score, "; // Laat je huidige score zien.
            j++; // Met elke actie in de game, verhoog je je score met één.
        }
        std::cout << std::endl; // Het spel eindigt wanneer je 10 punten bereikt.


        // do-while lus
        // Gebruik de 'do-while' lus wanneer je wilt dat iets ten minste één keer gebeurt, ongeacht of de voorwaarde aan het begin waar of onwaar is.
        // Het is alsof je gegarandeerd één rondje op het feest danst, zelfs als je van plan bent daarna te stoppen omdat je voeten pijn doen.
        // Dus als een feestje waar je minstens één keer danst, zelfs als je moe bent.
        int k = 0; // Dit houdt bij hoeveel keer je hebt gedanst.
        do {
            std::cout << k << " keer gedanst, "; // We dansen en laten zien hoeveel keer we al hebben gedanst.
            k++; // Na elke dans verhogen we de teller met één.
        } while (k < 10); // We blijven dansen totdat we 10 keer hebben gedanst.
        std::cout << std::endl; // Als we klaar zijn met dansen, rusten we uit.

        //Verschil while en do-while
        // While Lus:
        // - Denk aan de while lus als een speeltuin met een poortwachter. Voordat je de speeltuin ingaat,
        //      moet je eerst aan de poortwachter laten zien dat je een toegangskaartje hebt.
        //      Als je geen kaartje hebt, laat de poortwachter je niet binnen.
        // - In programmeertermen: De while lus controleert eerst de voorwaarde (j < 10 in het voorbeeld).
        //      Als de voorwaarde waar is, gaat de lus door en wordt de code binnen de lus uitgevoerd.
        //      Als de voorwaarde niet waar is, wordt de lus helemaal overgeslagen.
        // Do-While Lus:
        // - De do-while lus kun je zien als een speeltuin waar je eerst mag spelen, en pas als je weggaat,
        //      controleert de poortwachter of je een kaartje had. Dus zelfs als je geen kaartje hebt,
        //      krijg je toch de kans om ten minste één keer te spelen.
        // - In programmeertermen: De do-while lus voert eerst de code binnen de lus uit (de do deel) en controleert dan pas de voorwaarde (k < 10 in het voorbeeld).
        //      Dit betekent dat de lus altijd minstens één keer wordt uitgevoerd, zelfs als de voorwaarde vanaf het begin niet waar is.

        // Verschil toepassingen while en do-while

        // Stel je een programma voor dat de gebruiker vraagt een getal in te voeren en dan controleert of het getal binnen een bepaalde reeks valt.
        // Je wilt dat de gebruiker minstens één keer iets invoert, zelfs als de eerste invoer geldig is.
        // Met een do-while lus kan je eerst de invoer krijgen en daarna controleren of het voldoet aan de voorwaarden.
        int nummer;
        do {
            std::cout << "Voer een getal tussen 1 en 10 in: ";
            std::cin >> nummer;
        } while (nummer < 1 || nummer > 10);

        // Bij het maken van een console-menu waar een gebruiker een keuze moet maken,
        // is het vaak wenselijk dat het menu ten minste één keer wordt getoond,
        // ongeacht de initiële staat van het programma.
        // Een do-while lus zorgt ervoor dat het menu altijd ten minste één keer verschijnt.
        char keuze;
        do {
            std::cout << "Kies een optie: \n";
            std::cout << "a) Optie 1\n";
            std::cout << "b) Optie 2\n";
            std::cout << "c) Afsluiten\n";
            std::cin >> keuze;
        } while (keuze != 'c');  // Blijf het menu tonen tot de gebruiker 'c' kiest om af te sluiten.
    }
};

// Na onze verkenning van beslissingsstructuren, switch-case structuren en lusstructuren in C++, sta je nu op de drempel van een nieuw niveau van programmeringskennis.
// Met de vaardigheden die je vandaag hebt opgedaan, kun je complexere en dynamischere programma's schrijven die kunnen reageren op verschillende situaties,
// keuzes maken op basis van gegevens, en taken herhalen met precisie.

// Onthoud, elke structuur die we hebben besproken - of het nu gaat om het maken van een keuze met if-else,
// het selecteren van paden met switch, of het navigeren door herhalingen met for, while, en do-while lussen - heeft zijn unieke sterktes.
// Door deze constructies te combineren en toe te passen, kun je de logica achter je programma's verfijnen en de functionaliteit aanzienlijk uitbreiden.

// Terwijl we dit hoofdstuk afsluiten, moedig ik je aan om te experimenteren met wat je hebt geleerd.
// Probeer nieuwe scenario's uit, stel je eigen problemen op om op te lossen, en zie hoe je deze structuren kunt gebruiken om tot oplossingen te komen.
// Fouten maken is een essentieel onderdeel van het leerproces, dus wees niet bang om te experimenteren en te leren van elke uitdaging.

// Vooruitkijkend, zijn er nog vele avonturen te beleven in de wereld van programmeren.
// De concepten die we vandaag hebben verkend, vormen de basis waarop je complexere ideeën en algoritmen kunt bouwen.
// Met geduld, oefening, en een nieuwsgierige geest, zal je blijven groeien als programmeur.

// Dus pak je toetsenbord, open je editor, en begin met het creëren van iets nieuws.
// De wereld van C++ is uitgestrekt en vol mogelijkheden.
// Ik kijk ernaar uit om te zien wat je zult bouwen met de gereedschappen en technieken die je tot nu toe hebt verzameld.
// Tot de volgende keer, blijf programmeren, blijf ontdekken, en bovenal, blijf plezier hebben op je reis door de wondere wereld van C++.

#endif //BEGINNER_LESSON3_H
