//
// Created by josu on 11/03/19.
//
#include <iostream>
#include "cstdlib"
#include "keyboard.h"
#include "player.h"
#include "game.h"
using namespace std;

Game::Game() {
    letterlist = letterlist.moveletters(letters);
    Keyboard K1;
    Player P1(letterlist);
    P1.rail.Showchar();
    K1.L1.putletter(P1.rail.bring(2),7,8);
    P1.rail.Showchar();

}

int Game::getTurno() const {
    return turno;
}

void Game::setTurno(int turno) {
    Game::turno = turno;
}
