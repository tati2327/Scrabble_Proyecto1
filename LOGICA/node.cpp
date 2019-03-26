#include<iostream>
#include<stdlib.h>
#include "node.h"

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