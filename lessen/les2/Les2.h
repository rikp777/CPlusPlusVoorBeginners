//
// Created by rikpe on 09/10/2023.
//

#include <iostream>

#ifndef BEGINNER_LESSON2_H
#define BEGINNER_LESSON2_H

// Welkom terug bij onze C++ les! Vandaag gaan we iets cools leren: hoe we met getallen kunnen spelen
// en ze met elkaar kunnen vergelijken, net zoals wanneer je raadsels oplost of wanneer je probeert te beslissen
// wie de meeste snoepjes heeft. Dit alles doen we met behulp van iets in C++ dat we 'operatoren' en 'vergelijkingen' noemen.

//Operatoren:

// Stel je voor, je hebt twee stapels snoepjes, één met 10 snoepjes en de andere met 20 snoepjes.
// De operatoren helpen je om te berekenen hoeveel snoepjes je hebt als je ze samenlegt, van elkaar afhaalt, met elkaar vermenigvuldigt, enzovoort.
// Dus in de functie operators:
// + helpt je om de snoepjes samen te voegen: a + b is 10 + 20 = 30 snoepjes.
// - helpt je om de snoepjes van elkaar af te trekken: a - b is 10 - 20 = -10 (je hebt een tekort van 10 snoepjes).
// * helpt je om de snoepjes met elkaar te vermenigvuldigen: a * b is 10 * 20 = 200 snoepjes (als je 10 groepen van 20 snoepjes hebt).
// / helpt je om de snoepjes te delen: b / a is 20 / 10 = 2 (elke groep krijgt 2 snoepjes).
// % helpt je om de resterende snoepjes te vinden na het delen: b % a is 20 % 10 = 0 (er zijn geen overgebleven snoepjes).

//Vergelijkingen:

// Nu stel je voor dat je twee dozen hebt, één met 5 knikkers en de andere met 10 knikkers. Je wilt weten welke doos meer knikkers heeft, of ze hetzelfde aantal knikkers hebben, enzovoort. In de functie vergelijk:
// == helpt je om te zien of de dozen hetzelfde aantal knikkers hebben: x == y controleert of 5 gelijk is aan 10 (dit is niet waar).
// != helpt je om te zien of de dozen een verschillend aantal knikkers hebben: x != y controleert of 5 verschillend is van 10 (dit is waar).
// < helpt je om te zien of de ene doos minder knikkers heeft dan de andere: x < y controleert of 5 kleiner is dan 10 (dit is waar).
// > helpt je om te zien of de ene doos meer knikkers heeft dan de andere: x > y controleert of 5 groter is dan 10 (dit is niet waar).
// Je gebruikt ook && (EN) en || (OF) om twee vergelijkingen tegelijk te controleren. Dus als je wilt weten of één doos minder knikkers heeft EN de knikkers verschillend zijn, zou je (x < y) && (x != y) gebruiken.
class Les2 {
public:
    void runMijnCode() {
        // Eerst gaan we laten zien hoe je met getallen kunt spelen met behulp van 'operatoren'.
        // Daarna gaan we kijken hoe we getallen met elkaar kunnen vergelijken met 'vergelijkingen'.
        operators();
        vergelijk();
    }


    // Operators:
    // In C++, net zoals in de wiskunde, kunnen we verschillende 'operatoren' gebruiken om berekeningen uit te voeren.
    // Operators zijn symbolen die we gebruiken om dingen te doen met variabelen.
    // De meest voorkomende zijn + voor optellen, - voor aftrekken, * voor vermenigvuldigen, / voor delen en % voor de rest.
    void operators() {
        int a = 10; // Stel je voor, je hebt een zak met 10 snoepjes.
        int b = 20; // En nog een zak, maar deze keer met 20 snoepjes.

        // Laten we eens kijken wat we allemaal met deze twee zakken snoep kunnen doen:
        int som = a + b;  // Optellen met '+', is zoals de snoepjes uit beide zakken samen in één grote zak doen. We stoppen de uitkomst in het bakje som.
        int verschil = a - b; // Aftrekken met '-', is alsof je snoepjes uit de ene zak wegneemt van de andere, we stoppen de uitkomst in het bakje verschil.
        int product = a * b; // Vermenigvuldigen met '*', is alsof je de inhoud van de ene zak met die van de andere vermenigvuldigt. Dus we stoppen het resultaat in het bakje 'product'.
        int quotient = b / a; // Delen met '/', is het verdelen van de snoepjes in de ene zak gelijkmatig over het aantal in de andere zak. We stoppen het resultaat in het bakje 'quotient'.
        int rest = b % a; // De modulo-operator '%', vertelt ons hoeveel snoepjes overblijven als we proberen ze gelijk te verdelen. We stoppen het resultaat in het bakje 'rest'.

        // Laten we de resultaten bekijken:
        std::cout <<
        "Som: " << som <<
        ", Verschil: " << verschil <<
        ", Product: " << product<<
        ", Quotient: " << quotient <<
        ", Rest: " << rest << std::endl;
        // Deze operatoren helpen ons om snel berekeningen uit te voeren en problemen op te lossen.
    }

    // Nu we weten hoe we met getallen kunnen spelen, laten we eens kijken hoe we ze met elkaar kunnen vergelijken.

    // Vergelijkingen:
    // Vergelijkingen zijn operatoren die we gebruiken om te controleren of twee waarden gelijk zijn, of de ene groter of kleiner is dan de andere.
    // Vergelijkingen zijn als wiskundige raadsels. We gebruiken ze om te kijken hoe twee getallen zich tot elkaar verhouden.
    void vergelijk() {
        int x = 5; // Stel je voor, je hebt een doos met 5 knikkers die doos noemen we x.
        int y = 10; // En een andere doos met 10 knikkers deze doos noemen we y.

        // Vergelijkingen zijn altijd 'waar' of 'niet waar'. Ze vertellen ons of iets waar is of niet.
        // We kunnen verschillende vergelijkingen maken om te zien hoe deze twee dozen zich tot elkaar verhouden:
        bool isGelijk = (x == y); // Met '==' kunnen we checken of beide dozen hetzelfde aantal knikkers hebben. Dit is niet waar. Het antwoord stoppen we in de bakje isGelijk.
        bool isNietGelijk = (x != y); // Met '!=' kunnen we zien of ze een verschillend aantal knikkers hebben. Dit is waar. Het antwoord stoppen we in de bakje isNietGelijk.
        bool isKleiner = (x < y); // Met '<' kijken we of de ene doos minder knikkers heeft dan de andere. Dit is waar. Het antwoord stoppen we in de bakje isKleiner.
        bool isGroter = (x > y); // Met '>' kunnen we zien of de ene doos meer knikkers heeft. Dit is niet waar. Het antwoord stoppen we in de bakje isGroter.

        // Soms willen we twee dingen tegelijk checken.
        // Dat doen we met logische operatoren:
        bool beideWaar = (x < y) && (x != y); // Met '&&' (EN) checken we of beide voorwaarden waar zijn.
        bool eenWaar = (x < y) || (x > y); // Met '||' (OF) is het genoeg als één van de twee voorwaarden waar is.

        // Nu gaan we onze bevindingen op het scherm tonen:
        std::cout << std::boolalpha; // Dit zorgt ervoor dat we 'waar' of 'niet waar' zien in plaats van '1' of '0'.
        std::cout <<
        "Is Gelijk: " << isGelijk <<
        ", Is Niet Gelijk: " << isNietGelijk <<
        ", Is Kleiner: " << isKleiner<<
        ", Is Groter: " << isGroter <<
        ", Beide Waar: " << beideWaar <<
        ", Een Waar: " << eenWaar
        << std::endl;
        // Door deze vergelijkingen kunnen we beslissingen nemen en problemen oplossen in onze code.
    }
};

// Met deze uitgebreide uitleg hopen we dat je een beter begrip hebt gekregen van hoe je getallen kunt manipuleren
// en vergelijken in C++. Dit zijn fundamentele vaardigheden in programmeren die je zullen helpen om coole dingen te bouwen!

// We gezien hoe operatoren ons helpen om berekeningen uit te voeren en logische puzzels op te lossen.
// Denk eraan, de operatoren (+, -, *, /, %) zijn voor optellen, aftrekken, vermenigvuldigen, delen, en het vinden van de rest van getallen.
// We hebben ze gebruikt in speelse voorbeelden met snoepjes en knikkers, maar de toepassingen zijn eindeloos in de echte programmeerwereld.

// En met vergelijkingen (==, !=, <, >, &&, ||) hebben we geleerd hoe we situaties kunnen analyseren, beslissingen kunnen nemen, en complexe problemen kunnen oplossen met simpele ja of nee antwoorden.
// Dit zijn krachtige concepten die je in staat stellen om de computer precieze instructies te geven en intelligente programma's te schrijven die kunnen reageren op allerlei situaties en gegevens.
// Terwijl je verder gaat, moedig ik je aan om te experimenteren met deze operatoren en vergelijkingen.
// Probeer je eigen raadsels en puzzels te creëren, of misschien zelfs een klein spel.
// Programmeren is niet alleen logica en berekeningen; het is ook creativiteit en plezier.
// Onthoud dat elke programmeur klein begonnen is, net zoals jij nu.
// Elke regel code die je schrijft, is een stap vooruit in je reis.
// Blijf nieuwsgierig, blijf experimenteren, en aarzel niet om vragen te stellen of hulp te zoeken als je vastloopt.
// De programmeergemeenschap is groot en ondersteunend, en er is altijd iemand bereid om een mede-ontwikkelaar te helpen.
// Ik kijk uit naar onze volgende les, waar we nog dieper in de wereld van programmeren zullen duiken.
// Tot die tijd, blijf spelen met code en ontdek wat je allemaal kunt bouwen en oplossen.
// Je bent op weg naar het worden van een geweldige programmeur!

// Bedankt voor je inzet vandaag, en tot de volgende keer in onze C++ avonturen!

#endif //BEGINNER_LESSON2_H
