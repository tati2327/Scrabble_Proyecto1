//
// Created by tati2327 on 17/03/19.
//

#ifndef SCRABBLE_PROYECTO1_SERVER_H
#define SCRABBLE_PROYECTO1_SERVER_H

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>

/*!
 *Un servidor simple en el dominio de internet usando TCP
 * El número de puerto se pasa como un argumento
 * Esta versión se ejecuta para siempre, forking off separado
 * proceso para cada conexión
 *
 */
class Server {

    public:

        int sockfd, newsockfd, portno, pid;
        socklen_t clilen;
        struct sockaddr_in serv_addr, cli_addr;

        void error(const char *msg);
        int newServer(int argc, char *argv[]);

        /*!
         * dostuff.
         * Hay una instancia separada de esta función para cada conexión. Maneja toda la comunicación.
         * Una vez establecida una conexión.
         * @param sock
         */
        void dostuff (int sock);
};
#endif //SCRABBLE_PROYECTO1_SERVER_H