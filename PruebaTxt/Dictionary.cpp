#include <iostream>
#include "Dictionary.h"

using namespace std;

void Dictionary::read() {

    //dictionary.open("dictionary.txt");
    //Buscar la manera en que abra el archivo desde el proyecto, no desde la compu
    dictionary.open("/home/tati2327/Documentos/GITHUB/Project1/Pruebatxt/dictionary.txt");

    if(dictionary.fail()){
        cerr << "Error: " << strerror(errno)<<endl;
        cout<<"El archivo no se puede abrir"<<endl;
        exit(1);
    }

    while(!dictionary.eof()){
        getline(dictionary,word);
        cout<<word<<endl;
    }

    dictionary.close();
}