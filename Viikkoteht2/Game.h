#ifndef GAME_H
#define GAME_H

// Game-luokka
class Game
{
private:
    int maxNumero;     // Suurin luku
    int randomNumero;  // Satunnainen luku
    int arvaukset;     // Arvausten lukumäärä
    int arvaus;        // Pelaajan viimeisin arvaus

public:
    // Konstruktori alustaa pelin
    Game(int maxNumero);

    // Käynnistää pelin
    void Play();

    // Destruktori: kutsutaan kun Game-olio poistuu muistista
    ~Game();

    // Tulostaa pelin lopputuloksen
    void printGameResult();
};

#endif
