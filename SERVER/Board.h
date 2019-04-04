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
        const LinkedList &getBoard() const;
        void setBoard(const LinkedList &board);
};

#endif //SERVER_BOARD_H
