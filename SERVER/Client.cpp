//
// Created by pablo on 07/04/19.
//

#include "Client.h"

Client::Client(string name) {
    this->name = name;
}

void Client::Update(Board board){
    this->board = board;



    cout << "Price at "<< name << " is now changed"<<endl;
}