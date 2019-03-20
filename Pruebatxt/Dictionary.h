//
// Created by tati2327 on 19/03/19.
//

#ifndef PRUEBATXT_DICCIONARIO_H
#define PRUEBATXT_DICCIONARIO_H
#include <fstream>

using namespace std;

class dictionary {
public:
    //Atributos
    ifstream dictionary;
    char word;
    bool found;

    //Metodos
    void read();


};


#endif //PRUEBATXT_DICCIONARIO_H
