#ifndef ASIAKAS_H
#define ASIAKAS_H

#include "Pankkitili.h"
#include "Luottotili.h"


class Asiakas {
private:
    string nimi;
    Pankkitili kayttotili;
    Luottotili luottotili;

public:
    // Konstruktori
    Asiakas(string nimi, double luottoraja);

    // Tulostaa molempien tilien saldot
    void showSaldo();

    string getNimi();

    // Pankkitilin operaatiot
    bool talletus(double amount);
    bool nosto(double amount);

    // Luottotilin operaatiot
    bool luotonMaksu(double amount);
    bool luotonNosto(double amount);

    bool tiliSiirto(double amount, Asiakas& vastaanottaja);
};

#endif
