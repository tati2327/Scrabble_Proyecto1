//
// Created by josu on 20/03/19.
//

#include "player.h"
#include <iostream>
#include "cstdlib"
#include "tokens.h"

Player::Player(LinkedList letterlist) {

    LinkedList L1 = Tokens(letterlist).L1;
    setJugando(false);
    rail = L1;
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

const LinkedList &Player::getRail() const {
    return rail;
}

void Player::setRail(const LinkedList &rail) {
    Player::rail = rail;
}

LinkedList Player::getList(Tokens tokens){
    return tokens.L1;
}