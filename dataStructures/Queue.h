//
// Created by ADMIN on 28/02/2024.
//

#ifndef SOLITAIRECPP_QUEUE_H
#define SOLITAIRECPP_QUEUE_H

#include "../node/Node.h"

class Queue {
private:
    Node* lastAdd;
    int size;
public:
    Queue();
    void addQueue(Card _card);
    Card unQueue();
    bool isEmpty();
    void printQueue();
    int getSize();
    void setSize(int _size);
    ~Queue();
    void printOnBoard(bool isVisible);
};

#endif //SOLITAIRECPP_QUEUE_H
