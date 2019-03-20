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
 *Clase Dictionary.
 * Clase que lee un archivo de texto con las palabras que van a ser aceptadas en cada turno
 */
class Dictionary {
    public:
        //Atributos
        ifstream dictionary; /*!< variable de tipo ifstream que permite un flujo de entrada para operar en archivos. */
        string word; /*!< variable de tipo string para guardar la palabra que se va a buscar en el archivo de texto. */
        bool found = false; /*!< variable booleana para retornar si se encontró o no el elemento. */

        //Metodos
        bool searchWord(string _word);

};


#endif //JOSU_DICTIONARY_H
