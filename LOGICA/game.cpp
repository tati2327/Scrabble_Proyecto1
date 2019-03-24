#include <iostream>
#include "cstdlib"
#include "keyboard.h"
#include "player.h"
#include "game.h"
using namespace std;

Game::Game(int players, int turn) {
    letterlist = letterlist.moveletters(letters);
    Board K1;
    keyboard = K1.L1;
    Player P1(letterlist, keyboard);
    Player P2(letterlist,keyboard);
    P1.rail.Showchar();
    P2.rail.Showchar();
    P1.putLetter(3,1,2);
    P2.putLetter(4,3,5);
    P1.rail.Showchar();
    P2.rail.Showchar();
    P1.putLetter(1,1,2);
}

int Game::getTurn() const {
    return turn;
}

void Game::setTurn(int turn) {
    Game::turn = turn;
}