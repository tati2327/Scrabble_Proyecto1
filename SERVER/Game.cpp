#include "Game.h"
#include <iostream>
#include "cstdlib"
#include "Board.h"

using namespace std;

Game::Game(int players, int turn) {
    letterlist = letterlist.moveletters(letters); /*!< Llena la bolsa de fichas*/
    Board temp;
    board = temp.getBoard(); /*!< Llama a la matriz de juego*/
}

bool Game::validateWord() {

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

LinkedList* Game::fillRail(LinkedList *rail){
    if(rail->size() != 8){
        int count = 8-rail->size();
        while(count != 0){
            int random = rand()%(letterlist.size()-1); /*!< Se escoje una ficha al azar de la bolsa*/
            char letter = letterlist.bring(random); /*!< Asignacion de la letra*/
            rail->Add(letter); /*!< Se agrega al rail del jugador*/
            letterlist.Delete(letter); /*! Se elimina la letra de la bolsa*/
            count=count-1;
        }
    }
    return rail;
}