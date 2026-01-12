#include <iostream>

using namespace std;

//Prototyyppi
int game(int maxnum);

//Pääohjelma
int main()
{
    int arvausten_lkm = 0;
    int maxnum = 40;
    arvausten_lkm = game(maxnum);
    cout << "Arvauksia: "
         << arvausten_lkm << endl;

    return 0;
}

int game(int maxnum) {
    int arvausten_lkm = 0;
    int satunnaisluku = 0;
    int arvaus = 0;



    //1. Arvotaan luku
    srand(time(NULL));
    satunnaisluku = rand() % maxnum;

    while (true) {

        //2. Kysytään arvaus
        cout << "Anna luku: "
             << endl;
        cin >> arvaus;
        arvausten_lkm++; //kun pelaaja tekee arvauksen, arvausten lukumäärä nousee yhdellä

        //3. Tarkistetaan onko arvaus pienempi, suurempi tai yhtäsuuri kuin luku
        //3.1 Jos arvaus yhtäsuuri kuin luku
        if (arvaus == satunnaisluku) {
            cout << "Oikein!" << endl;
            break;
        }
        //3.2 Jos arvaus pienempi kuin luku
        if (arvaus < satunnaisluku) {
            cout << "Luku on suurempi!" << endl;
        }
        //3.3 Jos arvaus suurempi kuin luku
        if (arvaus > satunnaisluku) {
            cout << "Luku on pienempi!" << endl;
        }
    }
    return arvausten_lkm;
}
