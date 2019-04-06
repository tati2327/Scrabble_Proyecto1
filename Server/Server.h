#ifndef SERVER_SERVER_H
#define SERVER_SERVER_H

#include <netinet/in.h>
#include <vector>
#include <iostream>

using namespace std;

/*!
 * Clase Server.
 *
 */
class Server {

    public:
        int serverSocket;
        sockaddr_in hint{};
        int players = 0;

        int clientSocket;
        vector<int> clients;
        int countClients = 0;

        /*!
         * newServer().
         * Crea un nuevo servidor
         * @return booleano
         */
        bool newServer();
        bool flirtSO();

        void addClient();
        void manageClient(int _client);
        void initServer();
        void sendMessage(int *_clientServer);
};

#endif //SERVER_SERVER_H
