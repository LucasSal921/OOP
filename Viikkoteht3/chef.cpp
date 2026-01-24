#include "Chef.h"

// Konstruktori
Chef::Chef(string name) : chefName(name) {
    cout << "Chef " << chefName << " luotu." << endl;
}

// Destruktori
Chef::~Chef() {
    cout << "Chef " << chefName << " destruktori" << endl;
}

// Salaatin teko
int Chef::makeSalad(int ingredients) {
    int portions = ingredients / 5;
    cout << chefName << " made " << portions
              << " salads using " << ingredients << " ingredients." << endl;
    return portions;
}

// Keiton teko
int Chef::makeSoup(int ingredients) {
    int portions = ingredients / 3;
    cout << chefName << " made " << portions
              << " soups using " << ingredients << " ingredients." << endl;
    return portions;
}


string Chef::getName() {
    return chefName;
}
