//
// Created by rikpe on 15/03/2024.
//

#ifndef BEGINNER_INSPECTABLE_H
#define BEGINNER_INSPECTABLE_H

// "Inspectable" is een soort checklist of handleiding die zegt welke dingen een ding moet kunnen doen
// om "inspectable" (dus te kunnen inspecteren) te zijn. Het is zoals een contract dat zegt:
// "Als je mij wilt gebruiken, moet je deze dingen kunnen doen."
class Inspectable {
public:
    // Dit is een speciale regel in dat contract. Het zegt dat als je iets maakt dat "inspectable" is,
    // je moet kunnen uitleggen hoe je het inspecteert. Maar het zegt niet hoe je dat doet, dat moet je zelf verzinnen.
    // "virtual" betekent dat elke "inspectable" zijn eigen manier kan hebben om dit te doen,
    // en "= 0" betekent dat deze regel zo belangrijk is, dat als je het niet doet, je niet echt "inspectable" bent.
    virtual void inspect() const = 0;
};



#endif //BEGINNER_INSPECTABLE_H
