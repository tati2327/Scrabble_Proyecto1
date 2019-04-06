#include "Server.h"
#include <iostream>
#include <sys/types.h>
#include <unistd.h>
#include <sys/socket.h>
#include <netdb.h>
#include <arpa/inet.h>
#include <string.h>
#include <string>
#include <thread>

using namespace std;

void Server::initServer(){
    if(!newServer())
        cerr << "Error al crear el socket" << endl;
    if(!flirtSO())
        cerr << "Error al conectar con el S.O." << endl;

    /*!
     * inicio el hilo de escuchar
     */
    thread t_add(&Server::addClient, this);
    t_add.join();
//    Server::addClient();
//    Server::read();
}

bool Server::newServer() {
    serverSocket = socket(AF_INET, SOCK_STREAM, 0);
    if (serverSocket < 0) {
        cerr << "Error al crear el socket" << endl;
        return false;
    }

    hint.sin_family = AF_INET;
    hint.sin_port = htons(54000);
    inet_pton(AF_INET, "127.0.0.1", &hint.sin_addr);
    return true;
}

bool Server::flirtSO() {
    if (bind(serverSocket, (sockaddr *) &hint, sizeof(hint)) < 0){
        cerr << "Error al conectar con el S.O." << endl;
        return false;
    }

    listen(serverSocket, SOMAXCONN);
    return true;
}

void Server::addClient() {
    while(countClients < 5) {
        sockaddr_in client{};
        socklen_t clientSize = sizeof(client);

        cout << "Esperando cliente" << endl;
        clientSocket = accept(serverSocket, (sockaddr *) &client, &clientSize); /*!< Funcion bloqueante */

        /*! Se agrega el cliente a un vector */
        clients.push_back(clientSocket);
        countClients += 1;

        char host[NI_MAXHOST]; /*!< Client's remote name*/
        char service[NI_MAXSERV]; /*!< Service (i.e. port) the client is connect on*/

        cout<<55<<endl;

        memset(host, 0, NI_MAXHOST);
        memset(service, 0, NI_MAXSERV);

        if (getnameinfo((sockaddr *) &client, sizeof(client), host, NI_MAXHOST, service, NI_MAXSERV, 0) == 0) {
            cout << host << " connected on port " << service << endl;
        } else {
            inet_ntop(AF_INET, &client.sin_addr, host, NI_MAXHOST);
            cout << host << " connected on port " << ntohs(client.sin_port) << endl;
        }

        /*! Cada ves que se acepte un cliente se debe poner a administrar en un hilo */
        thread t_manage(&Server::manageClient, this, &clientSocket);
        t_manage.join();

        cout<<6666<<endl;

        // Close serverSocket socket
        //close(serverSocket);
    }
}

void Server::manageClient(int* _client){
    char buf[4096];

    while (true){
        memset(buf, 0, 4096);

        // Wait for client to send data_client
        int bytesReceived = recv(*_client, buf, 4096, 0); /*!< Funcion bloqueante */
        cout<<1<<endl;
        if (bytesReceived == -1){
            cerr << "Error in recv(). Quitting" << endl;
            break;
        }

        if (bytesReceived == 0){
            cout << "Client disconnected " << endl;
            break;
        }

        cout << string(buf, 0, bytesReceived) << endl;

        /*! Aqui se habre un hilo para que el servidor brinde una respuesta */
        //thread t_send(&Server::sendMessage, this, &_client);
        //t_send.join();

        // Echo message back to client
//        sendMessage(clientSocket,buf, bytesReceived, 0);
    }
    close(clientSocket);
}

void Server::sendMessage(int *_clientServer){
    cout<<1<<endl;
    char* messageServer;
    while(serverSocket > 0){
        cin>> messageServer;
        send(*_clientServer, messageServer, 4096, 0);
    }
}