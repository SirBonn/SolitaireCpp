//
// Created by ADMIN on 28/02/2024.
//
#include <iostream>
#include "Queue.h"

Queue::Queue() {
    frontPtr = nullptr;
    rearPtr = nullptr;
}

void Queue::addQueue(Card card) {

    Node *node = new Node(card);

    if (isEmpty()) {
        frontPtr = rearPtr = node;
        return;
    }

    rearPtr->setPtr(node);
    rearPtr = node;

}

Card Queue::dropQueue() {

    if(isEmpty()){
        std::cout<<"this queue is empty"<<std::endl;
    }

    Node* tmpNode = frontPtr;
    frontPtr = frontPtr->getPtr();
    Card dequeuedCard = tmpNode->getCard();
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

