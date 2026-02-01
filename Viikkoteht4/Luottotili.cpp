#include "Luottotili.h"


// Konstruktori
Luottotili::Luottotili(string nimi, double raja) : Pankkitili(nimi), luottoraja(raja) {
    cout << "Luottotili luotu " << nimi << ", luottoraja " << luottoraja << endl;
}


// Luoton nosto
bool Luottotili::withdraw(double amount) {
    if (amount < 0) {
        cout << "Luoton nosto ei onnistunut" << endl;
        return false;
    }

    // Tarkistetaan ettei mennä alle luottorajan
    if (saldo - amount < -luottoraja) {
        cout << "Luoton nosto ei onnistunut" << endl;
        return false;
    }

    saldo -= amount;
    cout << "Luoton nosto onnistui, luottosaldo jalkeen: " << saldo << endl;
    return true;
}

// Luottovelan maksu
bool Luottotili::deposit(double amount) {

    if ((amount < 0)||( (amount + saldo) > 0 ) ) {
        cout << "Luoton maksu ei onnistunut" << endl;
        return false;
    }

    saldo += amount;
    cout << "Luoton maksu onnistui, luottosaldo jalkeen: " << saldo << endl;
    return true;
}
