#ifndef PRUEBAOBSERVER_CLIENT_H
#define PRUEBAOBSERVER_CLIENT_H

#pragma once
#include <iostream>
#include <string>
#include <string.h>
#include "Observer.h"

using namespace std;

class Client {

    public:
        string name;
        float price;

        Client(string name);
        void Update(float price);

};


#endif //PRUEBAOBSERVER_CLIENT_H
