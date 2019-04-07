//
// Created by pablo on 07/04/19.
//

#ifndef SERVER_OBSERVER_H
#define SERVER_OBSERVER_H


#include "Board.h"

class Observer {
public:
    virtual void update(Board board) = 0;
};


#endif //SERVER_OBSERVER_H
