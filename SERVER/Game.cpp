#include <iostream>
#include "cstdlib"
#include "Board.h"
#include "Player.h"
#include "Game.h"

using namespace std;

Game::Game(int players, int turn) {
    letterlist = letterlist.moveletters(letters); /*! Llena la bolsa de fichas*/
    Board K1;
    board = K1.getBoard();                        /*!Llama a la matriz de juego*/
}


bool Game::validateWords(LinkedList toValidate) {
    Node* current = toValidate.getHead();
    LinkedList listTemp;
    board.putletter('a',1,1);
    board.putletter('e',2,1);
    board.putletter('u',3,1);
    bool rowcolum= rowscolums(toValidate);
    if (rowcolum){
        cout<<"t"<<endl;
    }
    else{
        cout<<"f"<<endl;
    }

    string word = "";
    if (rowcolum== true){
        current=toValidate.getHead();
        while (current != nullptr) {

            int cont = 0;
            while (cont < 15) {
                Node *temp = board.getpos(current->getPosX(), cont);
                char data = temp->getLetter();
                if (data != '0') {
                    word= word + data;

                    Node* tmp= board.getpos(current->getPosX(), cont+1);
                    if (tmp->getLetter() == '0') {
                        listTemp.Add(word, current->getPosX(), cont);
                        cout<<word<<endl;
                        word = "";
                        cont++;
                    }
                    else{
                        cont++;
                    }
                }
                else {

                    cont++;
                }
            }
            if (current->getNext()== nullptr){
                break;
            }
            current = current->getNext();
        }
        current=toValidate.getHead();
        int cont = 0;
        while (cont < 15) {
            Node *temp = board.getpos(cont, current->getPosY());
            char data = temp->getLetter();
            if (data != '0') {
                word = word + data;

                if (temp->getNext()->getLetter() == '0') {
                    listTemp.Add(word, cont, current->getPosY());
                    cout<<word<<endl;
                    word = "";
                    cont++;

                } else {
                    cont++;
                }
            } else {

                cont++;
            }
        }

    }

    else {

        while (current != nullptr) {
            //int x = current->getPosX();
            //int y = current->getPosY();
            int cont = 0;
            while (cont < 15) {
                Node *temp = board.getpos(cont, current->getPosY());
                char data = temp->getLetter();
                if (data != '0') {
                    word = word + data;

                    if (temp->getNext()->getLetter() == '0') {
                        listTemp.Add(word, cont, current->getPosY());
                        cout<<word<<endl;
                        word = "";
                        cont++;

                    } else {
                        cont++;
                    }
                } else {

                    cont++;
                }
            }
            if (current->getNext() == nullptr) {
                break;
            }
            current = current->getNext();
        }
        current=toValidate.getHead();
        int cont = 0;
        while (cont < 15) {
            Node *temp = board.getpos(current->getPosX(), cont);
            char data = temp->getLetter();
            if (data != '0') {
                word= word + data;

                Node* tmp= board.getpos(current->getPosX(), cont+1);
                if (tmp->getLetter() == '0') {
                    listTemp.Add(word, current->getPosX(), cont);
                    cout<<word<<endl;
                    word = "";
                    cont++;
                }
                else{
                    cont++;
                }
            }
            else {
                cont++;
            }
        }
    }

    cout<<listTemp.size()<<"size lista"<<endl;
    return dictionary.searchWord(listTemp);
}

bool Game::rowscolums(LinkedList temp) {
    int posx=temp.bringNode(0)->getPosX();

    for(int i=1;i<temp.size();i++){
        if(temp.bringNode(i)->getPosX()!=posx){
            return true;
        }
    }
    return false;
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

const LinkedList &Game::getPlayedWords() const {
    return playedWords;
}

void Game::setPlayedWords(const LinkedList &playedWords) {
    Game::playedWords = playedWords;
}
