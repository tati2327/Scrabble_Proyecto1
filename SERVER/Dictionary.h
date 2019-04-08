#ifndef SERVER_DICTIONARY_H
#define SERVER_DICTIONARY_H
#include <fstream>
#include <string.h>
#include <stdlib.h>
#include "LinkedList.h"

using namespace std;

/*!
 *Clase Dictionary.
 * Clase que lee un archivo de texto con las palabras que van a ser aceptadas en cada turno
 */
class Dictionary {
    public:
        ifstream dictionary; /*!< variable de tipo ifstream que permite un flujo de entrada para operar en archivos. */
        string word; /*!< variable de tipo string para guardar la palabra que se va a buscar en el archivo de texto. */
        bool found = false; /*!< variable booleana para retornar si se encontró o no el elemento. */

        /*!
         * searchWord.
         * Función que busca una palabra en un archivo de texto
         * @param listTemp
         * @return un booleano, true si encuentra la palabra y false si no la encuentra
         */
        bool searchWord(LinkedList listTemp);

};

#endif //SERVER_DICTIONARY_H
