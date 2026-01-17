#include "Game.h"
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

Game::Game(int maxNumero)
{
    cout << "Game-konstruktori luotu, maximi numero = " << maxNumero << endl;

    this->maxNumero = maxNumero;
    arvaukset = 0;

    srand(time(NULL));
    randomNumero = rand() % maxNumero + 1;
}


//Arvaus peli
void Game::Play()
{
    while (true)
    {
        cout << "Anna luku: " << endl;
        cin >> arvaus;
        arvaukset++;

        if (arvaus == randomNumero)
        {
            cout << "Oikein!" << endl;
            break;
        }
        else if (arvaus < randomNumero)
        {
            cout << "Luku on suurempi!" << endl;
        }
        else
        {
            cout << "Luku on pienempi!" << endl;
        }
    }

    printGameResult();
}

//Tulostaa tulokset
void Game::printGameResult()
{
    cout << "Oikea luku oli: " << randomNumero << endl;
    cout << "Arvauksia tarvittiin: " << arvaukset << endl;
}

// Destruktori
Game::~Game()
{
    cout << "Game-destruktori: olio poistettu muistista" << endl;
}
