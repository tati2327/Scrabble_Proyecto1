#include "Player.h"
#include <iostream>
#include "cstdlib"
#include "Tokens.h"


using namespace std;

Player::Player(LinkedList _letterlist, LinkedList _board) {
    letterlist = _letterlist;
    board = _board;
}
void Player::makeitplay() {
    LinkedList L1 = Tokens(letterlist).getL1();  /*! Asignacion de primeras fichas de juego*/
    setPlaying(false);
    rail = L1;
    cout<<"SE ASIGNAN LAS FICHAS ..."<<endl;
    rail.Showmat();
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

/*----------------------------------------------------------------------------------------------------------*/
void Player::putLetter(int letter, int posx, int posy) { /*!< Pone la letra en la matriz */
    if (board.getpos(posx,posy)->getLetter() != '0'){    /*! Si sonde se quiere poner la letra no hay un cero
                                                          * entonces no se puede poner una letra porque ya habria otra*/
        cout <<"Ya hay una letra aquí";
    }
    else{
        board.putletter(rail.bring(letter),posx,posy);      /*! Se pone la letra*/
        int random = rand()%(letterlist.size()-1);          /*! UNa vez puesta la letra se recoge otra de la bolsa para
                                                            * reponerla, es la misma funcion de Tokens solo que una vez*/
        char letter;
        letter = letterlist.bring(random);
        rail.Add(letter);
    }
}