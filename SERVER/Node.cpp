//
// Created by tati2327 on 3/04/19.
//

#include "Node.h"

#include<iostream>
#include<stdlib.h>
<<<<<<< HEAD
#include "Node.h"
=======
#include "node.h"
>>>>>>> 86051104b3c242bc2ce8b42f95538b55a1b0cfb5

using namespace std;

Node::Node(int _value) {
    setNext(nullptr);
    setValue(_value);
}

Node::Node(char _letter) {
    setNext(nullptr);
    setLetter(_letter);
}

Node::Node(char _letter, int x, int y) {
    setNext(nullptr);
    setLetter(_letter);
    setPosY(y);
    setPosX(x);
}

<<<<<<< HEAD
Node::Node(string _word, int x, int y) {
    setNext(nullptr);
    setWord(_word);
    setPosY(y);
    setPosX(x);
}

=======
>>>>>>> 86051104b3c242bc2ce8b42f95538b55a1b0cfb5
int Node::getValue() const {
    return value;
}

void Node::setValue(int value) {
    Node::value = value;
}

Node *Node::getNext() const {
    return next;
}

void Node::setNext(Node *next) {
    Node::next = next;
}

void* Node::operator new(size_t size){ /*! <Sobrecarga de new, haciendo malloc*/
    void* PPP = malloc(size);
    return PPP;
}

void Node::operator delete(void* PPP){ /*! <SO=obrecarga de delete pasando por parametro el puntero*/
    free(PPP);
}

char Node::getLetter() const {
    return letter;
}

void Node::setLetter(char letter) {
    Node::letter = letter;
}

<<<<<<< HEAD
string Node::getWord() const {
    return word;
}

void Node::setWord(string word) {
    Node::word = word;
}

=======
>>>>>>> 86051104b3c242bc2ce8b42f95538b55a1b0cfb5
int Node::getPosX() const {
    return posX;
}

void Node::setPosX(int posX) {
    Node::posX = posX;
}

int Node::getPosY() const {
    return posY;
}

void Node::setPosY(int posY) {
    Node::posY = posY;
}

int Node::getMultiplierL() const {
    return multiplierL;
}

void Node::setMultiplierL(int multiplierl) {
    Node::multiplierL = multiplierl;
}

int Node::getMultiplierP() const {
    return multiplierP;
}

void Node::setMultiplierP(int multiplierp) {
    Node::multiplierP = multiplierp;
}