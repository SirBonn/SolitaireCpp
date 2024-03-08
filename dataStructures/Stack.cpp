//
// Created by ADMIN on 28/02/2024.
//
#include <iostream>
#include "Stack.h"

Stack::Stack() {
    beginNode = nullptr;
    endNode = nullptr;
    ptr = nullptr;
    size = 0;
}

void Stack::push(Card card) {

    ptr = new DNode(card);

    if (beginNode == nullptr) {
        beginNode = ptr;
    } else {
        //endNode->getCard().setVisvibility(false);
        endNode->setFrPtr(ptr);
        ptr->setRrPtr(endNode);
    }
    endNode = ptr;
    //endNode->getCard().setVisvibility(true);

}

Card Stack::pop() {

    if (isEmpty()) {
        std::cout << "this stack is empty" << std::endl;
    }

    ptr = endNode;
    endNode = endNode->getRrPtr();
    endNode->setFrPtr(nullptr);
    endNode->getCard().setVisvibility(true);
    std::cout << "last value: ->";
    ptr->getCard().printCard();
    std::cout << " <-\n";

    Card dequeuedCard = ptr->getCard();
    delete(ptr);
    size--;
    return dequeuedCard;
}


bool Stack::isEmpty() {
    return beginNode == nullptr;
}

Stack::~Stack() {

}

int Stack::getSize() {
    return (size);
}

void Stack::setSize(int _size) {
    size = _size;
}


void Stack::printStack() {
    ptr = beginNode;

    while (ptr != nullptr) {
        std::cout << "| [";
        ptr->getCard().printCard();
        std::cout << "] ";
        ptr = ptr->getFrPtr();
    }

}

void Stack::printSortedDeck() {

    if (isEmpty()) {

        std::cout << "[  ]   |   ";
    } else {
        std::cout << "[" << beginNode->getCard().getSymb() << "]      |      ";
    }

}

DNode* Stack::getEndNode() {
    return endNode;
}

DNode* Stack::getBeginNode() {
    return beginNode;
}

Card Stack::getTopCard() {
    return endNode->getCard();
}
