//
// Created by josu on 11/03/19.
//
#include <iostream>
#include "cstdlib"
#include "keyboard.h"
#include "tokens.h"
#include "game.h"

Game::Game() {
    LinkedList L1;
    LinkedList Usable;
    Usable = Usable.moveletters(letters);

    Keyboard K1;
    Tokens T1(L1,Usable);
    Tokens T2(L1,Usable);
    Tokens T3(L1,Usable);
    Tokens T4(L1,Usable);
}