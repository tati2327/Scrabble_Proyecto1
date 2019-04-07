#include "Dictionary.h"
#include <iostream>

using namespace std;

bool Dictionary::searchWord(LinkedList listTemp) {

    //dictionary.open("dictionary.txt");
    //Buscar la manera en que abra el archivo desde el proyecto, no desde la compu

    //Se abre el archivo de texto
    dictionary.open("/home/pablo/Documentos/GIT/Scrabble/PruebaTxt/dictionary.txt");

    //Hacer un try catch para mejor funcionamiento
    if (dictionary.fail()) {
        cerr << "Error: " << strerror(errno) << endl;
        cout << "El archivo no se puede abrir" << endl;
        exit(1);
    }
    Node* current = listTemp.bringNode(0);
    while (current != nullptr) {
        string word = current->getWord();

        //Se busca la palabra entre el diccionario
        string temp;
        while (!dictionary.eof() || !found) {
            getline(dictionary, temp);
            if (temp==""){

                found= false;
                break;
            }

            if (temp == word) {
                cout << "La palabra "<<temp<<" se encuentra en el diccionario" << endl;
                found = true;
            }


        }

        dictionary.close(); //Se cierra el archivo de texto para evitar errores

        if (!found) {
            cout << "La palabra "<<word<<" NO esta en el diccionario" << endl;
        }
        current = current->getNext();
    }

        return found;

}