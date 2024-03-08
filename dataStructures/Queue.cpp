//
// Created by ADMIN on 28/02/2024.
//
#include "Queue.h"
#include "iostream"

Queue::Queue() {
    lastAdd = nullptr;
    size = 0;
}

void Queue::addQueue(Card _card) {
    Node *node = new Node(_card);

    if (isEmpty()) {
        lastAdd = node;
        size++;
        return;
    }

    node->setPtr(lastAdd);
    lastAdd = node;
    size++;
}

Card Queue::unQueue() {

    if (isEmpty()) {
        std::cout << "this queue is empty" << std::endl;
    }

    Node *node = lastAdd;
    lastAdd = lastAdd->getFrPtr();
    Card poppedCard = node->getCard();
    size--;
    delete (node);
    return poppedCard;
}

bool Queue::isEmpty() {
    return lastAdd == nullptr;
}

Queue::~Queue() {

}

void Queue::printQueue() {


    if (lastAdd == nullptr) {
        std::cout << "this stack is empty" << std::endl;
        return;
    }

    Node *tmpNode = lastAdd;

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

void Queue::printOnBoard(bool isVisible) {
    if (isVisible && !isEmpty()) {
        std::cout << "[";
        lastAdd->getCard().printCard();
        std::cout << "]       |      ";
    } else {
        std::cout << "[  " << size << "  ]          |         ";

    }
}

int Queue::getSize() {
    return size;
}

void Queue::setSize(int _size) {
    size = _size;
}



