#include "player.h"
#include <iostream>
#include "cstdlib"
#include "tokens.h"

using namespace std;

Player::Player(LinkedList _letterlist, LinkedList _board) {
    LinkedList L1 = Tokens(_letterlist).L1;
    letterlist = _letterlist;
    setPlaying(false);
    rail = L1;
    board = _board;
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
void Player::putLetter(int letter, int posx, int posy) {
    if (board.getpos(posx,posy)->getLetter() != '0'){
        cout <<"Ya hay una letra aquí";
    }
    else{
        board.putletter(rail.bring(letter),posx,posy);
        int random = rand()%(letterlist.size()-1);
        char alo;
        alo = letterlist.bring(random);
        rail.Add(alo);
    }
}