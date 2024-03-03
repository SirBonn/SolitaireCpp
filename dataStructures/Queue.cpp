//
// Created by ADMIN on 28/02/2024.
//
#include <iostream>
#include "Queue.h"

Queue::Queue() {
    frontPtr = nullptr;
    rearPtr = nullptr;
    size = 0;
}

void Queue::addQueue(Card card) {

    Node *node = new Node(card);

    if (isEmpty()) {
        frontPtr = rearPtr = node;
        return;
    }

    rearPtr->setPtr(node);
    rearPtr = node;
    ++size;

}

Card Queue::dropQueue() {

    if (isEmpty()) {
        std::cout << "this queue is empty" << std::endl;
    }

    Node *tmpNode = rearPtr;
    frontPtr = frontPtr->getFrPtr();
    Card dequeuedCard = tmpNode->getCard();
    size--;
    delete tmpNode;

    if (frontPtr == nullptr) {
        rearPtr = nullptr;
    }

    return dequeuedCard;
}


bool Queue::isEmpty() {
    return frontPtr == nullptr;
}

Queue::~Queue() {

}

int Queue::getSize() {
    return (size);
}

void Queue::setSize(int _size) {
    size = _size;
}



void Queue::printQueue(){

    Node* tmpNode = frontPtr;

    while (tmpNode != nullptr) {
        std::cout << "| [";
        tmpNode->getCard().printCard();
        std::cout << "] ";
        tmpNode = tmpNode->getFrPtr();
    }


}

void Queue::printSortedDeck(){
    if(isEmpty()){

        std::cout<<"[  ]   |   ";
    } else {
        std::cout<<"["<<frontPtr->getCard().getSymb()<<"]      |      ";
    }
}
