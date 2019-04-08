#include <iostream>
#include "Server.h"
#include <thread>

using namespace std;

Server *s;

int main() {

    s = new Server();
    thread t(&Server::initServer,s);
    t.join();

    /*! Esta funcion hace que el main no se cierre */
    while(true){

    }
    return 0;
}