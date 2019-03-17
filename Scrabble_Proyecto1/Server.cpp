//
// Created by tati2327 on 17/03/19.
//

#include <bits/signum.h>
#include <csignal>
#include "Server.h"}
#include <cstdlib>

void Server::error(const char *msg){
    perror(msg);
    exit(1);
}

void Server::dostuff (int sock){
    int n;
    char buffer[256];

    bzero(buffer,256);
    n = static_cast<int>(read(sock, buffer, 255));
    if (n < 0) error("ERROR reading from socket");
        printf("Here is the message: %s\n",buffer);
    n = send(sock,"I got your message",18);
    if (n < 0) error("ERROR writing to socket");
}

int Server::newServer(int argc, char *argv[]){

    if (argc < 2) {
        fprintf(stderr,"ERROR, no port provided\n");
        exit(1);
    }

    sockfd = socket(AF_INET, SOCK_STREAM, 0);
    if (sockfd < 0){
        error("ERROR opening socket");
        bzero((char *) &serv_addr, sizeof(serv_addr));
        portno = atoi(argv[1]);
        serv_addr.sin_family = AF_INET;
        serv_addr.sin_addr.s_addr = INADDR_ANY;
        serv_addr.sin_port = htons(portno);
    }

    if ( bind(sockfd, (struct sockaddr *) & serv_addr, sizeof(serv_addr)) < 0)
        error("ERROR on binding");

    listen(sockfd, 5);
    clilen = sizeof(cli_addr);
    while (1) {

        if (connections<5) {
            newsockfd = accept(sockfd, (struct sockaddr *) &cli_addr, &clilen);
            connections += 1;
        }

        if (newsockfd < 0)
            error("ERROR on accept");

        pid = fork(); /*! Se llama para crear un nuevo proceso */
        if (pid < 0)
            error("ERROR on fork");

        if (pid == 0) {
            close(sockfd);
            dostuff(newsockfd);
            exit(0);
        } else {
            signal(SIGCHLD, SIG_IGN);
            close(newsockfd);
        }
    } /*! end of while */

    //close(sockfd);
    return 0;
}
