//
// Created by pablo on 03/04/19.
//

#ifndef CLIENT_BOARD_H
#define CLIENT_BOARD_H

#include "LinkedList.h"

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



#endif //CLIENT_BOARD_H
