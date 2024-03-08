//
// Created by ADMIN on 28/02/2024.
//

#ifndef SOLITAIRECPP_STACK_H
#define SOLITAIRECPP_STACK_H

#include "../node/DNode.h"

class Stack{
private:
    DNode* beginNode;
    DNode* endNode;
    DNode* ptr;
    int size;
public:
    Stack();
    void push(Card card);
    Card pop();
    bool isEmpty();
    int getSize();
    void setSize(int _size);
    void printStack();
    DNode * getBeginNode();
    DNode * getEndNode();
    void printSortedDeck();
    Card getTopCard();
    ~Stack();

};

#endif //SOLITAIRECPP_STACK_H
