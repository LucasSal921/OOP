#ifndef CHEF_H
#define CHEF_H
#include <string>
#include <iostream>
using namespace std;

class Chef {
private:
    string chefName;

public:
    // konstruktori
    Chef(string name);

    // destruktori
    ~Chef();

    // jäsenfunktiot
    int makeSalad(int ingredients);
    int makeSoup(int ingredients);

    string getName();
};

#endif
