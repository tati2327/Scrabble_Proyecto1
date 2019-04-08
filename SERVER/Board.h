#ifndef SERVER_BOARD_H
#define SERVER_BOARD_H

#include "LinkedList.h"

/*!
 * Clase Board
 */
class Board {
    private:
        LinkedList board; /*!< Lista enlazada que va a guardar el tablero del juego */

    public:

        /*!
         * Constructor de la clase
         */
        Board();

        /*!
        * Getter del board
        */
        const LinkedList &getBoard();

        /*!
         * Setter del board
         * @param board
         */
        void setBoard(const LinkedList &board);
};

#endif //SERVER_BOARD_H
