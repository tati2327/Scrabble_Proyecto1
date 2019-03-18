//
// Created by josu on 15/03/19.
//

#include<iostream>
#include<stdlib.h>
#include "node.h"
using namespace std;
Node::Node(int _value) {                   //Constructor del Nodo, tanto si es para un int como para char,
    setNext(NULL);                         //siempre el next se le asigna como NULL
    setValue(_value);

}

Node::Node(char _letter) {
    setNext(NULL);
    setLetter(_letter);
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

void* Node::operator new(size_t size){     //Sobrecarga de new, haciendo Malloc

    void* PPP = malloc(size);
    return PPP;
}

void Node::operator delete(void* PPP){
    free(PPP);
}

char Node::getLetter() const {
    return letter;
}

void Node::setLetter(char letter) {
    Node::letter = letter;
}
