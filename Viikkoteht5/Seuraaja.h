#ifndef SEURAAJA_H
#define SEURAAJA_H
#include <iostream>
using namespace std;

class Seuraaja {
private:
    string nimi;
public:
    Seuraaja* next = nullptr;

    Seuraaja(string nimi);
    string getNimi();
    void paivitys(string viesti);

};


#endif // SEURAAJA_H
