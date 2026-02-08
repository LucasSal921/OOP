#ifndef NOTIFIKAATTORI_H
#define NOTIFIKAATTORI_H
#include <Seuraaja.h>

class Notifikaattori {
private:
    Seuraaja* seuraajat = nullptr;
public:
    Notifikaattori();
    void lisaa(Seuraaja*);
    void poista(Seuraaja*);
    void tulosta();
    void postita(string viesti);
};


#endif // NOTIFIKAATTORI_H
