//
// Created by pablo on 07/04/19.
//
#include "Client.h"
#include <vector>
#include <list>
#include "Board.h"

#ifndef SERVER_SUBJECT_H
#define SERVER_SUBJECT_H
#pragma once



class Subject {
    public:
        void Attach(Client *client);
        void Detach(Client *client);
        void Notify(Board _board);

        vector<Client*> list;

};


#endif //SERVER_SUBJECT_H
