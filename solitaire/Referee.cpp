//
// Created by ADMIN on 29/02/2024.
//
#include <ctime>
#include <iostream>
#include "Referee.h"
#include "../dataStructures/Queue.h"

Referee::Referee() {

}

void Referee::randomizeDeck(Queue *deck) {

    srand(static_cast<unsigned int>(time(nullptr)));
    int size = deck->getSize();
    Card *deckStatic = new Card[size];

    for (int i = 0; i < size; ++i) {
        deckStatic[i] = deck->unQueue();
    }

    for (int i = size - 1; i > 0; --i) {
        int j = rand() % (i + 1);
        std::swap(deckStatic[i], deckStatic[j]);
    }

    for (int i = 0; i < size; ++i) {
        deck->addQueue(deckStatic[i]);
    }

}

bool Referee::valuateMovement(Card newCard, Stack *stack) {

    if (stack->getTopCard().getValue() == (newCard.getValue() + 1)) {
        std::cout << "el valor de la carta es menor al de la columna\n";
//        if(newCard.getPale() == stack->getTopCard().getPale()){
        return true;
//        } else {
//            std::cout << "la carta a ingresr no es del mismo simbolo";
//            return false;
//        }
    } else {
        std::cout << "el valor de la carta es mayor, movimiento no valido";
        return true;
    };

}

