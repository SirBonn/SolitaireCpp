//
// Created by ADMIN on 29/02/2024.
//
#include <ctime>
#include "Referee.h"
#include "../dataStructures/Stack.h"

Referee::Referee() {

}

void Referee::randomizeDeck(Stack *deck) {

    srand(static_cast<unsigned int>(time(nullptr)));
    int size = deck->getSize();
    Card* deckStatic= new Card[size];

    for (int i = 0; i <size; ++i) {
        deckStatic[i]=deck->pop();
    }

    for(int i = size-1; i>0;--i){
        int j = rand() % (i+1);
        std::swap(deckStatic[i], deckStatic[j]);
    }

    for (int i = 0; i <size; ++i) {
        deck->push(deckStatic[i]);
    }

}

