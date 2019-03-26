#include <iostream>
#include "cstdlib"
#include "keyboard.h"
#include "player.h"
#include "game.h"
using namespace std;

Game::Game(int players, int turn) {
    letterlist = letterlist.moveletters(letters); /*! Llena la bolsa de fichas*/
    Board K1;
    board = K1.getBoard();                        /*!Llama a la matriz de juego*/


}

int Game::getTurn() const {
    return turn;
}
void Game::setTurn(int turn) {
    Game::turn = turn;
}

const LinkedList &Game::getLetterlist() const {
    return letterlist;
}

void Game::setLetterlist(const LinkedList &letterlist) {
    Game::letterlist = letterlist;
}

const LinkedList &Game::getBoard() const {
    return board;
}

void Game::setBoard(const LinkedList &board) {
    Game::board = board;
}