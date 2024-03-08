#include "DNode.h"
//
// Created by ADMIN on 3/03/2024.
//

DNode::DNode() {
    frontPtr = nullptr;
    rearPtr = nullptr;
}

Card DNode::getCard() {
    return card;
}

void DNode::setCard(Card _card) {
    card=_card;
}

DNode *DNode::getFrPtr() {
    return frontPtr;
}

void DNode::setFrPtr(DNode *node) {
    frontPtr = node;
}

DNode *DNode::getRrPtr() {
    return rearPtr;
}

void DNode::setRrPtr(DNode *node) {
    rearPtr = node;
}