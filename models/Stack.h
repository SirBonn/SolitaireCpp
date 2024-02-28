//
// Created by ADMIN on 28/02/2024.
//

#ifndef SOLITAIRECPP_STACK_H
#define SOLITAIRECPP_STACK_H

#include "../node/Node.h"

class Stack {
private:
    Node* topStack;
public:
    Stack();
    void push(Card _card);
    Card pop();
    bool isEmpty();
    ~Stack();
};

#endif //SOLITAIRECPP_STACK_H
