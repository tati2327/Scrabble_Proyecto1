//
// Created by tati2327 on 17/03/19.
//

#ifndef SCRABBLE_CLIENT_H
#define SCRABBLE_CLIENT_H
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <netdb.h>

class Client {

    public:

        char buffer[256];
        int sockfd, portno, n;
        struct sockaddr_in serv_addr;
        struct hostent *server;

        void error(const char *msg);
        int newClient(int argc, char *argv[]);

};

#endif //SCRABBLE_CLIENT_H