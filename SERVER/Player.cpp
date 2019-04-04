#include "Player.h"
#include <iostream>
#include "cstdlib"
#include "Game.h"

using namespace std;

void Player::refillRail() {
    rail = myGame.fillRail(rail);  /*! Asignacion de primeras fichas de juego*/
}

/*----------------------------------------------------------------------------------------------------------*/
void Player::putLetter(int letter, int posx, int posy) { /*!< Pone la letra en la matriz */
    if (board.getpos(posx,posy)->getLetter() != '0'){    /*! Si donde se quiere poner la letra no hay un cero
                                                          * entonces no se puede poner una letra porque ya habria otra*/
        cout <<"Ya hay una letra aquí";
    }else{
        board.putletter(rail->bring(letter),posx,posy); /*!< Se pone la letra*/
        myGame.fillRail(rail); /*!< Una vez puesta la letra se recoge otra de la bolsa para
                                * reponerla, se le pide una letra a Game*/
    }
}

/*----------------------------------------------------------------------------------------------------------*/
bool Player::getPlaying() const {
    return playing;
}

/*----------------------------------------------------------------------------------------------------------*/
void Player::setPlaying(bool jugando) {
    Player::playing = jugando;
}

/*----------------------------------------------------------------------------------------------------------*/
int Player::getScore() const {
    return score;
}

/*----------------------------------------------------------------------------------------------------------*/
void Player::setScore(int _score) {
    Player::score = _score;
}