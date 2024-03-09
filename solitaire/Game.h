//
// Created by ADMIN on 29/02/2024.
//

#ifndef SOLITAIRECPP_GAME_H
#define SOLITAIRECPP_GAME_H

#include "../dataStructures/Stack.h"
#include "../dataStructures/Queue.h"
#include "Referee.h"

class Game {
private:

    Queue deck; //mazo contenedor de las 52 cartas
    Queue dropperDeck; //mazo con cartas mezcladas
    Queue discardsDeck; //espacio para poner cartas descartadas

    Stack column1;
    Stack column2;
    Stack column3;
    Stack column4;
    Stack column5;
    Stack column6;
    Stack column7;
    Stack sortedDeckA;
    Stack sortedDeckB;
    Stack sortedDeckC;
    Stack sortedDeckD;
    Stack columnsBoard[7];

    Referee referee;

    void fillCards();

    void fillColumns();

    void dropCards();

    void printBoard();

    void exitGame(bool *_exit);

    void moveCard();

    void printCards();

    bool colExist(int col);

    void getCard();

    void analyzeDeck();


public:

    Game();

    void playSolitaire();

};

#endif //SOLITAIRECPP_GAME_H
