<<<<<<< HEAD
#include <iostream>
#include "cstdlib"
#include "Board.h"
#include "Player.h"
#include "Game.h"
=======
#include "Game.h"
#include <iostream>
#include "cstdlib"
#include "Board.h"
>>>>>>> 86051104b3c242bc2ce8b42f95538b55a1b0cfb5

using namespace std;

Game::Game(int players, int turn) {
<<<<<<< HEAD
    letterlist = letterlist.moveletters(letters); /*! Llena la bolsa de fichas*/
    Board K1;
    board = K1.getBoard();                        /*!Llama a la matriz de juego*/
}

bool Game::validateWords(LinkedList toValidate, Node* hola) {

    Node* current = hola;
    LinkedList listTemp;
    board.putletter('a',1,1);
    board.putletter('e',1,2);
    board.putletter('u',1,3);
    bool rowcolum= rowscolums(toValidate);
    if (rowcolum){
        cout<<"t"<<endl;
    }
    else{
        cout<<"f"<<endl;
    }

    string word = "";
    if (rowcolum== true){
        current=hola;
        while (current != nullptr) {
            //int x = current->getPosX();
            //int y = current->getPosY();
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
        current=hola;
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
        current=hola;
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
=======
    letterlist = letterlist.moveletters(letters); /*!< Llena la bolsa de fichas*/
    Board temp;
    board = temp.getBoard(); /*!< Llama a la matriz de juego*/
}

bool Game::validateWord() {
>>>>>>> 86051104b3c242bc2ce8b42f95538b55a1b0cfb5

}

int Game::getTurn() const {
    return turn;
}
<<<<<<< HEAD
=======

>>>>>>> 86051104b3c242bc2ce8b42f95538b55a1b0cfb5
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

<<<<<<< HEAD
const LinkedList &Game::getPlayedWords() const {
    return playedWords;
}

void Game::setPlayedWords(const LinkedList &playedWords) {
    Game::playedWords = playedWords;
}
=======
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
>>>>>>> 86051104b3c242bc2ce8b42f95538b55a1b0cfb5
