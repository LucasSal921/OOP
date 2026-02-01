#include "Asiakas.h"


// Konstruktori
Asiakas::Asiakas(string nimi, double luottoraja) : nimi(nimi) , kayttotili(nimi) , luottotili(nimi, luottoraja) {
    cout << "Asiakkuus luotu " << nimi << endl;
}

// Tulostaa saldot
void Asiakas::showSaldo() {
    cout << "Pankkitilin saldo: " << kayttotili.getBalance() << endl;
    cout << "Luottotilin saldo: " << luottotili.getBalance() << endl;
}

// Pankkitilin talletus
bool Asiakas::talletus(double amount) {
    return kayttotili.deposit(amount);
}

// Pankkitilin nosto
bool Asiakas::nosto(double amount) {
    return kayttotili.withdraw(amount);
}

// Luottovelan maksu
bool Asiakas::luotonMaksu(double amount) {
    return luottotili.deposit(amount);
}

// Luoton nosto
bool Asiakas::luotonNosto(double amount) {
    return luottotili.withdraw(amount);
}

bool Asiakas::tiliSiirto(double amount, Asiakas& vastaanottaja) {
    if (amount < 0) {
        return false;
    }

    if (!kayttotili.withdraw(amount)) {
        cout << "Ei tarpeeksi rahaa" << endl;
        return false; // ei tarpeeksi rahaa
    }

    // Talletetaan vastaanottajalle
    vastaanottaja.kayttotili.deposit(amount);
    cout <<  nimi  << " Lahetti " << amount << " euroa kayttajalle " << vastaanottaja.getNimi() << endl;
    return true;
}

string Asiakas::getNimi() {
    return nimi;
}
