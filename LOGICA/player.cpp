//
// Created by josu on 20/03/19.
//

#include "player.h"
#include <iostream>
#include "cstdlib"
#include "tokens.h"
using namespace std;

Player::Player(LinkedList _letterlist, LinkedList _keyboard) {

    LinkedList L1 = Tokens(_letterlist).L1;
    letterlist = _letterlist;
    setJugando(false);
    rail = L1;
    keyboard = _keyboard;
}

bool Player::isJugando() const {
    return jugando;
}

void Player::setJugando(bool jugando) {
    Player::jugando = jugando;
}

int Player::getPuntaje() const {
    return puntaje;
}
void Player::setPuntaje(int puntaje) {
    Player::puntaje = puntaje;
}

void Player::putLetter(int letter, int posx, int posy) {
    if (keyboard.getpos(posx,posy)->getLetter()!='0'){
        cout <<"Ya hay una letra dude";
        return;
    }
    else{
    keyboard.putletter(rail.bring(letter),posx,posy);
    int random = rand()%(letterlist.size()-1);
    char alo;
    alo = letterlist.bring(random);
    rail.Add(alo);
    }
}
