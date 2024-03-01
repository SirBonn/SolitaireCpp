//
// Created by ADMIN on 29/02/2024.
//
#include "Game.h"
#include "iostream"
#include "string"

Game::Game() {
    deck = Stack(); //mazo contenedor de las 52 cartas

    dropperDeck = Stack(); //mazo con cartas mezcladas
    discardsDeck = Stack(); //espacio para poner cartas descartadas

    column1 = Queue();
    column2 = Queue();
    column3 = Queue();
    column4 = Queue();
    column5 = Queue();
    column6 = Queue();
    column7 = Queue();

    sortedDeckA = Queue();
    sortedDeckB = Queue();
    sortedDeckC = Queue();
    sortedDeckD = Queue();
}

void Game::fillCards() {


    char values[] = {'1', '2', '3', '4', '5', '6', '7', '8', '9', 'J', 'K', 'Q'};
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

    deck.printDeck();

}



void Game::dropCards() {

}

Queue Game::sortDeck() {
    return Queue();
}


