//
// Created by tati2327 on 19/03/19.
//

#ifndef JOSU_DICTIONARY_H
#define JOSU_DICTIONARY_H
#include <fstream>
#include <string.h>
#include <stdlib.h>

using namespace std;

/*!
 *
 */
class Dictionary {
    public:
        //Atributos
        ifstream dictionary;
        string word;
        bool found;

        //Metodos
        void read();

};


#endif //JOSU_DICTIONARY_H
