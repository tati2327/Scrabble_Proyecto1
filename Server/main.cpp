#include <iostream>
#include "Server.h"
#include <thread>

using namespace std;

Server *s;

int main() {

    s = new Server();
    s->initServer();

    return 0;
}