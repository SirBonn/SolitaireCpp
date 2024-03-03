//
// Created by ADMIN on 29/02/2024.
//

#ifndef SOLITAIRECPP_GAME_H
#define SOLITAIRECPP_GAME_H

#include "../dataStructures/Queue.h"
#include "../dataStructures/Stack.h"
#include "Referee.h"

class Game {
private:

    Stack deck; //mazo contenedor de las 52 cartas
    Stack dropperDeck; //mazo con cartas mezcladas
    Stack discardsDeck; //espacio para poner cartas descartadas

    Queue column1;
    Queue column2;
    Queue column3;
    Queue column4;
    Queue column5;
    Queue column6;
    Queue column7;
    Queue sortedDeckA;
    Queue sortedDeckB;
    Queue sortedDeckC;
    Queue sortedDeckD;
    Queue columnsBoard[7];

    Referee referee;

    void fillCards();
    void fillColumns();
    void dropCards();
    void printBoard();
    void exitGame(bool* _exit);



public:

    Game();

    void playSolitaire();

};

#endif //SOLITAIRECPP_GAME_H
