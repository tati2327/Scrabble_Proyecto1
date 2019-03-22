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
    keyboard = K1.L1;
    Player P1(letterlist, keyboard);
    P1.rail.Showchar();
    P1.putLetter(2,7,8);
    letterlist.Showchar();
    letterlist.size();
    P1.rail.Showchar();
    P1.putLetter(7,1,1);
    letterlist.Showchar();
    letterlist.size();
    P1.rail.Showchar();
    P1.putLetter(1,3,1);
    letterlist.Showchar();
    letterlist.size();
    P1.rail.Showchar();

}

int Game::getTurno() const {
    return turno;
}

void Game::setTurno(int turno) {
    Game::turno = turno;
}
