#include <iostream>
#include "server.h"
#include "client.h"

using namespace std;

int main() {

    server s;
    s.newServer();
    client c;
    c.newClient();

    return 0;
}