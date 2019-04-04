//
// Created by pablo on 03/04/19.
//

#include "Board.h"
#include "LinkedList.h"

#include <iostream>

using namespace std;

Board::Board() {
    int count=0;
    int x=0;
    int y=0;

    while(count<225){  /*! Se agregan las 225 posiciones de la matriz con su valor en "x" y "y"
                        * ademas se le asigna un cero de char para representar que no hay letra*/
        if(x==15){
            x=0;
            y=y+1;
        }

        board.Add('0',x,y);
        count=count+1;
        x=x+1;
    }

    board.multipliers();
    board.Showmat();
}

const LinkedList &Board::getBoard() const {
    return board;
}

void Board::setBoard(const LinkedList &board) {
    Board::board = board;
}
