#ifndef SERVER_SERVER_H
#define SERVER_SERVER_H

#include <netinet/in.h>
#include <vector>
#include <iostream>
#include "JSON.h"

using namespace std;

/*!
 * struct ClientStruct.
 * Estructura para tener un mejor manejo de los datos del cliente
 */
struct ClientStruct{
    string name = " "; /*!< Nombre del cliente */
    int clientSocket; /*!< Socket del cliente */
    sockaddr_in info; /*!< nformacion del socket del cliente */
};

/*!
 * Clase Server.
 *
 */
class Server  {

    public:
        JSON myJson; /*!< instancia para enviar mensajes en formato json */

        int serverSocket; /*!< Socket del servidor*/
        sockaddr_in hint{}; /*!< Informacion del socket del servidor*/
        int players = 0; /*!< Contador para verificar la cantidad de jugadores que se quieren conectar a una partida */

        ClientStruct client;
        vector<ClientStruct> clients;
        int countClients = 0; /*!< Contador que lleva una cuenta de la cantidad de clientes que se han conectado */

        /*!
         * newServer().
         * Crea un nuevo socket para el servidor
         * @return booleano para verificar si se creo con exito o no
         */
        bool newServer();

        /*!
         * flirtSO.
         * Liga los procesos y el socket del servidor con el sistema operativo
         * @return booleano para verificar si se liga con exito o no
         */
        bool flirtSO();

        /*!
         * addClient.
         * Agrega los clientes al socket del servidor, y la vector de clientes
         */
        void addClient();

        /*!
         * manageClient.
         * Administra en un hilo cada cliente conectado.
         * @param _client, recibe un int que es el socket de un cliente
         */
        void manageClient(int _client);

        /*!
         * initServer().
         * Inicia el servidor
         */
        void initServer();

        /*!
         * sendMessage().
         * Envia un mensaje a los clientes en respuesta a alguna solicitud
         * @param _clientServer
         */
        void sendMessage(int _clientServer, int request);
};

#endif //SERVER_SERVER_H
