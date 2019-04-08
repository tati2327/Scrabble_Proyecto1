
#include "Server.h"
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
    if(!newServer()) {
        cerr << "Error al crear el socket" << endl;
        return;
    }
    if(!flirtSO()) {
        cerr << "Error al conectar con el S.O." << endl;
        return;
    }

    bool accept = true;
    while(accept){
        cout<<"¿Cuantos jugadores son? "<<endl;
        cin>> players;

        if(players<=4){
            accept = false;
        }
    }

    /*! Inicio el hilo de escuchar */
    thread t_add(&Server::addClient, this);
    t_add.join();

    for(int i = 0; i <= (players-1); i++){
        cout<<"Se creo el hilo "<<i<<" para el jugador "<<clients[i].name<<endl;
        thread t_manage(&Server::manageClient, this, clients[i].clientSocket);
        t_manage.detach();
    }
}

bool Server::newServer() {
    serverSocket = socket(AF_INET, SOCK_STREAM, 0);
    if (serverSocket < 0) {
        cerr << "Error al crear el socket" << endl;
        return false;
    }

    hint.sin_family = AF_INET;
    hint.sin_port = htons(54000);
    inet_pton(AF_INET, "192.168.43.207", &hint.sin_addr);
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
    while(countClients < players) {
        socklen_t clientSize = sizeof(client);

        cout << "Esperando cliente" << endl;
        client.clientSocket = accept(serverSocket, (sockaddr *) &client.info, &clientSize); /*!< Funcion bloqueante */

        /*! Se agrega el cliente a un vector */
        clients.push_back(client);
        countClients += 1;

        char host[NI_MAXHOST]; /*!< Client's remote name*/
        char service[NI_MAXSERV]; /*!< Service (i.e. port) the client is connect on*/

        memset(host, 0, NI_MAXHOST);
        memset(service, 0, NI_MAXSERV);

        if (getnameinfo((sockaddr *) &client.clientSocket, sizeof(client.clientSocket), host, NI_MAXHOST, service, NI_MAXSERV, 0) == 0) {
            cout << host << " connected on port " << service << endl;
        } else {
            inet_ntop(AF_INET, &client.info.sin_addr, host, NI_MAXHOST);
            cout << host << " connected on port " << ntohs(client.info.sin_port) << endl;
        }
    }
    close(serverSocket);
}

void Server::manageClient(int _client){
    char buf[4096];

    cout<<"MANAGECLIENT DE "<<_client<<endl;
    while (true){
        memset(buf, 0, 4096);

        // Wait for client to send data_client
        int bytesReceived = recv(_client, buf, 4096, 0); /*!< Funcion bloqueante */
        if (bytesReceived == -1){
            cerr << "Error in recv(). Quitting" << endl;
            break;
        }

        if (bytesReceived == 0){
            cout << "Client disconnected " << endl;
            break;
        }

        cout << string(buf, 0, bytesReceived) << endl;
        /*! Aqui se abre un hilo para que el servidor brinde una respuesta */
        int request;
        cout<<"¿Cual es tu solicitud?"<<endl;
        cin>>request;
        thread t_send(&Server::sendMessage, this, _client, request);
        t_send.detach();

    }
    close(client.clientSocket);
}

void Server::sendMessage(int _clientServer, int request){
    /*! Se crea el JSON */
    myJson.jsonToDocument(request);

    string messageServer;

    /*! Se pasa a string el json*/
    messageServer = myJson.stringifyJSON();
    /*!Se envia el mensaje*/
    send(_clientServer, messageServer.c_str(), strlen(messageServer.c_str()), 0);
    return;
}