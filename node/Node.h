//
// Created by ADMIN on 28/02/2024.
//

#ifndef SOLITAIRECPP_NODE_H
#define SOLITAIRECPP_NODE_H
#include "../solitaire/Card.h"

class Node{

private:
    Node *ptr;
    Card card;

public:
    Node(Card _card): card(_card), ptr(nullptr){}
    Node();
    Card getCard();
    void setCard(Card _card);
    Node* getPtr();
    void setPtr(Node* node);
};

#endif //SOLITAIRECPP_NODE_H
