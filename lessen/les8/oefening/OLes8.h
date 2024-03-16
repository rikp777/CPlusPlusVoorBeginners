//
// Created by rikpe on 15/03/2024.
//

#ifndef BEGINNER_OLES8_H
#define BEGINNER_OLES8_H


class OLes8 {
public:
    // "public" betekent dat iedereen die deze klasse gebruikt, ook deze functie kan zien en gebruiken.

    // "runMijnCode" is een functie binnen Les8. Deze naam suggereert dat we hier bepaalde code gaan uitvoeren
    // of een voorbeeld gaan laten zien.
    void runMijnCode() {
        // Opdracht: Eenvoudig Bibliotheeksysteem
        // Doel: Maak een eenvoudig systeem om een bibliotheek van boeken te beheren.
        // Je zult de mogelijkheid hebben om boeken toe te voegen aan de bibliotheek, ze te verwijderen, en een lijst van alle boeken te tonen.

        // Stap 1: Maak een Boek Class
        // Elk Boek object moet de volgende attributen hebben: titel, auteur, en jaarUitgave.
        // Implementeer een constructor die deze attributen initialiseert.
        // Voeg een methode toe om de details van het boek te tonen.

        // Stap 2: Maak een Bibliotheek Class
        // De Bibliotheek class moet een lijst (of een andere geschikte container) bevatten om meerdere Boek objecten op te slaan.

        // Implementeer methoden om:
        // - Een Boek toe te voegen aan de bibliotheek.
        // - Een Boek te verwijderen uit de bibliotheek op basis van titel.
        // - Alle boeken in de bibliotheek te tonen, met hun details.

        // Stap 3: Test je Systeem

        // Gebruik deze plek waarin je een instantie van Bibliotheek aanmaakt.
        // - Voeg minimaal drie boeken toe aan de bibliotheek.
        // - Toon alle boeken in de bibliotheek.
        // - Verwijder een boek uit de bibliotheek en toon daarna opnieuw alle boeken om te bevestigen dat het boek is verwijderd.

        // Extra
        // Zorg ervoor dat de Bibliotheek class ten minste één private functie bevat.
        // Deze functie kan bijvoorbeeld worden gebruikt om te zoeken naar een boek in de bibliotheek door de titel.
        // Dit is handig wanneer je een boek wilt verwijderen of details over het boek wilt opvragen.

        // Voorbeeld: Voeg een private functie toe genaamd vindBoekIndex aan de Bibliotheek class.
        // Deze functie neemt de titel van een boek als parameter en retourneert de index van het boek in de lijst (of container) als het boek wordt gevonden.
        // Als het boek niet wordt gevonden, retourneert het een waarde die aangeeft dat het boek niet aanwezig is (bijvoorbeeld -1).

        // Extra Opdracht 1: Boekenfilter
        // Schrijf een methode in de Bibliotheek class die alle boeken filtert en toont op basis van het jaar van uitgave.
        // Bijvoorbeeld, toon alle boeken uitgegeven na het jaar 1950.

        // Extra Opdracht 2: Boek Zoeken
        // Implementeer een zoekfunctie die gebruikers in staat stelt om een boek te vinden op basis van de titel of auteur.
        // Overweeg het gebruik van standaard C++ bibliotheken voor stringmanipulatie om dit te realiseren.

        // Extra Opdracht 3: Boek Beoordelingen
        // Breid de Boek class uit met een nieuw attribuut voor beoordelingen (bijvoorbeeld op een schaal van 1 tot 5).
        // Voeg functionaliteit toe om een beoordeling aan een boek toe te wijzen en de gemiddelde beoordeling van alle boeken in de bibliotheek te berekenen.

        // Extra Opdracht 4: Unieke ID's voor Boeken
        // Voeg een uniek ID toe aan elk Boek object (bijvoorbeeld door een statische variabele te gebruiken die elke keer verhoogt wanneer een nieuw boek wordt aangemaakt).
        // Implementeer vervolgens een functie in de Bibliotheek class om boeken te verwijderen of te zoeken op basis van hun unieke ID.

        // Extra Opdracht 5: Persistente Opslag
        // Onderzoek hoe je de bibliotheek van boeken kunt opslaan in een bestand en deze kunt herladen wanneer het programma start.
        // Dit vereist het lezen en schrijven van objecten naar een bestand. Denk na over welk bestandsformaat je zou willen gebruiken (bijv. platte tekst, CSV, JSON).

        // Reflecteer op de objectgeoriënteerde principes die je hebt toegepast in deze opdrachten.
        // Overweeg hoe deze principes bijdragen aan de structuur, onderhoudbaarheid en uitbreidbaarheid van je code.
    }
};


#endif //BEGINNER_OLES8_H
