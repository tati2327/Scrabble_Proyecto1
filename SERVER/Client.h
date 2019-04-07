//
// Created by pablo on 07/04/19.
//

#ifndef SERVER_CLIENT_H
#define SERVER_CLIENT_H


#pragma once
#include <iostream>
#include <string>
#include <string.h>
#include "Observer.h"
#include "Board.h"

using namespace std;

class Client {

public:
    string name;
    Board board;

    Client(string name);
    void Update(Board board);

};

#endif //SERVER_CLIENT_H
