//
// Created by ADMIN on 28/02/2024.
//
#include "Stack.h"
#include "iostream"

Stack::Stack() {
    topStack = nullptr;
    size = 0;
}

void Stack::push(Card _card) {
    Node *node = new Node(_card);

    if (isEmpty()) {
        topStack = node;
        size++;
        return;
    }

    node->setPtr(topStack);
    topStack = node;
    size++;
}

Card Stack::pop() {

    if (isEmpty()) {
        std::cout << "this stack is empty" << std::endl;
    }

    Node *node = topStack;
    topStack = topStack->getFrPtr();
    Card poppedCard = node->getCard();
    size--;
    delete (node);
    return poppedCard;
}

bool Stack::isEmpty() {
    return topStack == nullptr;
}

Stack::~Stack() {

}

void Stack::printStack() {


    if (topStack == nullptr) {
        std::cout << "this stack is empty" << std::endl;
        return;
    }

    Node *tmpNode = topStack;

    while (tmpNode->getFrPtr() != nullptr) {
        std::cout << "\t";
        tmpNode->getCard().printCard();
        std::cout << "\n";
        tmpNode = tmpNode->getFrPtr();
    }
    std::cout << "\t";
    tmpNode->getCard().printCard();
    std::cout << "\n";
    tmpNode = tmpNode->getFrPtr();

}

void Stack::printOnBoard(bool isVisible) {
    if (isVisible && !isEmpty()) {
        std::cout << "[";
        topStack->getCard().printCard();
        std::cout << "]       |      ";
    } else {
        std::cout << "[  " << size << "  ]          |         ";

    }
}

int Stack::getSize() {
    return size;
}

void Stack::setSize(int _size) {
    size = _size;
}



