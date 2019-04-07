#ifndef PRUEBAOBSERVER_SUBJECT_H
#define PRUEBAOBSERVER_SUBJECT_H

#include "Client.h"
#include <vector>
#include <list>
#pragma once

using namespace std;

class Subject {

    public:
        void Attach(Client *product);
        void Detach(Client *product);
        void Notify(float price);

        vector<Client*> list;
};


#endif //PRUEBAOBSERVER_SUBJECT_H
