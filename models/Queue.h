//
// Created by ADMIN on 28/02/2024.
//

#ifndef SOLITAIRECPP_QUEUE_H
#define SOLITAIRECPP_QUEUE_H

#include "../node/Node.h"

class Queue{
private:
    Node* frontPtr;
    Node* ptr;
public:
    Queue();
    void addQueue(Card card);
    Card dropQueue();
    bool isEmpty();
    ~Queue();
};

#endif //SOLITAIRECPP_QUEUE_H
