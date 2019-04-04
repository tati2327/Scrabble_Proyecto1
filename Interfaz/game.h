#ifndef GAME_H
#define GAME_H


#include "linkedlist.h"
#include "player.h"

/*!
 * Clase Game
 *
 */
class Game {
    private:
        LinkedList letterlist;      /*! Bolsa*/
        LinkedList board;           /*! Matriz de juego*/

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
         * Constructor de la clase*/
        Game(int players, int turn);

        /*!
         * Getters and Setters*/
        int getTurn() const;
        void setTurn(int turn);

    const LinkedList &getLetterlist() const;

    void setLetterlist(const LinkedList &letterlist);

    const LinkedList &getBoard() const;

    void setBoard(const LinkedList &board);

};

#endif // GAME_H
