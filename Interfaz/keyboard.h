#ifndef KEYBOARD_H
#define KEYBOARD_H

#include "linkedlist.h"

/*!
 * Clase Board
 */
class Board {
    private:
        LinkedList board;
    public:
        /*!
         * Constructo de la clase*/
        Board();

        /*!
        * Getters and setters*/
        const LinkedList &getBoard() const;
        void setBoard(const LinkedList &board);
};


#endif // KEYBOARD_H
