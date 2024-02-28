#include "Node.h"

//
// Created by ADMIN on 28/02/2024.
//
Node::Node() {
    ptr = nullptr;
}

Card Node::getCard() {
    return card;
}

void Node::setCard(Card _card) {
    card=_card;
}

Node *Node::getPtr() {
    return ptr;
}

void Node::setPtr(Node *node) {
    ptr = node;
}


