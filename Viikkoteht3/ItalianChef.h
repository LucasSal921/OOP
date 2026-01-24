#ifndef ITALIANCHEF_H
#define ITALIANCHEF_H

#include "Chef.h"

class ItalianChef : public Chef {
private:
    string password = "pizza"; // salasana
    int flour;
    int water;

    // Private funktio, tekee pitsoja annettujen ainesten perusteella
    int makePizza();

public:
    // konstruktori
    ItalianChef(string name);

    // destruktori
    ~ItalianChef();

    // jäsenfunktio: tarkistaa salasanan ja kutsuu makePizza
    bool askSecret(string pass, int f, int w);

};

#endif
