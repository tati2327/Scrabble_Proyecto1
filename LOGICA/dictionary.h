#ifndef UNTITLED1_DICTIONARY_H
#define UNTITLED1_DICTIONARY_H
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
        ifstream dictionary; /*!< variable de tipo ifstream que permite un flujo de entrada para operar en archivos. */
        string word; /*!< variable de tipo string para guardar la palabra que se va a buscar en el archivo de texto. */
        bool found = false; /*!< variable booleana para retornar si se encontró o no el elemento. */
        bool searchWord(string _word);
};

#endif //UNTITLED1_DICTIONARY_H
