# Beginnerscursus C++

Welkom bij de Beginnerscursus C++! Deze cursus is speciaal ontworpen om jongeren op een toegankelijke manier kennis te laten maken met programmeren in C++. Het doel is om een solide basis te leggen in een van de meest krachtige en veelzijdige programmeertalen die wereldwijd wordt gebruikt in softwareontwikkeling. Met behulp van praktische voorbeelden en stapsgewijze instructies leer je de basisbeginselen van C++ en ontdek je hoe je zelf programma’s kunt schrijven en uitvoeren. Deze cursus is ook uitermate geschikt voor gebruik in informaticalessen op havo en vwo niveau.

## Cursusdoelen

Aan het einde van deze cursus zul je in staat zijn om:

- De basis syntax en structuren van C++ te begrijpen en toe te passen.
- Te werken met variabelen, datatypes, en operatoren.
- Controlestructuren zoals loops en conditionele statements te gebruiken.
- Functies te definiëren en aan te roepen voor herbruikbare codeblokken.
- De beginselen van objectgeoriënteerd programmeren (OOP) te begrijpen, inclusief klassen en objecten.
- Eenvoudige datastructuren zoals arrays en vectors te manipuleren.
- Dynamisch geheugen te beheren met pointers.

## Cursusstructuur

De cursus is verdeeld in verschillende lessen, elk gericht op een specifiek aspect van C++ programmeren:

1. **Les 1**: Variabelen en Datatypes
2. **Les 2**: Operatoren en Vergelijkingen
3. **Les 3**: Beslissingsstructuren
4. **Les 4**: Functies
5. **Les 5**: Arrays en Vectors
6. **Les 6**: Pointers en Referenties
7. **Les 7**: Toepassen van geleerde concepten 
8. **Les 8**: Classes en Objecten 
9. **Les 9**: Erfgoed en Polymorfisme

Elke les bevat zowel theoretische uitleg als praktische codevoorbeelden om je te helpen de concepten te begrijpen en toe te passen.

# Gebruiksinstructies

Om de codevoorbeelden te gebruiken en te oefenen met het lesmateriaal, volg je deze stappen:

- **Installatie**: Zorg ervoor dat je een C++ compiler hebt geïnstalleerd op je computer. GCC (GNU Compiler Collection) en Visual Studio zijn populaire keuzes.
- **Codebestanden**: Download de codebestanden van de bijbehorende lessen uit de cursusrepository.
- **Compilatie**: Open een terminal of commandoprompt, navigeer naar de map met het codebestand en voer de volgende opdracht uit om het bestand te compileren: g++ -o main main.cpp.
- **Uitvoering**: Voer het gecompileerde programma uit door ./main te typen in je terminal of commandoprompt.

# Hoe de Lessen te Gebruiken

Het hoofdprogramma main.cpp maakt gebruik van verschillende lessenmodules en oefeningen. Hieronder volgt een beschrijving van hoe je specifieke lessen en bijbehorende oefeningen kunt uitvoeren:

Het programma gebruikt een switch statement om te bepalen welke les of oefening uitgevoerd moet worden, gebaseerd op de waarde van de variabele `ikBenBijLes`. switch Elke case in het switch statement komt overeen met een lesnummer. Binnen elke case wordt gecontroleerd of `ikGaOefenen` `ja` of `nee` is. Indien `ja`, wordt de oefenmodule van de desbetreffende les uitgevoerd. Is het `nee`, dan wordt de hoofdlesmodule uitgevoerd.
- **Lesmodules**: Elke lesmodule (Les1, Les2, etc.) heeft een `runMijnCode` methode die uitgevoerd wordt om de specifieke les te tonen.
- **Oefeningmodules**: Deze modules (OLes1, OLes2, etc.) bevatten oefeningen die gerelateerd zijn aan de les. Ze zijn bedoeld om het begrip van de lesinhoud te verdiepen en praktische programmeervaardigheden te ontwikkelen.
- **Starten**: Om een specifieke les of oefening te starten, moet je de waarde van `ikBenBijLes` aanpassen aan het lesnummer en `ikGaOefenen` instellen op `ja` of `nee` afhankelijk van of je de oefening wilt uitvoeren of niet.

Deze structuur helpt studenten bij het zelfstandig navigeren door de cursus, waardoor ze kunnen kiezen welk materiaal ze willen bestuderen op basis van hun huidige voortgang en behoeften.

## Ondersteuning en Feedback

Heb je vragen of loop je tegen problemen aan? Voel je vrij om [een issue aan te maken](#) in de cursusrepository of contact op te nemen via de aangegeven contactmethoden.

Veel succes en plezier met het leren van C++!