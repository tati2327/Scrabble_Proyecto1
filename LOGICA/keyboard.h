#ifndef UNTITLED1_KEYBOARD_H
#define UNTITLED1_KEYBOARD_H
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

#endif //UNTITLED1_KEYBOARD_H
