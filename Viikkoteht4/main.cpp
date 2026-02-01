#include "Asiakas.h"

int main() {
    Asiakas a("Maija", 2000);
    a.showSaldo();
    Asiakas b("Pekka", 1500);
    b.showSaldo();

    a.luotonNosto(50);
    a.talletus(50);
    a.tiliSiirto(40, b);
    return 0;
}
