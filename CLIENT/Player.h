//
// Created by pablo on 03/04/19.
//

#ifndef CLIENT_PLAYER_H
#define CLIENT_PLAYER_H


#include "Board.h"


class Player
{
public:
    Board board;
    bool playing;
    int turn;
    int score;
    LinkedList rail;
    LinkedList lettersToValidate;

    void updateBoard(LinkedList validatedLetters);
    LinkedList sendWords(LinkedList rail);


};



#endif //CLIENT_PLAYER_H
