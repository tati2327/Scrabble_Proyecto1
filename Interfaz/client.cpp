#include "client.h"
#include <iostream>
#include <sys/types.h>
#include <unistd.h>
#include <sys/socket.h>
#include <netdb.h>
#include <arpa/inet.h>
#include <string.h>
#include <string>
#include <QtCore>
#include <QDebug>

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wunknown-pragmas"
#pragma clang diagnostic ignored "-Wmissing-noreturn"
using namespace std;

int Client::newClient()
{
    //	Create a socket
    int sock = socket(AF_INET, SOCK_STREAM, 0);
    if (sock == -1)
    {
        return 1;
    }

    //	Create a hint structure for the server we're connecting with
    int port = 54000;
    string ipAddress = "192.168.43.207";

    sockaddr_in hint{};
    hint.sin_family = AF_INET;
    hint.sin_port = htons(static_cast<uint16_t>(port));
    inet_pton(AF_INET, ipAddress.c_str(), &hint.sin_addr);

    //	Connect to the server on the socket
    int connectRes = connect(sock, (sockaddr*)&hint, (socklen_t)sizeof(hint));
    if (connectRes == -1)
    {
        return 1;
    }

    //	While loop:
    char buf[4096];
    string userInput;

    do {
        //		Enter lines of text
        cout << "> ";
        string message = "jjjj";
        //cin >> message;
        //getline(cin, userInput);

        //Send to server
        cout<<"EL MENSAJE ES "<<message<<endl;
        send(sock, message.c_str(), strlen(message.c_str()) + 1, 0);

        /*if (sendRes == -1){
            cout << "Could not send to server! Whoops!\r\n";
            continue;
        }*/
        //Wait for response
        memset(buf, 0, 4096);
        int bytesReceived = static_cast<int>(recv(sock, buf, 4096, 0));
        if (bytesReceived == -1)
        {
            cout << "There was an error getting response from server\r\n";
        }
        else
        {
            //		Display response
            cout << "SERVER> " << string(buf, static_cast<unsigned long>(bytesReceived)) << "\r\n";
        }
    } while(true);

    //	Close the socket
    close(sock);
    return 0;
}

#pragma clang diagnostic pop
