#include "Chef.h"
#include "ItalianChef.h"


using namespace std;

int main() {
    string password = "";
    Chef gordon("Gordon");
    gordon.makeSalad(11);  // 11 ainesta -> 2 annosta
    gordon.makeSoup(14);   // 14 ainesta -> 4 annosta

    // 2. ItalianChef (perii Chef)
    ItalianChef mario("Mario");
    mario.makeSalad(9); // Mario tekee salaattia

    cout << "Password for pizza: "; // Kysytään salasanaa, en ole varma pitikö tämä tehdä näin mutta tuntuu järkevältä
    cin >> password;



    bool ok = mario.askSecret(password, 25, 25); //Jos salasana on oikein, Mario tekee pizzaa

    if(ok) {
        cout << "password ok!" << std::endl;
    }

    return 0;
}
