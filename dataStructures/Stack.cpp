//
// Created by ADMIN on 28/02/2024.
//
#include "Stack.h"
#include "iostream"

Stack::Stack() {
    topStack = nullptr;
}

void Stack::push(Card _card) {
    Node *node = new Node(_card);

    if (isEmpty()) {
        topStack = node;
        return;
    }

    node->setPtr(topStack);
    topStack = node;

}

Card Stack::pop() {

    if (isEmpty()) {
        std::cout << "this stack is empty" << std::endl;
    }

    Node *node = topStack;
    topStack = topStack->getPtr();
    Card poppedCard = node->getCard();
    delete (node);
    return poppedCard;
}

bool Stack::isEmpty() {
    return topStack == nullptr;
}

Stack::~Stack() {

}

void Stack::printDeck() {


    if (topStack == nullptr) {
        std::cout << "this stack is empty" << std::endl;
        return;
    }

    Node *tmpNode = topStack;

    while (tmpNode->getPtr() != nullptr) {
        std::cout << "\t";
        tmpNode->getCard().printCard();
        std::cout << "\n";
        tmpNode = tmpNode->getPtr();
    }

}


