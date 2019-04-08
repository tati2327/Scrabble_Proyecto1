#ifndef SERVER_GAME_H
#define SERVER_GAME_H

#include "LinkedList.h"
#include "Player.h"
#include "Dictionary.h"

/*!
 * Clase Game
 *
 */
class Game {
    private:
        Dictionary dictionary;       /*!objeto diccionario*/
        LinkedList letterlist;      /*! Bolsa*/
        LinkedList board;           /*! Matriz de juego*/
        LinkedList playedWords;     /*!Palabras ya validadas*/

        int turn;                   /*! Turno de juego*/
        /*! Lista de letras*/
        char letters[100]={'A','A','A','A','A','A','A','A','A','A',
                           'A','A','E','E','E','E','E','E','E','E',
                           'E','E','E','E','O','O','O','O','O','O',
                           'O','O','O','I','I','I','I','I','I','S',
                           'S','S','S','S','S','N','N','N','N','N',
                           'L','L','L','L','R','R','R','R','R','U',
                           'U','U','U','U','T','T','T','T','D','D',
                           'D','D','D','G','G','C','C','C','C','B',
                           'B','M','M','P','P','H','H','F','V','Y',
                           '1','Q','J','2','4','3','X','Z','5','5'};
    public:
        /*!
         * validateWords
         * Funcion que verifica si las palabras son correctas para validarlas
         * @param toValidate  lista con las palabras que envia el cliente
         * @return
         */
        bool validateWords(LinkedList toValidate);

        /*!
         * rowsColums
         * Funcion que verifica si los nodos tienen el mismo x
         * @param temp lista con las palabras que envia el cliente
         * @return
         */
        bool rowscolums(LinkedList temp);

        /*!
         * Constructor de la clase*/
        Game(int players, int turn);



        /*!
         * Getters and Setters*/
        const LinkedList &getPlayedWords() const;
        void setPlayedWords(const LinkedList &playedWords);

        int getTurn() const;

        void setTurn(int turn);

        const LinkedList &getLetterlist() const;

        void setLetterlist(const LinkedList &letterlist);

        const LinkedList &getBoard() const;

        void setBoard(const LinkedList &board);
};

#endif //SERVER_GAME_H
