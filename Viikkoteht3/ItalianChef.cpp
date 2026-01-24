#include "ItalianChef.h"


// Konstruktori
ItalianChef::ItalianChef(string name) : Chef(name) {
    cout << "Chef" << getName() << " luotu." << endl;
}

// Destruktori
ItalianChef::~ItalianChef() {
    cout << "Chef " << getName() << " destruktori" << endl;
}

// Pizzan teko
int ItalianChef::makePizza() {
    int portions = std::min(flour / 5, water / 5);
    cout << getName() << " made " << portions
              << " pizzas using  " << flour << " flour and " << water << " water." << endl;
    return portions;
}

// askSecret
bool ItalianChef::askSecret(string pass, int f, int w) {
    if(pass == password) {
        flour = f;
        water = w;
        makePizza();
        return true;
    } else {
        cout << "Wrong password, no pizza!." << endl;
        return false;
    }
}

