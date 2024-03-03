//
// Created by ADMIN on 28/02/2024.
//

#ifndef SOLITAIRECPP_STACK_H
#define SOLITAIRECPP_STACK_H

#include "../node/Node.h"

class Stack {
private:
    Node* topStack;
    int size;
public:
    Stack();
    void push(Card _card);
    Card pop();
    bool isEmpty();
    void printStack();
    int getSize();
    void setSize(int _size);
    ~Stack();
    void printOnBoard(bool isVisible);
};

#endif //SOLITAIRECPP_STACK_H
