#include "Client.h"

Client::Client(string name) {
    this->name = name;
}

void Client::Update(float price){
    this->price = price;

    cout << "Price at "<< name << " is now "<< price << "\n";
}
