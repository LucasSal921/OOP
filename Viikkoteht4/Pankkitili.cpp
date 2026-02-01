#include "Pankkitili.h"

// Konstruktori
Pankkitili::Pankkitili(string Omistaja) {
    omistaja = Omistaja;
    cout << "Pankkitili luotu " << omistaja << endl;
}

// Talletus
bool Pankkitili::deposit(double amount) {
    if (amount < 0) {
        return false;
    }
    saldo += amount;
    cout << "Talletus tehty summalle " << amount  <<  " kayttajan " << omistaja  << " tilille" << endl;
    cout << "Pankkitilin uusi saldo: " << saldo << endl;
    return true;
}

// Nosto
bool Pankkitili::withdraw(double amount) {
    if (amount < 0) {
        return false;
    }
    if (amount > saldo) {
        return false;
    }
    saldo -= amount;
    cout << "Nosto tehty summalle " << amount  <<  " kayttajan " << omistaja  << " tilille" << endl;
    cout << "Pankkitilin uusi saldo: " << saldo << endl;
    return true;
}

double Pankkitili::getBalance() {
    return saldo;
}

