#include "Seuraaja.h"


// Konstruktori
Seuraaja::Seuraaja(string n) : nimi(n), next(nullptr) {
    cout << "Luodaan seuraaja " << nimi << endl;
}

// Palauttaa seuraajan nimen
string Seuraaja::getNimi() {
    return nimi;
}

// Tulostaa viestin
void Seuraaja::paivitys(string viesti) {
    cout << "Seuraaja " << nimi << " sai viestin: " << viesti << endl;
}
