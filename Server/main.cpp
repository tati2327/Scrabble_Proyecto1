#include <iostream>
#include "Server.h"
#include <thread>

using namespace std;

Server *s;

int main() {

    s = new Server();
    thread t(&Server::initServer,s);
    t.join();
    while(true){

    }
    return 0;
}