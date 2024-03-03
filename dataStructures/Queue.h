//
// Created by ADMIN on 28/02/2024.
//

#ifndef SOLITAIRECPP_QUEUE_H
#define SOLITAIRECPP_QUEUE_H

#include "../node/Node.h"

class Queue{
private:
    Node* frontPtr;
    Node* rearPtr;
    int size;
public:
    Queue();
    void addQueue(Card card);
    Card dropQueue();
    bool isEmpty();
    int getSize();
    void setSize(int _size);
    void printQueue();
    ~Queue();

    void printSortedDeck();
};

#endif //SOLITAIRECPP_QUEUE_H
