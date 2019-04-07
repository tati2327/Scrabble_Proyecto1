#include "Board.h"
#include "LinkedList.h"
#include <iostream>

using namespace std;

Board::Board() {
    int count=0;
    int x=0;
    int y=0;

    while(count<225){  /*!< Se agregan las 225 posiciones de la matriz con su valor en "x" y "y" ademas se le
                        * inician los valores con un cero de tipo char en representacón que no hay letras ahí*/
        if(x==15){
            x=0;
            y=y+1;
        }

        board.Add('0',x,y);
        count=count+1;
        x=x+1;
    }
    board.multipliers();
<<<<<<< HEAD
    //board.Showmat();
}

const LinkedList &Board::getBoard() {
    //board.Showmat();
=======
    board.Showmat();
}

const LinkedList &Board::getBoard() const {
>>>>>>> 86051104b3c242bc2ce8b42f95538b55a1b0cfb5
    return board;
}

void Board::setBoard(const LinkedList &board) {
    Board::board = board;
}