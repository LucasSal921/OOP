#include "Notifikaattori.h"

// Konstruktori
Notifikaattori::Notifikaattori() : seuraajat(nullptr) {
    cout << "Luodaan notifikaattori" << endl;
}

// Lisäys
void Notifikaattori::lisaa(Seuraaja* uusi) {
    if (!uusi) return;
    uusi->next = seuraajat;
    seuraajat = uusi;
    cout << "Notifikaattori lisaa seuraajan " << uusi->getNimi() << endl;
}

// Poistaa solmun listasta
void Notifikaattori::poista(Seuraaja* poistettava) {
    if (!poistettava) return;

    // Jos poistettava on ensimmäinen
    if (seuraajat == poistettava) {
        cout << "Notifikaattori poistaa seuraajan " << poistettava->getNimi() << endl;
        seuraajat = seuraajat->next;
        poistettava->next = nullptr;
        return;
    }

    // Käydään lista läpi
    Seuraaja* nykyinen = seuraajat;
    while (nykyinen->next != nullptr) {
        if (nykyinen->next == poistettava) {
            cout << "Notifikaattori poistaa seuraajan " << poistettava->getNimi() << endl;
            nykyinen->next = poistettava->next; // ohitetaan poistettava
            return;
        }
        nykyinen = nykyinen->next;
    }
}


// Tulostaa kaikkien seuraajien nimet
void Notifikaattori::tulosta() {
    cout << "Notifikaattorin seuraajat:" << endl;
    Seuraaja* nykyinen = seuraajat;
    while (nykyinen != nullptr) {
        cout << "Seuraaja " << nykyinen->getNimi() << endl;
        nykyinen = nykyinen->next;
    }
}


// Postittaa viestin kaikille seuraajille
void Notifikaattori::postita(string viesti) {
    Seuraaja* nykyinen = seuraajat;
    cout << "Notifikaattori postaa viestin " << viesti << endl;
    while (nykyinen != nullptr) {
        nykyinen->paivitys(viesti);
        nykyinen = nykyinen->next;
    }
}
