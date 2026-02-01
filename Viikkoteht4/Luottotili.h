#ifndef LUOTTOTILI_H
#define LUOTTOTILI_H

#include "Pankkitili.h"


class Luottotili : public Pankkitili {
protected:
    double luottoraja = 0;

public:
    // Konstruktori
    Luottotili(string nimi, double luottoraja);

    bool withdraw(double amount) override;
    bool deposit(double amount) override;
};

#endif
