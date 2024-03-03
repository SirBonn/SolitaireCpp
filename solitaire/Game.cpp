//
// Created by ADMIN on 29/02/2024.
//
#include <iostream>
#include <conio.h>
#include "Game.h"
#include "string"

Game::Game() {
    deck = Stack();         //mazo contenedor de las 52 cartas
    discardsDeck = Stack(); //espacio para poner cartas descartadas
//
//    column1 = Queue();      //
//    column2 = Queue();
//    column3 = Queue();
//    column4 = Queue();
//    column5 = Queue();
//    column6 = Queue();
//    column7 = Queue();

    sortedDeckA = Queue();  //
    sortedDeckB = Queue();
    sortedDeckC = Queue();
    sortedDeckD = Queue();

    referee = Referee();
    Queue columnsBoard[] = {column1, column2, column3, column4, column5, column6, column7};
}

void Game::playSolitaire() {

    bool winner = false;
    char opc;
    fillCards();
    fillColumns();
    while (!winner) {
        printBoard();
        std::cin >> opc;

        switch (opc) {
            case 'A' | 'a': //mover carta
                break;
            case 'S' | 's': //pedir cartas
                dropCards();
                break;
            case 'D' | 'd': //deshacer movimiento
                columnsBoard[3].dropQueue();
                break;
            case 'W' | 'w': //deshacer movimiento

                break;
            case 'X' | 'x': //rendirse
                exitGame(&winner);
                break;
            default:
                std::cout << "Ha ingresado un caracter invalido,\nVuelva a intentar";
                std::cout << "\nPresiona una tecla para continuar";
                getch();
        }


    }

};

void Game::fillCards() {


    char values[] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'J', 'K', 'Q'};
    std::string symbs[] = {"<>", "<3", "E3", "!!"};
    int count = 1;

    for (std::string sym: symbs) {
        for (char value: values) {
            bool color = count % 2 == 0;
            Card newCard = Card(sym, value, color);
            deck.push(newCard);
        }
        count++;
    }
    referee.randomizeDeck(&deck);

}

void Game::fillColumns() {

    for (int i = 0; i < 7; i++) {
        for (int j = i; j < 7; j++) {
            columnsBoard[j].addQueue(deck.pop());
        }
    }
}

void Game::dropCards() {

    for (int i = 0; i < 7; i++) {
        columnsBoard[i].addQueue(deck.pop());
    }
}

void Game::exitGame(bool* _exit) {

    std::cout << "\n---------------------------------------------------------------";
    std::cout << "\nPulsa Y si estas seguro de querer abandonar el juego              ";
    std::cout << "\nPulsa cualquier otra tecla para seguir jugando                   \n\t|>> ";
    char tmpChar;
    std::cin>>tmpChar;
    if(tmpChar == 'Y' || tmpChar == 'y'){
        *_exit = true;
    }   else {
        *_exit = false;
    }
}

void Game::printBoard() {
    std::cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
    std::cout << "\n---------------------------------------------------------------\n";
    std::cout << "  _____  ___   _      ____  ______   ____  ____  ____     ___ \n"
                 " / ___/ /   \\ | |    |    ||      | /    ||    ||    \\   /  _]\n"
                 "(   \\_ |     || |     |  | |      ||  o  | |  | |  D  ) /  [_ \n"
                 " \\__  ||  O  || |___  |  | |_|  |_||     | |  | |    / |    _]\n"
                 " /  \\ ||     ||     | |  |   |  |  |  _  | |  | |    \\ |   [_ \n"
                 " \\    ||     ||     | |  |   |  |  |  |  | |  | |  .  \\|     |\n"
                 "  \\___| \\___/ |_____||____|  |__|  |__|__||____||__|\\_||_____|\n"
                 "                                                              ";
    std::cout << "\n---------------------------------------------------------------";

    std::cout << "\n----------------------------SUITS------------------------------\n\t    ";

    sortedDeckA.printSortedDeck();
    sortedDeckB.printSortedDeck();
    sortedDeckC.printSortedDeck();
    sortedDeckD.printSortedDeck();

    std::cout << "\n---------------------------------------------------------------";

    std::cout << "\n                full deck                  discard Deck\n\t\t";
    deck.printOnBoard(false);
    discardsDeck.printOnBoard(true);

    for (int i = 0; i < 7; ++i) {
        std::cout << "\n" << i + 1 << ") ";
        columnsBoard[i].printQueue();
    }
    std::cout << "\n---------------------------------------------------------------";
    std::cout << "\nPulsa A: para seleccionar una carta     Pulsa S: para pedir cartas";
    std::cout << "\nPulsa D: para deshacer el movimiento    Pulsa W: para sacar una carta";
    std::cout << "\nPulsa X: para rendirse y abandonar la partida                        \n\t|>> ";
};



