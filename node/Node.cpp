#include "Node.h"

//
// Created by ADMIN on 28/02/2024.
//

Node::Node() {
    frontPtr = nullptr;
}

Card Node::getCard() {
    return card;
}

void Node::setCard(Card _card) {
    card=_card;
}

Node *Node::getFrPtr() {
    return frontPtr;
}

void Node::setPtr(Node *node) {
    frontPtr = node;
}


