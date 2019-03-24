//
// Created by josu on 20/03/19.
//
#include <iostream>
#include "dictionary.h"

using namespace std;

bool Dictionary::searchWord(string _word) {

    //dictionary.open("dictionary.txt");
    //Buscar la manera en que abra el archivo desde el proyecto, no desde la compu

    //Se abre el archivo de texto
    dictionary.open("/home/tati2327/Documentos/GITHUB/Project1/LOGICA/dictionary.txt");

    //Hacer un try catch para mejor funcionamiento
    if(dictionary.fail()){
        cerr << "Error: " << strerror(errno)<<endl;
        cout<<"El archivo no se puede abrir"<<endl;
        exit(1);
    }

    //Se busca la palabra entre el diccionario
    string temp;
    while(!dictionary.eof() || !found){
        getline(dictionary,temp);

        if(temp == word){
            cout<<"La palabra se encuentra en el diccionario"<<endl;
            found = true;
        }
    }

    dictionary.close(); //Se cierra el archivo de texto para evitar errores

    if(!found){
        cout<<"La palabra NO esta en el diccionario"<<endl;
    }

    return found;
}