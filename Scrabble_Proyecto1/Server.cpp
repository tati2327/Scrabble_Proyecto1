//
// Created by tati2327 on 17/03/19.
//

#include "Server.h"

void Server::error(const char *msg){
    perror(msg);
    exit(1);
}

void Server::dostuff (int sock){
    int n;
    char buffer[256];

    bzero(buffer,256);
    n = read(sock,buffer,255);
    if (n < 0) error("ERROR reading from socket");
    printf("Here is the message: %s\n",buffer);
    n = write(sock,"I got your message",18);
    if (n < 0) error("ERROR writing to socket");
}

int Server::newServer(int argc, char *argv[]){

    //signal (SIGCHLD, SIG_IGN);

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
        signal(SIGCHLD, SIG_IGN);
        newsockfd = accept(sockfd, (struct sockaddr *) &cli_addr, &clilen);

        if (newsockfd < 0)
            error("ERROR on accept");

        pid = fork();
        if (pid < 0)
            error("ERROR on fork");

        if (pid == 0) {
            close(sockfd);
            dostuff(newsockfd);
            exit(0);
        } else
            close(newsockfd);
    } /* end of while */

    close(sockfd);
    return 0; /* we never get here */
}
