#ifndef SERVER_BOARD_H
#define SERVER_BOARD_H

#include "LinkedList.h"

/*!
 * Clase Board
 */
class Board {
    private:
        LinkedList board;

    public:

        /*!
         * Constructor de la clase
         */
        Board();

        /*!
        * Getters and setters
        */
<<<<<<< HEAD
        const LinkedList &getBoard();
=======
        const LinkedList &getBoard() const;
>>>>>>> 86051104b3c242bc2ce8b42f95538b55a1b0cfb5
        void setBoard(const LinkedList &board);
};

#endif //SERVER_BOARD_H
