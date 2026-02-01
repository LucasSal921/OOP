#ifndef PANKKITILI_H
#define PANKKITILI_H

#include <iostream>
using namespace std;

class Pankkitili {
protected:
    double saldo = 0;
    string omistaja;

public:
    // Konstruktori
    Pankkitili(string Omistaja);

    // Virtuaaliset jäsenfunktiot
    virtual bool deposit(double amount);
    virtual bool withdraw(double amount);


    double getBalance();

};

#endif
